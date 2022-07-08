/*
 * SPDX-FileCopyrightText: Hanspeter Portner <dev@open-music-kontrollers.ch>
 * SPDX-License-Identifier: Artistic-2.0
 */

#include <lv2lint/lv2lint_syscall.h>

const int syscall_ids [SYSCALL_MAX] = {
	[SYSCALL__llseek] = 9437324,
	[SYSCALL__newselect] = 9437326,
	[SYSCALL__sysctl] = 9437333,
	[SYSCALL_accept] = 9437469,
	[SYSCALL_accept4] = 9437550,
	[SYSCALL_access] = 9437217,
	[SYSCALL_acct] = 9437235,
	[SYSCALL_add_key] = 9437493,
	[SYSCALL_adjtimex] = 9437308,
	[SYSCALL_alarm] = 9437211,
	[SYSCALL_arc_gettls] = -1,
	[SYSCALL_arc_settls] = -1,
	[SYSCALL_arc_usr_cmpxchg] = -1,
	[SYSCALL_arch_prctl] = -1,
	[SYSCALL_arm_fadvise64_64] = 9437454,
	[SYSCALL_atomic_barrier] = -1,
	[SYSCALL_atomic_cmpxchg_32] = -1,
	[SYSCALL_bdflush] = 9437318,
	[SYSCALL_bind] = 9437466,
	[SYSCALL_bpf] = 9437570,
	[SYSCALL_brk] = 9437229,
	[SYSCALL_cachectl] = -1,
	[SYSCALL_cacheflush] = -1,
	[SYSCALL_capget] = 9437368,
	[SYSCALL_capset] = 9437369,
	[SYSCALL_chdir] = 9437196,
	[SYSCALL_chmod] = 9437199,
	[SYSCALL_chown] = 9437366,
	[SYSCALL_chown32] = 9437396,
	[SYSCALL_chroot] = 9437245,
	[SYSCALL_clock_adjtime] = 9437556,
	[SYSCALL_clock_adjtime64] = 9437589,
	[SYSCALL_clock_getres] = 9437448,
	[SYSCALL_clock_getres_time64] = 9437590,
	[SYSCALL_clock_gettime] = 9437447,
	[SYSCALL_clock_gettime64] = 9437587,
	[SYSCALL_clock_nanosleep] = 9437449,
	[SYSCALL_clock_nanosleep_time64] = 9437591,
	[SYSCALL_clock_settime] = 9437446,
	[SYSCALL_clock_settime64] = 9437588,
	[SYSCALL_clone] = 9437304,
	[SYSCALL_clone2] = -1,
	[SYSCALL_clone3] = 9437619,
	[SYSCALL_close] = 9437190,
	[SYSCALL_close_range] = 9437620,
	[SYSCALL_connect] = 9437467,
	[SYSCALL_copy_file_range] = 9437575,
	[SYSCALL_creat] = 9437192,
	[SYSCALL_create_module] = -1,
	[SYSCALL_delete_module] = 9437313,
	[SYSCALL_dipc] = -1,
	[SYSCALL_dup] = 9437225,
	[SYSCALL_dup2] = 9437247,
	[SYSCALL_dup3] = 9437542,
	[SYSCALL_epoll_create] = 9437434,
	[SYSCALL_epoll_create1] = 9437541,
	[SYSCALL_epoll_ctl] = 9437435,
	[SYSCALL_epoll_ctl_old] = -1,
	[SYSCALL_epoll_pwait] = 9437530,
	[SYSCALL_epoll_pwait2] = 9437625,
	[SYSCALL_epoll_wait] = 9437436,
	[SYSCALL_epoll_wait_old] = -1,
	[SYSCALL_eventfd] = 9437535,
	[SYSCALL_eventfd2] = 9437540,
	[SYSCALL_exec_with_loader] = -1,
	[SYSCALL_execv] = -1,
	[SYSCALL_execve] = 9437195,
	[SYSCALL_execveat] = 9437571,
	[SYSCALL_exit] = 9437185,
	[SYSCALL_exit_group] = 9437432,
	[SYSCALL_faccessat] = 9437518,
	[SYSCALL_faccessat2] = 9437623,
	[SYSCALL_fadvise64] = -1,
	[SYSCALL_fadvise64_64] = -1,
	[SYSCALL_fallocate] = 9437536,
	[SYSCALL_fanotify_init] = 9437551,
	[SYSCALL_fanotify_mark] = 9437552,
	[SYSCALL_fchdir] = 9437317,
	[SYSCALL_fchmod] = 9437278,
	[SYSCALL_fchmodat] = 9437517,
	[SYSCALL_fchown] = 9437279,
	[SYSCALL_fchown32] = 9437391,
	[SYSCALL_fchownat] = 9437509,
	[SYSCALL_fcntl] = 9437239,
	[SYSCALL_fcntl64] = 9437405,
	[SYSCALL_fdatasync] = 9437332,
	[SYSCALL_fgetxattr] = 9437415,
	[SYSCALL_finit_module] = 9437563,
	[SYSCALL_flistxattr] = 9437418,
	[SYSCALL_flock] = 9437327,
	[SYSCALL_fork] = 9437186,
	[SYSCALL_fp_udfiex_crtl] = -1,
	[SYSCALL_fremovexattr] = 9437421,
	[SYSCALL_fsconfig] = 9437615,
	[SYSCALL_fsetxattr] = 9437412,
	[SYSCALL_fsmount] = 9437616,
	[SYSCALL_fsopen] = 9437614,
	[SYSCALL_fspick] = 9437617,
	[SYSCALL_fstat] = 9437292,
	[SYSCALL_fstat64] = 9437381,
	[SYSCALL_fstatat64] = 9437511,
	[SYSCALL_fstatfs] = 9437284,
	[SYSCALL_fstatfs64] = 9437451,
	[SYSCALL_fsync] = 9437302,
	[SYSCALL_ftruncate] = 9437277,
	[SYSCALL_ftruncate64] = 9437378,
	[SYSCALL_futex] = 9437424,
	[SYSCALL_futex_time64] = 9437606,
	[SYSCALL_futex_waitv] = 9437633,
	[SYSCALL_futimesat] = 9437510,
	[SYSCALL_get_kernel_syms] = -1,
	[SYSCALL_get_mempolicy] = 9437504,
	[SYSCALL_get_robust_list] = 9437523,
	[SYSCALL_get_thread_area] = -1,
	[SYSCALL_getcpu] = 9437529,
	[SYSCALL_getcwd] = 9437367,
	[SYSCALL_getdents] = 9437325,
	[SYSCALL_getdents64] = 9437401,
	[SYSCALL_getdomainname] = -1,
	[SYSCALL_getdtablesize] = -1,
	[SYSCALL_getegid] = 9437234,
	[SYSCALL_getegid32] = 9437386,
	[SYSCALL_geteuid] = 9437233,
	[SYSCALL_geteuid32] = 9437385,
	[SYSCALL_getgid] = 9437231,
	[SYSCALL_getgid32] = 9437384,
	[SYSCALL_getgroups] = 9437264,
	[SYSCALL_getgroups32] = 9437389,
	[SYSCALL_gethostname] = -1,
	[SYSCALL_getitimer] = 9437289,
	[SYSCALL_getpagesize] = -1,
	[SYSCALL_getpeername] = 9437471,
	[SYSCALL_getpgid] = 9437316,
	[SYSCALL_getpgrp] = 9437249,
	[SYSCALL_getpid] = 9437204,
	[SYSCALL_getpmsg] = -1,
	[SYSCALL_getppid] = 9437248,
	[SYSCALL_getpriority] = 9437280,
	[SYSCALL_getrandom] = 9437568,
	[SYSCALL_getresgid] = 9437355,
	[SYSCALL_getresgid32] = 9437395,
	[SYSCALL_getresuid] = 9437349,
	[SYSCALL_getresuid32] = 9437393,
	[SYSCALL_getrlimit] = 9437260,
	[SYSCALL_getrusage] = 9437261,
	[SYSCALL_getsid] = 9437331,
	[SYSCALL_getsockname] = 9437470,
	[SYSCALL_getsockopt] = 9437479,
	[SYSCALL_gettid] = 9437408,
	[SYSCALL_gettimeofday] = 9437262,
	[SYSCALL_getuid] = 9437208,
	[SYSCALL_getuid32] = 9437383,
	[SYSCALL_getunwind] = -1,
	[SYSCALL_getxattr] = 9437413,
	[SYSCALL_getxgid] = -1,
	[SYSCALL_getxpid] = -1,
	[SYSCALL_getxuid] = -1,
	[SYSCALL_idle] = -1,
	[SYSCALL_init_module] = 9437312,
	[SYSCALL_inotify_add_watch] = 9437501,
	[SYSCALL_inotify_init] = 9437500,
	[SYSCALL_inotify_init1] = 9437544,
	[SYSCALL_inotify_rm_watch] = 9437502,
	[SYSCALL_io_cancel] = 9437431,
	[SYSCALL_io_destroy] = 9437428,
	[SYSCALL_io_getevents] = 9437429,
	[SYSCALL_io_pgetevents] = 9437583,
	[SYSCALL_io_pgetevents_time64] = 9437600,
	[SYSCALL_io_setup] = 9437427,
	[SYSCALL_io_submit] = 9437430,
	[SYSCALL_io_uring_enter] = 9437610,
	[SYSCALL_io_uring_register] = 9437611,
	[SYSCALL_io_uring_setup] = 9437609,
	[SYSCALL_ioctl] = 9437238,
	[SYSCALL_ioperm] = -1,
	[SYSCALL_iopl] = -1,
	[SYSCALL_ioprio_get] = 9437499,
	[SYSCALL_ioprio_set] = 9437498,
	[SYSCALL_ipc] = 9437301,
	[SYSCALL_kcmp] = 9437562,
	[SYSCALL_kern_features] = -1,
	[SYSCALL_kexec_file_load] = 9437585,
	[SYSCALL_kexec_load] = 9437531,
	[SYSCALL_keyctl] = 9437495,
	[SYSCALL_kill] = 9437221,
	[SYSCALL_landlock_add_rule] = 9437629,
	[SYSCALL_landlock_create_ruleset] = 9437628,
	[SYSCALL_landlock_restrict_self] = 9437630,
	[SYSCALL_lchown] = 9437200,
	[SYSCALL_lchown32] = 9437382,
	[SYSCALL_lgetxattr] = 9437414,
	[SYSCALL_link] = 9437193,
	[SYSCALL_linkat] = 9437514,
	[SYSCALL_listen] = 9437468,
	[SYSCALL_listxattr] = 9437416,
	[SYSCALL_llistxattr] = 9437417,
	[SYSCALL_lookup_dcookie] = 9437433,
	[SYSCALL_lremovexattr] = 9437420,
	[SYSCALL_lseek] = 9437203,
	[SYSCALL_lsetxattr] = 9437411,
	[SYSCALL_lstat] = 9437291,
	[SYSCALL_lstat64] = 9437380,
	[SYSCALL_madvise] = 9437404,
	[SYSCALL_mbind] = 9437503,
	[SYSCALL_membarrier] = 9437573,
	[SYSCALL_memfd_create] = 9437569,
	[SYSCALL_memfd_secret] = -1,
	[SYSCALL_memory_ordering] = -1,
	[SYSCALL_migrate_pages] = 9437584,
	[SYSCALL_mincore] = 9437403,
	[SYSCALL_mkdir] = 9437223,
	[SYSCALL_mkdirat] = 9437507,
	[SYSCALL_mknod] = 9437198,
	[SYSCALL_mknodat] = 9437508,
	[SYSCALL_mlock] = 9437334,
	[SYSCALL_mlock2] = 9437574,
	[SYSCALL_mlockall] = 9437336,
	[SYSCALL_mmap] = 9437274,
	[SYSCALL_mmap2] = 9437376,
	[SYSCALL_modify_ldt] = -1,
	[SYSCALL_mount] = 9437205,
	[SYSCALL_mount_setattr] = 9437626,
	[SYSCALL_move_mount] = 9437613,
	[SYSCALL_move_pages] = 9437528,
	[SYSCALL_mprotect] = 9437309,
	[SYSCALL_mq_getsetattr] = 9437463,
	[SYSCALL_mq_notify] = 9437462,
	[SYSCALL_mq_open] = 9437458,
	[SYSCALL_mq_timedreceive] = 9437461,
	[SYSCALL_mq_timedreceive_time64] = 9437603,
	[SYSCALL_mq_timedsend] = 9437460,
	[SYSCALL_mq_timedsend_time64] = 9437602,
	[SYSCALL_mq_unlink] = 9437459,
	[SYSCALL_mremap] = 9437347,
	[SYSCALL_msgctl] = 9437488,
	[SYSCALL_msgget] = 9437487,
	[SYSCALL_msgrcv] = 9437486,
	[SYSCALL_msgsnd] = 9437485,
	[SYSCALL_msync] = 9437328,
	[SYSCALL_multiplexer] = -1,
	[SYSCALL_munlock] = 9437335,
	[SYSCALL_munlockall] = 9437337,
	[SYSCALL_munmap] = 9437275,
	[SYSCALL_name_to_handle_at] = 9437554,
	[SYSCALL_nanosleep] = 9437346,
	[SYSCALL_newfstatat] = -1,
	[SYSCALL_nfsservctl] = 9437353,
	[SYSCALL_nice] = 9437218,
	[SYSCALL_old_adjtimex] = -1,
	[SYSCALL_old_getpagesize] = -1,
	[SYSCALL_oldfstat] = -1,
	[SYSCALL_oldlstat] = -1,
	[SYSCALL_oldolduname] = -1,
	[SYSCALL_oldstat] = -1,
	[SYSCALL_oldumount] = -1,
	[SYSCALL_olduname] = -1,
	[SYSCALL_open] = 9437189,
	[SYSCALL_open_by_handle_at] = 9437555,
	[SYSCALL_open_tree] = 9437612,
	[SYSCALL_openat] = 9437506,
	[SYSCALL_openat2] = 9437621,
	[SYSCALL_or1k_atomic] = -1,
	[SYSCALL_osf_adjtime] = -1,
	[SYSCALL_osf_afs_syscall] = -1,
	[SYSCALL_osf_alt_plock] = -1,
	[SYSCALL_osf_alt_setsid] = -1,
	[SYSCALL_osf_alt_sigpending] = -1,
	[SYSCALL_osf_asynch_daemon] = -1,
	[SYSCALL_osf_audcntl] = -1,
	[SYSCALL_osf_audgen] = -1,
	[SYSCALL_osf_chflags] = -1,
	[SYSCALL_osf_execve] = -1,
	[SYSCALL_osf_exportfs] = -1,
	[SYSCALL_osf_fchflags] = -1,
	[SYSCALL_osf_fdatasync] = -1,
	[SYSCALL_osf_fpathconf] = -1,
	[SYSCALL_osf_fstat] = -1,
	[SYSCALL_osf_fstatfs] = -1,
	[SYSCALL_osf_fstatfs64] = -1,
	[SYSCALL_osf_fuser] = -1,
	[SYSCALL_osf_getaddressconf] = -1,
	[SYSCALL_osf_getdirentries] = -1,
	[SYSCALL_osf_getdomainname] = -1,
	[SYSCALL_osf_getfh] = -1,
	[SYSCALL_osf_getfsstat] = -1,
	[SYSCALL_osf_gethostid] = -1,
	[SYSCALL_osf_getitimer] = -1,
	[SYSCALL_osf_getlogin] = -1,
	[SYSCALL_osf_getmnt] = -1,
	[SYSCALL_osf_getrusage] = -1,
	[SYSCALL_osf_getsysinfo] = -1,
	[SYSCALL_osf_gettimeofday] = -1,
	[SYSCALL_osf_kloadcall] = -1,
	[SYSCALL_osf_kmodcall] = -1,
	[SYSCALL_osf_lstat] = -1,
	[SYSCALL_osf_memcntl] = -1,
	[SYSCALL_osf_mincore] = -1,
	[SYSCALL_osf_mount] = -1,
	[SYSCALL_osf_mremap] = -1,
	[SYSCALL_osf_msfs_syscall] = -1,
	[SYSCALL_osf_msleep] = -1,
	[SYSCALL_osf_mvalid] = -1,
	[SYSCALL_osf_mwakeup] = -1,
	[SYSCALL_osf_naccept] = -1,
	[SYSCALL_osf_nfssvc] = -1,
	[SYSCALL_osf_ngetpeername] = -1,
	[SYSCALL_osf_ngetsockname] = -1,
	[SYSCALL_osf_nrecvfrom] = -1,
	[SYSCALL_osf_nrecvmsg] = -1,
	[SYSCALL_osf_nsendmsg] = -1,
	[SYSCALL_osf_ntp_adjtime] = -1,
	[SYSCALL_osf_ntp_gettime] = -1,
	[SYSCALL_osf_old_creat] = -1,
	[SYSCALL_osf_old_fstat] = -1,
	[SYSCALL_osf_old_getpgrp] = -1,
	[SYSCALL_osf_old_killpg] = -1,
	[SYSCALL_osf_old_lstat] = -1,
	[SYSCALL_osf_old_open] = -1,
	[SYSCALL_osf_old_sigaction] = -1,
	[SYSCALL_osf_old_sigblock] = -1,
	[SYSCALL_osf_old_sigreturn] = -1,
	[SYSCALL_osf_old_sigsetmask] = -1,
	[SYSCALL_osf_old_sigvec] = -1,
	[SYSCALL_osf_old_stat] = -1,
	[SYSCALL_osf_old_vadvise] = -1,
	[SYSCALL_osf_old_vtrace] = -1,
	[SYSCALL_osf_old_wait] = -1,
	[SYSCALL_osf_oldquota] = -1,
	[SYSCALL_osf_pathconf] = -1,
	[SYSCALL_osf_pid_block] = -1,
	[SYSCALL_osf_pid_unblock] = -1,
	[SYSCALL_osf_plock] = -1,
	[SYSCALL_osf_priocntlset] = -1,
	[SYSCALL_osf_profil] = -1,
	[SYSCALL_osf_proplist_syscall] = -1,
	[SYSCALL_osf_reboot] = -1,
	[SYSCALL_osf_revoke] = -1,
	[SYSCALL_osf_sbrk] = -1,
	[SYSCALL_osf_security] = -1,
	[SYSCALL_osf_select] = -1,
	[SYSCALL_osf_set_program_attributes] = -1,
	[SYSCALL_osf_set_speculative] = -1,
	[SYSCALL_osf_sethostid] = -1,
	[SYSCALL_osf_setitimer] = -1,
	[SYSCALL_osf_setlogin] = -1,
	[SYSCALL_osf_setsysinfo] = -1,
	[SYSCALL_osf_settimeofday] = -1,
	[SYSCALL_osf_shmat] = -1,
	[SYSCALL_osf_signal] = -1,
	[SYSCALL_osf_sigprocmask] = -1,
	[SYSCALL_osf_sigsendset] = -1,
	[SYSCALL_osf_sigstack] = -1,
	[SYSCALL_osf_sigwaitprim] = -1,
	[SYSCALL_osf_sstk] = -1,
	[SYSCALL_osf_stat] = -1,
	[SYSCALL_osf_statfs] = -1,
	[SYSCALL_osf_statfs64] = -1,
	[SYSCALL_osf_subsys_info] = -1,
	[SYSCALL_osf_swapctl] = -1,
	[SYSCALL_osf_swapon] = -1,
	[SYSCALL_osf_syscall] = -1,
	[SYSCALL_osf_sysinfo] = -1,
	[SYSCALL_osf_table] = -1,
	[SYSCALL_osf_uadmin] = -1,
	[SYSCALL_osf_usleep_thread] = -1,
	[SYSCALL_osf_uswitch] = -1,
	[SYSCALL_osf_utc_adjtime] = -1,
	[SYSCALL_osf_utc_gettime] = -1,
	[SYSCALL_osf_utimes] = -1,
	[SYSCALL_osf_utsname] = -1,
	[SYSCALL_osf_wait4] = -1,
	[SYSCALL_osf_waitid] = -1,
	[SYSCALL_pause] = 9437213,
	[SYSCALL_pciconfig_iobase] = 9437455,
	[SYSCALL_pciconfig_read] = 9437456,
	[SYSCALL_pciconfig_write] = 9437457,
	[SYSCALL_perf_event_open] = 9437548,
	[SYSCALL_perfctr] = -1,
	[SYSCALL_personality] = 9437320,
	[SYSCALL_pidfd_getfd] = 9437622,
	[SYSCALL_pidfd_open] = 9437618,
	[SYSCALL_pidfd_send_signal] = 9437608,
	[SYSCALL_pipe] = 9437226,
	[SYSCALL_pipe2] = 9437543,
	[SYSCALL_pivot_root] = 9437402,
	[SYSCALL_pkey_alloc] = 9437579,
	[SYSCALL_pkey_free] = 9437580,
	[SYSCALL_pkey_mprotect] = 9437578,
	[SYSCALL_poll] = 9437352,
	[SYSCALL_ppoll] = 9437520,
	[SYSCALL_ppoll_time64] = 9437598,
	[SYSCALL_prctl] = 9437356,
	[SYSCALL_pread64] = 9437364,
	[SYSCALL_preadv] = 9437545,
	[SYSCALL_preadv2] = 9437576,
	[SYSCALL_prlimit64] = 9437553,
	[SYSCALL_process_madvise] = 9437624,
	[SYSCALL_process_mrelease] = 9437632,
	[SYSCALL_process_vm_readv] = 9437560,
	[SYSCALL_process_vm_writev] = 9437561,
	[SYSCALL_pselect6] = 9437519,
	[SYSCALL_pselect6_time64] = 9437597,
	[SYSCALL_ptrace] = 9437210,
	[SYSCALL_pwrite64] = 9437365,
	[SYSCALL_pwritev] = 9437546,
	[SYSCALL_pwritev2] = 9437577,
	[SYSCALL_query_module] = -1,
	[SYSCALL_quotactl] = 9437315,
	[SYSCALL_quotactl_fd] = 9437627,
	[SYSCALL_read] = 9437187,
	[SYSCALL_readahead] = 9437409,
	[SYSCALL_readdir] = 9437273,
	[SYSCALL_readlink] = 9437269,
	[SYSCALL_readlinkat] = 9437516,
	[SYSCALL_readv] = 9437329,
	[SYSCALL_reboot] = 9437272,
	[SYSCALL_recv] = 9437475,
	[SYSCALL_recvfrom] = 9437476,
	[SYSCALL_recvmmsg] = 9437549,
	[SYSCALL_recvmmsg_time64] = 9437601,
	[SYSCALL_recvmsg] = 9437481,
	[SYSCALL_remap_file_pages] = 9437437,
	[SYSCALL_removexattr] = 9437419,
	[SYSCALL_rename] = 9437222,
	[SYSCALL_renameat] = 9437513,
	[SYSCALL_renameat2] = 9437566,
	[SYSCALL_request_key] = 9437494,
	[SYSCALL_restart_syscall] = 9437184,
	[SYSCALL_riscv_flush_icache] = -1,
	[SYSCALL_rmdir] = 9437224,
	[SYSCALL_rseq] = 9437582,
	[SYSCALL_rt_sigaction] = 9437358,
	[SYSCALL_rt_sigpending] = 9437360,
	[SYSCALL_rt_sigprocmask] = 9437359,
	[SYSCALL_rt_sigqueueinfo] = 9437362,
	[SYSCALL_rt_sigreturn] = 9437357,
	[SYSCALL_rt_sigsuspend] = 9437363,
	[SYSCALL_rt_sigtimedwait] = 9437361,
	[SYSCALL_rt_sigtimedwait_time64] = 9437605,
	[SYSCALL_rt_tgsigqueueinfo] = 9437547,
	[SYSCALL_rtas] = -1,
	[SYSCALL_s390_guarded_storage] = -1,
	[SYSCALL_s390_pci_mmio_read] = -1,
	[SYSCALL_s390_pci_mmio_write] = -1,
	[SYSCALL_s390_runtime_instr] = -1,
	[SYSCALL_s390_sthyi] = -1,
	[SYSCALL_sched_get_affinity] = -1,
	[SYSCALL_sched_get_priority_max] = 9437343,
	[SYSCALL_sched_get_priority_min] = 9437344,
	[SYSCALL_sched_getaffinity] = 9437426,
	[SYSCALL_sched_getattr] = 9437565,
	[SYSCALL_sched_getparam] = 9437339,
	[SYSCALL_sched_getscheduler] = 9437341,
	[SYSCALL_sched_rr_get_interval] = 9437345,
	[SYSCALL_sched_rr_get_interval_time64] = 9437607,
	[SYSCALL_sched_set_affinity] = -1,
	[SYSCALL_sched_setaffinity] = 9437425,
	[SYSCALL_sched_setattr] = 9437564,
	[SYSCALL_sched_setparam] = 9437338,
	[SYSCALL_sched_setscheduler] = 9437340,
	[SYSCALL_sched_yield] = 9437342,
	[SYSCALL_seccomp] = 9437567,
	[SYSCALL_select] = 9437266,
	[SYSCALL_semctl] = 9437484,
	[SYSCALL_semget] = 9437483,
	[SYSCALL_semop] = 9437482,
	[SYSCALL_semtimedop] = 9437496,
	[SYSCALL_semtimedop_time64] = 9437604,
	[SYSCALL_send] = 9437473,
	[SYSCALL_sendfile] = 9437371,
	[SYSCALL_sendfile64] = 9437423,
	[SYSCALL_sendmmsg] = 9437558,
	[SYSCALL_sendmsg] = 9437480,
	[SYSCALL_sendto] = 9437474,
	[SYSCALL_set_mempolicy] = 9437505,
	[SYSCALL_set_mempolicy_home_node] = 9437634,
	[SYSCALL_set_robust_list] = 9437522,
	[SYSCALL_set_thread_area] = -1,
	[SYSCALL_set_tid_address] = 9437440,
	[SYSCALL_setdomainname] = 9437305,
	[SYSCALL_setfsgid] = 9437323,
	[SYSCALL_setfsgid32] = 9437400,
	[SYSCALL_setfsuid] = 9437322,
	[SYSCALL_setfsuid32] = 9437399,
	[SYSCALL_setgid] = 9437230,
	[SYSCALL_setgid32] = 9437398,
	[SYSCALL_setgroups] = 9437265,
	[SYSCALL_setgroups32] = 9437390,
	[SYSCALL_sethae] = -1,
	[SYSCALL_sethostname] = 9437258,
	[SYSCALL_setitimer] = 9437288,
	[SYSCALL_setns] = 9437559,
	[SYSCALL_setpgid] = 9437241,
	[SYSCALL_setpgrp] = -1,
	[SYSCALL_setpriority] = 9437281,
	[SYSCALL_setregid] = 9437255,
	[SYSCALL_setregid32] = 9437388,
	[SYSCALL_setresgid] = 9437354,
	[SYSCALL_setresgid32] = 9437394,
	[SYSCALL_setresuid] = 9437348,
	[SYSCALL_setresuid32] = 9437392,
	[SYSCALL_setreuid] = 9437254,
	[SYSCALL_setreuid32] = 9437387,
	[SYSCALL_setrlimit] = 9437259,
	[SYSCALL_setsid] = 9437250,
	[SYSCALL_setsockopt] = 9437478,
	[SYSCALL_settimeofday] = 9437263,
	[SYSCALL_setuid] = 9437207,
	[SYSCALL_setuid32] = 9437397,
	[SYSCALL_setxattr] = 9437410,
	[SYSCALL_sgetmask] = -1,
	[SYSCALL_shmat] = 9437489,
	[SYSCALL_shmctl] = 9437492,
	[SYSCALL_shmdt] = 9437490,
	[SYSCALL_shmget] = 9437491,
	[SYSCALL_shutdown] = 9437477,
	[SYSCALL_sigaction] = 9437251,
	[SYSCALL_sigaltstack] = 9437370,
	[SYSCALL_signal] = -1,
	[SYSCALL_signalfd] = 9437533,
	[SYSCALL_signalfd4] = 9437539,
	[SYSCALL_sigpending] = 9437257,
	[SYSCALL_sigprocmask] = 9437310,
	[SYSCALL_sigreturn] = 9437303,
	[SYSCALL_sigsuspend] = 9437256,
	[SYSCALL_socket] = 9437465,
	[SYSCALL_socketcall] = 9437286,
	[SYSCALL_socketpair] = 9437472,
	[SYSCALL_splice] = 9437524,
	[SYSCALL_spu_create] = -1,
	[SYSCALL_spu_run] = -1,
	[SYSCALL_ssetmask] = -1,
	[SYSCALL_stat] = 9437290,
	[SYSCALL_stat64] = 9437379,
	[SYSCALL_statfs] = 9437283,
	[SYSCALL_statfs64] = 9437450,
	[SYSCALL_statx] = 9437581,
	[SYSCALL_stime] = 9437209,
	[SYSCALL_subpage_prot] = -1,
	[SYSCALL_swapcontext] = -1,
	[SYSCALL_swapoff] = 9437299,
	[SYSCALL_swapon] = 9437271,
	[SYSCALL_switch_endian] = -1,
	[SYSCALL_symlink] = 9437267,
	[SYSCALL_symlinkat] = 9437515,
	[SYSCALL_sync] = 9437220,
	[SYSCALL_sync_file_range] = -1,
	[SYSCALL_sync_file_range2] = 9437525,
	[SYSCALL_syncfs] = 9437557,
	[SYSCALL_sys_debug_setcontext] = -1,
	[SYSCALL_syscall] = 9437297,
	[SYSCALL_sysfs] = 9437319,
	[SYSCALL_sysinfo] = 9437300,
	[SYSCALL_syslog] = 9437287,
	[SYSCALL_sysmips] = -1,
	[SYSCALL_tee] = 9437526,
	[SYSCALL_tgkill] = 9437452,
	[SYSCALL_time] = 9437197,
	[SYSCALL_timer_create] = 9437441,
	[SYSCALL_timer_delete] = 9437445,
	[SYSCALL_timer_getoverrun] = 9437444,
	[SYSCALL_timer_gettime] = 9437443,
	[SYSCALL_timer_gettime64] = 9437592,
	[SYSCALL_timer_settime] = 9437442,
	[SYSCALL_timer_settime64] = 9437593,
	[SYSCALL_timerfd] = -1,
	[SYSCALL_timerfd_create] = 9437534,
	[SYSCALL_timerfd_gettime] = 9437538,
	[SYSCALL_timerfd_gettime64] = 9437594,
	[SYSCALL_timerfd_settime] = 9437537,
	[SYSCALL_timerfd_settime64] = 9437595,
	[SYSCALL_times] = 9437227,
	[SYSCALL_tkill] = 9437422,
	[SYSCALL_truncate] = 9437276,
	[SYSCALL_truncate64] = 9437377,
	[SYSCALL_ugetrlimit] = 9437375,
	[SYSCALL_umask] = 9437244,
	[SYSCALL_umount] = 9437206,
	[SYSCALL_umount2] = 9437236,
	[SYSCALL_uname] = 9437306,
	[SYSCALL_unlink] = 9437194,
	[SYSCALL_unlinkat] = 9437512,
	[SYSCALL_unshare] = 9437521,
	[SYSCALL_uselib] = 9437270,
	[SYSCALL_userfaultfd] = 9437572,
	[SYSCALL_ustat] = 9437246,
	[SYSCALL_utime] = 9437214,
	[SYSCALL_utimensat] = 9437532,
	[SYSCALL_utimensat_time64] = 9437596,
	[SYSCALL_utimes] = 9437453,
	[SYSCALL_utrap_install] = -1,
	[SYSCALL_vfork] = 9437374,
	[SYSCALL_vhangup] = 9437295,
	[SYSCALL_vm86] = -1,
	[SYSCALL_vm86old] = -1,
	[SYSCALL_vmsplice] = 9437527,
	[SYSCALL_wait4] = 9437298,
	[SYSCALL_waitid] = 9437464,
	[SYSCALL_waitpid] = -1,
	[SYSCALL_write] = 9437188,
	[SYSCALL_writev] = 9437330,
};