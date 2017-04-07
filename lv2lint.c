/*
 * Copyright (c) 2016 Hanspeter Portner (dev@open-music-kontrollers.ch)
 *
 * This is free software: you can redistribute it and/or modify
 * it under the terms of the Artistic License 2.0 as published by
 * The Perl Foundation.
 *
 * This source is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * Artistic License 2.0 for more details.
 *
 * You should have received a copy of the Artistic License 2.0
 * along the source as a COPYING file. If not, obtain it from
 * http://www.perlfoundation.org/artistic_license_2_0.
 */

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

#include <lv2lint.h>

#include <lv2/lv2plug.in/ns/ext/patch/patch.h>
#include <lv2/lv2plug.in/ns/ext/atom/atom.h>
#include <lv2/lv2plug.in/ns/ext/port-groups/port-groups.h>
#include <lv2/lv2plug.in/ns/ext/uri-map/uri-map.h>
#include <lv2/lv2plug.in/ns/ext/event/event.h>
#include <lv2/lv2plug.in/ns/ext/instance-access/instance-access.h>
#include <lv2/lv2plug.in/ns/ext/data-access/data-access.h>
#include <lv2/lv2plug.in/ns/ext/state/state.h>
#include <lv2/lv2plug.in/ns/extensions/ui/ui.h>

static void
_map_uris(app_t *app)
{
	app->uris.rdfs_label = lilv_new_uri(app->world, LILV_NS_RDFS"label");
	app->uris.rdfs_comment = lilv_new_uri(app->world, LILV_NS_RDFS"comment");
	app->uris.rdfs_range = lilv_new_uri(app->world, LILV_NS_RDFS"range");
	app->uris.rdfs_subClassOf = lilv_new_uri(app->world, LILV_NS_RDFS"subClassOf");

	app->uris.rdf_type = lilv_new_uri(app->world, LILV_NS_RDF"type");

	app->uris.doap_description = lilv_new_uri(app->world, LILV_NS_DOAP"description");
	app->uris.doap_license = lilv_new_uri(app->world, LILV_NS_DOAP"license");
	app->uris.doap_name = lilv_new_uri(app->world, LILV_NS_DOAP"name");
	app->uris.doap_shortdesc = lilv_new_uri(app->world, LILV_NS_DOAP"shortdesc");

	app->uris.lv2_minimum = lilv_new_uri(app->world, LV2_CORE__minimum);
	app->uris.lv2_maximum = lilv_new_uri(app->world, LV2_CORE__maximum);
	app->uris.lv2_Port = lilv_new_uri(app->world, LV2_CORE__Port);
	app->uris.lv2_PortProperty = lilv_new_uri(app->world, LV2_CORE__PortProperty);
	app->uris.lv2_default = lilv_new_uri(app->world, LV2_CORE__default);
	app->uris.lv2_ControlPort = lilv_new_uri(app->world, LV2_CORE__ControlPort);
	app->uris.lv2_CVPort = lilv_new_uri(app->world, LV2_CORE__CVPort);
	app->uris.lv2_InputPort = lilv_new_uri(app->world, LV2_CORE__InputPort);
	app->uris.lv2_integer = lilv_new_uri(app->world, LV2_CORE__integer);
	app->uris.lv2_toggled = lilv_new_uri(app->world, LV2_CORE__toggled);
	app->uris.lv2_Feature = lilv_new_uri(app->world, LV2_CORE__Feature);
	app->uris.lv2_minorVersion = lilv_new_uri(app->world, LV2_CORE__minorVersion);
	app->uris.lv2_microVersion = lilv_new_uri(app->world, LV2_CORE__microVersion);
	app->uris.lv2_ExtensionData = lilv_new_uri(app->world, LV2_CORE__ExtensionData);
	app->uris.lv2_requiredFeature = lilv_new_uri(app->world, LV2_CORE__requiredFeature);

	app->uris.atom_Bool = lilv_new_uri(app->world, LV2_ATOM__Bool);
	app->uris.atom_Int = lilv_new_uri(app->world, LV2_ATOM__Int);
	app->uris.atom_Long = lilv_new_uri(app->world, LV2_ATOM__Long);
	app->uris.atom_Float = lilv_new_uri(app->world, LV2_ATOM__Float);
	app->uris.atom_Double = lilv_new_uri(app->world, LV2_ATOM__Double);
	app->uris.atom_String = lilv_new_uri(app->world, LV2_ATOM__String);
	app->uris.atom_Literal = lilv_new_uri(app->world, LV2_ATOM__String);
	app->uris.atom_Path = lilv_new_uri(app->world, LV2_ATOM__Path);
	app->uris.atom_Chunk = lilv_new_uri(app->world, LV2_ATOM__Chunk);
	app->uris.atom_URI = lilv_new_uri(app->world, LV2_ATOM__URI);
	app->uris.atom_URID = lilv_new_uri(app->world, LV2_ATOM__URID);

	app->uris.state_loadDefaultState = lilv_new_uri(app->world, LV2_STATE__loadDefaultState);
	app->uris.state_state = lilv_new_uri(app->world, LV2_STATE__state);
	app->uris.state_interface = lilv_new_uri(app->world, LV2_STATE__interface);

	app->uris.patch_writable = lilv_new_uri(app->world, LV2_PATCH__writable);
	app->uris.patch_readable = lilv_new_uri(app->world, LV2_PATCH__readable);

	app->uris.pg_group = lilv_new_uri(app->world, LV2_PORT_GROUPS__group);

	app->uris.ui_binary = lilv_new_uri(app->world, LV2_UI__binary);
	app->uris.ui_makeSONameResident = lilv_new_uri(app->world, LV2_UI_PREFIX"makeSONameResident");

	app->uris.event_EventPort = lilv_new_uri(app->world, LV2_EVENT__EventPort);
	app->uris.uri_map = lilv_new_uri(app->world, LV2_URI_MAP_URI);
	app->uris.instance_access = lilv_new_uri(app->world, LV2_INSTANCE_ACCESS_URI);
	app->uris.data_access = lilv_new_uri(app->world, LV2_DATA_ACCESS_URI);
}

static void
_unmap_uris(app_t *app)
{
	lilv_node_free(app->uris.rdfs_label);
	lilv_node_free(app->uris.rdfs_comment);
	lilv_node_free(app->uris.rdfs_range);
	lilv_node_free(app->uris.rdfs_subClassOf);

	lilv_node_free(app->uris.rdf_type);

	lilv_node_free(app->uris.doap_description);
	lilv_node_free(app->uris.doap_license);
	lilv_node_free(app->uris.doap_name);
	lilv_node_free(app->uris.doap_shortdesc);

	lilv_node_free(app->uris.lv2_minimum);
	lilv_node_free(app->uris.lv2_maximum);
	lilv_node_free(app->uris.lv2_Port);
	lilv_node_free(app->uris.lv2_PortProperty);
	lilv_node_free(app->uris.lv2_default);
	lilv_node_free(app->uris.lv2_ControlPort);
	lilv_node_free(app->uris.lv2_CVPort);
	lilv_node_free(app->uris.lv2_InputPort);
	lilv_node_free(app->uris.lv2_integer);
	lilv_node_free(app->uris.lv2_toggled);
	lilv_node_free(app->uris.lv2_Feature);
	lilv_node_free(app->uris.lv2_minorVersion);
	lilv_node_free(app->uris.lv2_microVersion);
	lilv_node_free(app->uris.lv2_ExtensionData);
	lilv_node_free(app->uris.lv2_requiredFeature);

	lilv_node_free(app->uris.atom_Bool);
	lilv_node_free(app->uris.atom_Int);
	lilv_node_free(app->uris.atom_Long);
	lilv_node_free(app->uris.atom_Float);
	lilv_node_free(app->uris.atom_Double);
	lilv_node_free(app->uris.atom_String);
	lilv_node_free(app->uris.atom_Literal);
	lilv_node_free(app->uris.atom_Path);
	lilv_node_free(app->uris.atom_Chunk);
	lilv_node_free(app->uris.atom_URI);
	lilv_node_free(app->uris.atom_URID);

	lilv_node_free(app->uris.state_loadDefaultState);
	lilv_node_free(app->uris.state_state);
	lilv_node_free(app->uris.state_interface);

	lilv_node_free(app->uris.patch_writable);
	lilv_node_free(app->uris.patch_readable);

	lilv_node_free(app->uris.pg_group);

	lilv_node_free(app->uris.ui_binary);
	lilv_node_free(app->uris.ui_makeSONameResident);

	lilv_node_free(app->uris.event_EventPort);
	lilv_node_free(app->uris.uri_map);
	lilv_node_free(app->uris.instance_access);
	lilv_node_free(app->uris.data_access);
}

int
main(int argc, char **argv)
{
	static app_t app;
	app.show = LINT_FAIL; // always report failed tests
	app.mask = LINT_FAIL; // always fail at failed tests

	fprintf(stderr,
		"%s "LV2LINT_VERSION"\n"
		"Copyright (c) 2016 Hanspeter Portner (dev@open-music-kontrollers.ch)\n"
		"Released under Artistic License 2.0 by Open Music Kontrollers\n",
		argv[0]);
	
	int c;
	while( (c = getopt(argc, argv, "vhS:E:") ) != -1)
	{
		switch(c)
		{
			case 'v':
				fprintf(stderr,
					"--------------------------------------------------------------------\n"
					"This is free software: you can redistribute it and/or modify\n"
					"it under the terms of the Artistic License 2.0 as published by\n"
					"The Perl Foundation.\n"
					"\n"
					"This source is distributed in the hope that it will be useful,\n"
					"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
					"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the\n"
					"Artistic License 2.0 for more details.\n"
					"\n"
					"You should have received a copy of the Artistic License 2.0\n"
					"along the source as a COPYING file. If not, obtain it from\n"
					"http://www.perlfoundation.org/artistic_license_2_0.\n\n");
				return 0;
			case 'h':
				fprintf(stderr,
					"--------------------------------------------------------------------\n"
					"USAGE\n"
					"   %s [OPTIONS] {PLUGIN_URI}*\n"
					"\n"
					"OPTIONS\n"
					"   [-v]                 print version information\n"
					"   [-h]                 print usage information\n"

					"   [-S warn]            show warnings\n"
					"   [-S note]            show notes\n"
					"   [-S all]             show warnings and notes\n"

					"   [-E warn]            treat warnings as errors\n"
					"   [-E note]            treat notes as errors\n"
					"   [-E all]             treat warnings and notes as errors\n\n"
					, argv[0]);
				return 0;
			case 'S':
				if(!strcmp(optarg, "warn"))
				{
					app.show|= LINT_WARN;
				}
				else if(!strcmp(optarg, "note"))
				{
					app.show|= LINT_NOTE;
				}
				else if(!strcmp(optarg, "all"))
				{
					app.show|= LINT_WARN | LINT_NOTE;
				}
				break;
			case 'E':
				if(!strcmp(optarg, "warn"))
				{
					app.show |= LINT_WARN;
					app.mask |= LINT_WARN;
				}
				else if(!strcmp(optarg, "note"))
				{
					app.show |= LINT_NOTE;
					app.mask |= LINT_NOTE;
				}
				else if(!strcmp(optarg, "all"))
				{
					app.show |= LINT_WARN | LINT_NOTE;
					app.mask |= LINT_WARN | LINT_NOTE;
				}
				break;
			case '?':
				if( (optopt == 'S') || (optopt == 'E') )
					fprintf(stderr, "Option `-%c' requires an argument.\n", optopt);
				else if(isprint(optopt))
					fprintf(stderr, "Unknown option `-%c'.\n", optopt);
				else
					fprintf(stderr, "Unknown option character `\\x%x'.\n", optopt);
				return -1;
			default:
				return -1;
		}
	}

	app.world = lilv_world_new();
	if(!app.world)
		return -1;

	_map_uris(&app);

	lilv_world_load_all(app.world);

	int ret = 0;
	for(int i=optind; i<argc; i++)
	{
		const char *plugin_uri = argv[i];
		if(plugin_uri)
		{
			LilvNode *plugin_uri_node = lilv_new_uri(app.world, plugin_uri);
			if(plugin_uri_node)
			{
				const LilvPlugin *plugins = lilv_world_get_all_plugins(app.world);
				if(plugins)
				{
					app.plugin = lilv_plugins_get_by_uri(plugins, plugin_uri_node);
					if(app.plugin)
					{
						if(!test_plugin(&app))
							ret = -1;
						app.plugin = NULL;
					}
					else
						ret = -1;
				}
			}
			lilv_node_free(plugin_uri_node);
		}
	}

	_unmap_uris(&app);

	lilv_world_free(app.world);

	return ret;
}
