/*
 * SPDX-FileCopyrightText: Hanspeter Portner <dev@open-music-kontrollers.ch>
 * SPDX-License-Identifier: Artistic-2.0
 */

#include <lv2lint/lv2lint_syscall.h>

const int syscall_ids [SYSCALL_MAX] = {
	[SYSCALL__llseek] = -1,
	[SYSCALL__newselect] = -1,
	[SYSCALL__sysctl] = 319,
	[SYSCALL_accept] = 99,
	[SYSCALL_accept4] = 502,
	[SYSCALL_access] = 33,
	[SYSCALL_acct] = 51,
	[SYSCALL_add_key] = 439,
	[SYSCALL_adjtimex] = 366,
	[SYSCALL_alarm] = -1,
	[SYSCALL_arc_gettls] = -1,
	[SYSCALL_arc_settls] = -1,
	[SYSCALL_arc_usr_cmpxchg] = -1,
	[SYSCALL_arch_prctl] = -1,
	[SYSCALL_arm_fadvise64_64] = -1,
	[SYSCALL_atomic_barrier] = -1,
	[SYSCALL_atomic_cmpxchg_32] = -1,
	[SYSCALL_bdflush] = 300,
	[SYSCALL_bind] = 104,
	[SYSCALL_bpf] = 515,
	[SYSCALL_brk] = 17,
	[SYSCALL_cachectl] = -1,
	[SYSCALL_cacheflush] = -1,
	[SYSCALL_capget] = 368,
	[SYSCALL_capset] = 369,
	[SYSCALL_chdir] = 12,
	[SYSCALL_chmod] = 15,
	[SYSCALL_chown] = 16,
	[SYSCALL_chown32] = -1,
	[SYSCALL_chroot] = 61,
	[SYSCALL_clock_adjtime] = 499,
	[SYSCALL_clock_adjtime64] = -1,
	[SYSCALL_clock_getres] = 421,
	[SYSCALL_clock_getres_time64] = -1,
	[SYSCALL_clock_gettime] = 420,
	[SYSCALL_clock_gettime64] = -1,
	[SYSCALL_clock_nanosleep] = 422,
	[SYSCALL_clock_nanosleep_time64] = -1,
	[SYSCALL_clock_settime] = 419,
	[SYSCALL_clock_settime64] = -1,
	[SYSCALL_clone] = 312,
	[SYSCALL_clone2] = -1,
	[SYSCALL_clone3] = -1,
	[SYSCALL_close] = 6,
	[SYSCALL_close_range] = 546,
	[SYSCALL_connect] = 98,
	[SYSCALL_copy_file_range] = 519,
	[SYSCALL_creat] = -1,
	[SYSCALL_create_module] = 306,
	[SYSCALL_delete_module] = 308,
	[SYSCALL_dipc] = 373,
	[SYSCALL_dup] = 41,
	[SYSCALL_dup2] = 90,
	[SYSCALL_dup3] = 487,
	[SYSCALL_epoll_create] = 407,
	[SYSCALL_epoll_create1] = 486,
	[SYSCALL_epoll_ctl] = 408,
	[SYSCALL_epoll_ctl_old] = -1,
	[SYSCALL_epoll_pwait] = 474,
	[SYSCALL_epoll_pwait2] = 551,
	[SYSCALL_epoll_wait] = 409,
	[SYSCALL_epoll_wait_old] = -1,
	[SYSCALL_eventfd] = 478,
	[SYSCALL_eventfd2] = 485,
	[SYSCALL_exec_with_loader] = 25,
	[SYSCALL_execv] = -1,
	[SYSCALL_execve] = 59,
	[SYSCALL_execveat] = 513,
	[SYSCALL_exit] = 1,
	[SYSCALL_exit_group] = 405,
	[SYSCALL_faccessat] = 462,
	[SYSCALL_faccessat2] = 549,
	[SYSCALL_fadvise64] = 413,
	[SYSCALL_fadvise64_64] = -1,
	[SYSCALL_fallocate] = 480,
	[SYSCALL_fanotify_init] = 494,
	[SYSCALL_fanotify_mark] = 495,
	[SYSCALL_fchdir] = 13,
	[SYSCALL_fchmod] = 124,
	[SYSCALL_fchmodat] = 461,
	[SYSCALL_fchown] = 123,
	[SYSCALL_fchown32] = -1,
	[SYSCALL_fchownat] = 453,
	[SYSCALL_fcntl] = 92,
	[SYSCALL_fcntl64] = -1,
	[SYSCALL_fdatasync] = 447,
	[SYSCALL_fgetxattr] = 387,
	[SYSCALL_finit_module] = 507,
	[SYSCALL_flistxattr] = 390,
	[SYSCALL_flock] = 131,
	[SYSCALL_fork] = 2,
	[SYSCALL_fp_udfiex_crtl] = -1,
	[SYSCALL_fremovexattr] = 393,
	[SYSCALL_fsconfig] = 541,
	[SYSCALL_fsetxattr] = 384,
	[SYSCALL_fsmount] = 542,
	[SYSCALL_fsopen] = 540,
	[SYSCALL_fspick] = 543,
	[SYSCALL_fstat] = 91,
	[SYSCALL_fstat64] = 427,
	[SYSCALL_fstatat64] = 455,
	[SYSCALL_fstatfs] = 329,
	[SYSCALL_fstatfs64] = 529,
	[SYSCALL_fsync] = 95,
	[SYSCALL_ftruncate] = 130,
	[SYSCALL_ftruncate64] = -1,
	[SYSCALL_futex] = 394,
	[SYSCALL_futex_time64] = -1,
	[SYSCALL_futex_waitv] = 559,
	[SYSCALL_futimesat] = 454,
	[SYSCALL_get_kernel_syms] = 309,
	[SYSCALL_get_mempolicy] = 430,
	[SYSCALL_get_robust_list] = 467,
	[SYSCALL_get_thread_area] = -1,
	[SYSCALL_getcpu] = 473,
	[SYSCALL_getcwd] = 367,
	[SYSCALL_getdents] = 305,
	[SYSCALL_getdents64] = 377,
	[SYSCALL_getdomainname] = -1,
	[SYSCALL_getdtablesize] = 89,
	[SYSCALL_getegid] = 530,
	[SYSCALL_getegid32] = -1,
	[SYSCALL_geteuid] = 531,
	[SYSCALL_geteuid32] = -1,
	[SYSCALL_getgid] = 47,
	[SYSCALL_getgid32] = -1,
	[SYSCALL_getgroups] = 79,
	[SYSCALL_getgroups32] = -1,
	[SYSCALL_gethostname] = 87,
	[SYSCALL_getitimer] = 361,
	[SYSCALL_getpagesize] = 64,
	[SYSCALL_getpeername] = 141,
	[SYSCALL_getpgid] = 233,
	[SYSCALL_getpgrp] = 63,
	[SYSCALL_getpid] = 20,
	[SYSCALL_getpmsg] = -1,
	[SYSCALL_getppid] = 532,
	[SYSCALL_getpriority] = 100,
	[SYSCALL_getrandom] = 511,
	[SYSCALL_getresgid] = 372,
	[SYSCALL_getresgid32] = -1,
	[SYSCALL_getresuid] = 344,
	[SYSCALL_getresuid32] = -1,
	[SYSCALL_getrlimit] = 144,
	[SYSCALL_getrusage] = 364,
	[SYSCALL_getsid] = 234,
	[SYSCALL_getsockname] = 150,
	[SYSCALL_getsockopt] = 118,
	[SYSCALL_gettid] = 378,
	[SYSCALL_gettimeofday] = 359,
	[SYSCALL_getuid] = 24,
	[SYSCALL_getuid32] = -1,
	[SYSCALL_getunwind] = -1,
	[SYSCALL_getxattr] = 385,
	[SYSCALL_getxgid] = 47,
	[SYSCALL_getxpid] = 20,
	[SYSCALL_getxuid] = 24,
	[SYSCALL_idle] = -1,
	[SYSCALL_init_module] = 307,
	[SYSCALL_inotify_add_watch] = 445,
	[SYSCALL_inotify_init] = 444,
	[SYSCALL_inotify_init1] = 489,
	[SYSCALL_inotify_rm_watch] = 446,
	[SYSCALL_io_cancel] = 402,
	[SYSCALL_io_destroy] = 399,
	[SYSCALL_io_getevents] = 400,
	[SYSCALL_io_pgetevents] = 523,
	[SYSCALL_io_pgetevents_time64] = -1,
	[SYSCALL_io_setup] = 398,
	[SYSCALL_io_submit] = 401,
	[SYSCALL_io_uring_enter] = 536,
	[SYSCALL_io_uring_register] = 537,
	[SYSCALL_io_uring_setup] = 535,
	[SYSCALL_ioctl] = 54,
	[SYSCALL_ioperm] = -1,
	[SYSCALL_iopl] = -1,
	[SYSCALL_ioprio_get] = 443,
	[SYSCALL_ioprio_set] = 442,
	[SYSCALL_ipc] = -1,
	[SYSCALL_kcmp] = 506,
	[SYSCALL_kern_features] = -1,
	[SYSCALL_kexec_file_load] = -1,
	[SYSCALL_kexec_load] = 448,
	[SYSCALL_keyctl] = 441,
	[SYSCALL_kill] = 37,
	[SYSCALL_landlock_add_rule] = 555,
	[SYSCALL_landlock_create_ruleset] = 554,
	[SYSCALL_landlock_restrict_self] = 556,
	[SYSCALL_lchown] = 208,
	[SYSCALL_lchown32] = -1,
	[SYSCALL_lgetxattr] = 386,
	[SYSCALL_link] = 9,
	[SYSCALL_linkat] = 458,
	[SYSCALL_listen] = 106,
	[SYSCALL_listxattr] = 388,
	[SYSCALL_llistxattr] = 389,
	[SYSCALL_lookup_dcookie] = 406,
	[SYSCALL_lremovexattr] = 392,
	[SYSCALL_lseek] = 19,
	[SYSCALL_lsetxattr] = 383,
	[SYSCALL_lstat] = 68,
	[SYSCALL_lstat64] = 426,
	[SYSCALL_madvise] = 75,
	[SYSCALL_mbind] = 429,
	[SYSCALL_membarrier] = 517,
	[SYSCALL_memfd_create] = 512,
	[SYSCALL_memfd_secret] = -1,
	[SYSCALL_memory_ordering] = -1,
	[SYSCALL_migrate_pages] = 449,
	[SYSCALL_mincore] = 375,
	[SYSCALL_mkdir] = 136,
	[SYSCALL_mkdirat] = 451,
	[SYSCALL_mknod] = 14,
	[SYSCALL_mknodat] = 452,
	[SYSCALL_mlock] = 314,
	[SYSCALL_mlock2] = 518,
	[SYSCALL_mlockall] = 316,
	[SYSCALL_mmap] = 71,
	[SYSCALL_mmap2] = -1,
	[SYSCALL_modify_ldt] = -1,
	[SYSCALL_mount] = 302,
	[SYSCALL_mount_setattr] = 552,
	[SYSCALL_move_mount] = 539,
	[SYSCALL_move_pages] = 472,
	[SYSCALL_mprotect] = 74,
	[SYSCALL_mq_getsetattr] = 437,
	[SYSCALL_mq_notify] = 436,
	[SYSCALL_mq_open] = 432,
	[SYSCALL_mq_timedreceive] = 435,
	[SYSCALL_mq_timedreceive_time64] = -1,
	[SYSCALL_mq_timedsend] = 434,
	[SYSCALL_mq_timedsend_time64] = -1,
	[SYSCALL_mq_unlink] = 433,
	[SYSCALL_mremap] = 341,
	[SYSCALL_msgctl] = 200,
	[SYSCALL_msgget] = 201,
	[SYSCALL_msgrcv] = 202,
	[SYSCALL_msgsnd] = 203,
	[SYSCALL_msync] = 217,
	[SYSCALL_multiplexer] = -1,
	[SYSCALL_munlock] = 315,
	[SYSCALL_munlockall] = 317,
	[SYSCALL_munmap] = 73,
	[SYSCALL_name_to_handle_at] = 497,
	[SYSCALL_nanosleep] = 340,
	[SYSCALL_newfstatat] = -1,
	[SYSCALL_nfsservctl] = 342,
	[SYSCALL_nice] = -1,
	[SYSCALL_old_adjtimex] = 303,
	[SYSCALL_old_getpagesize] = -1,
	[SYSCALL_oldfstat] = -1,
	[SYSCALL_oldlstat] = -1,
	[SYSCALL_oldolduname] = -1,
	[SYSCALL_oldstat] = -1,
	[SYSCALL_oldumount] = 321,
	[SYSCALL_olduname] = -1,
	[SYSCALL_open] = 45,
	[SYSCALL_open_by_handle_at] = 498,
	[SYSCALL_open_tree] = 538,
	[SYSCALL_openat] = 450,
	[SYSCALL_openat2] = 547,
	[SYSCALL_or1k_atomic] = -1,
	[SYSCALL_osf_adjtime] = 140,
	[SYSCALL_osf_afs_syscall] = 258,
	[SYSCALL_osf_alt_plock] = 181,
	[SYSCALL_osf_alt_setsid] = 188,
	[SYSCALL_osf_alt_sigpending] = 187,
	[SYSCALL_osf_asynch_daemon] = 163,
	[SYSCALL_osf_audcntl] = 252,
	[SYSCALL_osf_audgen] = 253,
	[SYSCALL_osf_chflags] = 34,
	[SYSCALL_osf_execve] = 11,
	[SYSCALL_osf_exportfs] = 169,
	[SYSCALL_osf_fchflags] = 35,
	[SYSCALL_osf_fdatasync] = 261,
	[SYSCALL_osf_fpathconf] = 248,
	[SYSCALL_osf_fstat] = 226,
	[SYSCALL_osf_fstatfs] = 161,
	[SYSCALL_osf_fstatfs64] = 228,
	[SYSCALL_osf_fuser] = 243,
	[SYSCALL_osf_getaddressconf] = 214,
	[SYSCALL_osf_getdirentries] = 159,
	[SYSCALL_osf_getdomainname] = 165,
	[SYSCALL_osf_getfh] = 164,
	[SYSCALL_osf_getfsstat] = 18,
	[SYSCALL_osf_gethostid] = 142,
	[SYSCALL_osf_getitimer] = 86,
	[SYSCALL_osf_getlogin] = 49,
	[SYSCALL_osf_getmnt] = 184,
	[SYSCALL_osf_getrusage] = 117,
	[SYSCALL_osf_getsysinfo] = 256,
	[SYSCALL_osf_gettimeofday] = 116,
	[SYSCALL_osf_kloadcall] = 223,
	[SYSCALL_osf_kmodcall] = 77,
	[SYSCALL_osf_lstat] = 225,
	[SYSCALL_osf_memcntl] = 260,
	[SYSCALL_osf_mincore] = 78,
	[SYSCALL_osf_mount] = 21,
	[SYSCALL_osf_mremap] = 65,
	[SYSCALL_osf_msfs_syscall] = 240,
	[SYSCALL_osf_msleep] = 215,
	[SYSCALL_osf_mvalid] = 213,
	[SYSCALL_osf_mwakeup] = 216,
	[SYSCALL_osf_naccept] = 30,
	[SYSCALL_osf_nfssvc] = 158,
	[SYSCALL_osf_ngetpeername] = 31,
	[SYSCALL_osf_ngetsockname] = 32,
	[SYSCALL_osf_nrecvfrom] = 29,
	[SYSCALL_osf_nrecvmsg] = 27,
	[SYSCALL_osf_nsendmsg] = 28,
	[SYSCALL_osf_ntp_adjtime] = 245,
	[SYSCALL_osf_ntp_gettime] = 246,
	[SYSCALL_osf_old_creat] = 8,
	[SYSCALL_osf_old_fstat] = 62,
	[SYSCALL_osf_old_getpgrp] = 81,
	[SYSCALL_osf_old_killpg] = 146,
	[SYSCALL_osf_old_lstat] = 40,
	[SYSCALL_osf_old_open] = 5,
	[SYSCALL_osf_old_sigaction] = 46,
	[SYSCALL_osf_old_sigblock] = 109,
	[SYSCALL_osf_old_sigreturn] = 139,
	[SYSCALL_osf_old_sigsetmask] = 110,
	[SYSCALL_osf_old_sigvec] = 108,
	[SYSCALL_osf_old_stat] = 38,
	[SYSCALL_osf_old_vadvise] = 72,
	[SYSCALL_osf_old_vtrace] = 115,
	[SYSCALL_osf_old_wait] = 84,
	[SYSCALL_osf_oldquota] = 149,
	[SYSCALL_osf_pathconf] = 247,
	[SYSCALL_osf_pid_block] = 153,
	[SYSCALL_osf_pid_unblock] = 154,
	[SYSCALL_osf_plock] = 107,
	[SYSCALL_osf_priocntlset] = 237,
	[SYSCALL_osf_profil] = 44,
	[SYSCALL_osf_proplist_syscall] = 244,
	[SYSCALL_osf_reboot] = 55,
	[SYSCALL_osf_revoke] = 56,
	[SYSCALL_osf_sbrk] = 69,
	[SYSCALL_osf_security] = 222,
	[SYSCALL_osf_select] = 93,
	[SYSCALL_osf_set_program_attributes] = 43,
	[SYSCALL_osf_set_speculative] = 239,
	[SYSCALL_osf_sethostid] = 143,
	[SYSCALL_osf_setitimer] = 83,
	[SYSCALL_osf_setlogin] = 50,
	[SYSCALL_osf_setsysinfo] = 257,
	[SYSCALL_osf_settimeofday] = 122,
	[SYSCALL_osf_shmat] = 209,
	[SYSCALL_osf_signal] = 218,
	[SYSCALL_osf_sigprocmask] = 48,
	[SYSCALL_osf_sigsendset] = 238,
	[SYSCALL_osf_sigstack] = 112,
	[SYSCALL_osf_sigwaitprim] = 157,
	[SYSCALL_osf_sstk] = 70,
	[SYSCALL_osf_stat] = 224,
	[SYSCALL_osf_statfs] = 160,
	[SYSCALL_osf_statfs64] = 227,
	[SYSCALL_osf_subsys_info] = 255,
	[SYSCALL_osf_swapctl] = 259,
	[SYSCALL_osf_swapon] = 199,
	[SYSCALL_osf_syscall] = 0,
	[SYSCALL_osf_sysinfo] = 241,
	[SYSCALL_osf_table] = 85,
	[SYSCALL_osf_uadmin] = 242,
	[SYSCALL_osf_usleep_thread] = 251,
	[SYSCALL_osf_uswitch] = 250,
	[SYSCALL_osf_utc_adjtime] = 220,
	[SYSCALL_osf_utc_gettime] = 219,
	[SYSCALL_osf_utimes] = 138,
	[SYSCALL_osf_utsname] = 207,
	[SYSCALL_osf_wait4] = 7,
	[SYSCALL_osf_waitid] = 236,
	[SYSCALL_pause] = -1,
	[SYSCALL_pciconfig_iobase] = 376,
	[SYSCALL_pciconfig_read] = 345,
	[SYSCALL_pciconfig_write] = 346,
	[SYSCALL_perf_event_open] = 493,
	[SYSCALL_perfctr] = -1,
	[SYSCALL_personality] = 324,
	[SYSCALL_pidfd_getfd] = 548,
	[SYSCALL_pidfd_open] = 544,
	[SYSCALL_pidfd_send_signal] = 534,
	[SYSCALL_pipe] = 42,
	[SYSCALL_pipe2] = 488,
	[SYSCALL_pivot_root] = 374,
	[SYSCALL_pkey_alloc] = 525,
	[SYSCALL_pkey_free] = 526,
	[SYSCALL_pkey_mprotect] = 524,
	[SYSCALL_poll] = 94,
	[SYSCALL_ppoll] = 464,
	[SYSCALL_ppoll_time64] = -1,
	[SYSCALL_prctl] = 348,
	[SYSCALL_pread64] = 349,
	[SYSCALL_preadv] = 490,
	[SYSCALL_preadv2] = 520,
	[SYSCALL_prlimit64] = 496,
	[SYSCALL_process_madvise] = 550,
	[SYSCALL_process_mrelease] = 558,
	[SYSCALL_process_vm_readv] = 504,
	[SYSCALL_process_vm_writev] = 505,
	[SYSCALL_pselect6] = 463,
	[SYSCALL_pselect6_time64] = -1,
	[SYSCALL_ptrace] = 26,
	[SYSCALL_pwrite64] = 350,
	[SYSCALL_pwritev] = 491,
	[SYSCALL_pwritev2] = 521,
	[SYSCALL_query_module] = 347,
	[SYSCALL_quotactl] = 148,
	[SYSCALL_quotactl_fd] = 553,
	[SYSCALL_read] = 3,
	[SYSCALL_readahead] = 379,
	[SYSCALL_readdir] = -1,
	[SYSCALL_readlink] = 58,
	[SYSCALL_readlinkat] = 460,
	[SYSCALL_readv] = 120,
	[SYSCALL_reboot] = 311,
	[SYSCALL_recv] = 102,
	[SYSCALL_recvfrom] = 125,
	[SYSCALL_recvmmsg] = 479,
	[SYSCALL_recvmmsg_time64] = -1,
	[SYSCALL_recvmsg] = 113,
	[SYSCALL_remap_file_pages] = 410,
	[SYSCALL_removexattr] = 391,
	[SYSCALL_rename] = 128,
	[SYSCALL_renameat] = 457,
	[SYSCALL_renameat2] = 510,
	[SYSCALL_request_key] = 440,
	[SYSCALL_restart_syscall] = 412,
	[SYSCALL_riscv_flush_icache] = -1,
	[SYSCALL_rmdir] = 137,
	[SYSCALL_rseq] = 527,
	[SYSCALL_rt_sigaction] = 352,
	[SYSCALL_rt_sigpending] = 354,
	[SYSCALL_rt_sigprocmask] = 353,
	[SYSCALL_rt_sigqueueinfo] = 356,
	[SYSCALL_rt_sigreturn] = 351,
	[SYSCALL_rt_sigsuspend] = 357,
	[SYSCALL_rt_sigtimedwait] = 355,
	[SYSCALL_rt_sigtimedwait_time64] = -1,
	[SYSCALL_rt_tgsigqueueinfo] = 492,
	[SYSCALL_rtas] = -1,
	[SYSCALL_s390_guarded_storage] = -1,
	[SYSCALL_s390_pci_mmio_read] = -1,
	[SYSCALL_s390_pci_mmio_write] = -1,
	[SYSCALL_s390_runtime_instr] = -1,
	[SYSCALL_s390_sthyi] = -1,
	[SYSCALL_sched_get_affinity] = -1,
	[SYSCALL_sched_get_priority_max] = 335,
	[SYSCALL_sched_get_priority_min] = 336,
	[SYSCALL_sched_getaffinity] = 396,
	[SYSCALL_sched_getattr] = 509,
	[SYSCALL_sched_getparam] = 331,
	[SYSCALL_sched_getscheduler] = 333,
	[SYSCALL_sched_rr_get_interval] = 337,
	[SYSCALL_sched_rr_get_interval_time64] = -1,
	[SYSCALL_sched_set_affinity] = -1,
	[SYSCALL_sched_setaffinity] = 395,
	[SYSCALL_sched_setattr] = 508,
	[SYSCALL_sched_setparam] = 330,
	[SYSCALL_sched_setscheduler] = 332,
	[SYSCALL_sched_yield] = 334,
	[SYSCALL_seccomp] = 514,
	[SYSCALL_select] = 358,
	[SYSCALL_semctl] = 204,
	[SYSCALL_semget] = 205,
	[SYSCALL_semop] = 206,
	[SYSCALL_semtimedop] = 423,
	[SYSCALL_semtimedop_time64] = -1,
	[SYSCALL_send] = 101,
	[SYSCALL_sendfile] = 370,
	[SYSCALL_sendfile64] = -1,
	[SYSCALL_sendmmsg] = 503,
	[SYSCALL_sendmsg] = 114,
	[SYSCALL_sendto] = 133,
	[SYSCALL_set_mempolicy] = 431,
	[SYSCALL_set_mempolicy_home_node] = 560,
	[SYSCALL_set_robust_list] = 466,
	[SYSCALL_set_thread_area] = -1,
	[SYSCALL_set_tid_address] = 411,
	[SYSCALL_setdomainname] = 166,
	[SYSCALL_setfsgid] = 326,
	[SYSCALL_setfsgid32] = -1,
	[SYSCALL_setfsuid] = 325,
	[SYSCALL_setfsuid32] = -1,
	[SYSCALL_setgid] = 132,
	[SYSCALL_setgid32] = -1,
	[SYSCALL_setgroups] = 80,
	[SYSCALL_setgroups32] = -1,
	[SYSCALL_sethae] = 301,
	[SYSCALL_sethostname] = 88,
	[SYSCALL_setitimer] = 362,
	[SYSCALL_setns] = 501,
	[SYSCALL_setpgid] = 39,
	[SYSCALL_setpgrp] = 82,
	[SYSCALL_setpriority] = 96,
	[SYSCALL_setregid] = 127,
	[SYSCALL_setregid32] = -1,
	[SYSCALL_setresgid] = 371,
	[SYSCALL_setresgid32] = -1,
	[SYSCALL_setresuid] = 343,
	[SYSCALL_setresuid32] = -1,
	[SYSCALL_setreuid] = 126,
	[SYSCALL_setreuid32] = -1,
	[SYSCALL_setrlimit] = 145,
	[SYSCALL_setsid] = 147,
	[SYSCALL_setsockopt] = 105,
	[SYSCALL_settimeofday] = 360,
	[SYSCALL_setuid] = 23,
	[SYSCALL_setuid32] = -1,
	[SYSCALL_setxattr] = 382,
	[SYSCALL_sgetmask] = -1,
	[SYSCALL_shmat] = 209,
	[SYSCALL_shmctl] = 210,
	[SYSCALL_shmdt] = 211,
	[SYSCALL_shmget] = 212,
	[SYSCALL_shutdown] = 134,
	[SYSCALL_sigaction] = 156,
	[SYSCALL_sigaltstack] = 235,
	[SYSCALL_signal] = -1,
	[SYSCALL_signalfd] = 476,
	[SYSCALL_signalfd4] = 484,
	[SYSCALL_sigpending] = 52,
	[SYSCALL_sigprocmask] = -1,
	[SYSCALL_sigreturn] = 103,
	[SYSCALL_sigsuspend] = 111,
	[SYSCALL_socket] = 97,
	[SYSCALL_socketcall] = -1,
	[SYSCALL_socketpair] = 135,
	[SYSCALL_splice] = 468,
	[SYSCALL_spu_create] = -1,
	[SYSCALL_spu_run] = -1,
	[SYSCALL_ssetmask] = -1,
	[SYSCALL_stat] = 67,
	[SYSCALL_stat64] = 425,
	[SYSCALL_statfs] = 328,
	[SYSCALL_statfs64] = 528,
	[SYSCALL_statx] = 522,
	[SYSCALL_stime] = -1,
	[SYSCALL_subpage_prot] = -1,
	[SYSCALL_swapcontext] = -1,
	[SYSCALL_swapoff] = 304,
	[SYSCALL_swapon] = 322,
	[SYSCALL_switch_endian] = -1,
	[SYSCALL_symlink] = 57,
	[SYSCALL_symlinkat] = 459,
	[SYSCALL_sync] = 36,
	[SYSCALL_sync_file_range] = 469,
	[SYSCALL_sync_file_range2] = -1,
	[SYSCALL_syncfs] = 500,
	[SYSCALL_sys_debug_setcontext] = -1,
	[SYSCALL_syscall] = -1,
	[SYSCALL_sysfs] = 254,
	[SYSCALL_sysinfo] = 318,
	[SYSCALL_syslog] = 310,
	[SYSCALL_sysmips] = -1,
	[SYSCALL_tee] = 470,
	[SYSCALL_tgkill] = 424,
	[SYSCALL_time] = -1,
	[SYSCALL_timer_create] = 414,
	[SYSCALL_timer_delete] = 418,
	[SYSCALL_timer_getoverrun] = 417,
	[SYSCALL_timer_gettime] = 416,
	[SYSCALL_timer_gettime64] = -1,
	[SYSCALL_timer_settime] = 415,
	[SYSCALL_timer_settime64] = -1,
	[SYSCALL_timerfd] = 477,
	[SYSCALL_timerfd_create] = 481,
	[SYSCALL_timerfd_gettime] = 483,
	[SYSCALL_timerfd_gettime64] = -1,
	[SYSCALL_timerfd_settime] = 482,
	[SYSCALL_timerfd_settime64] = -1,
	[SYSCALL_times] = 323,
	[SYSCALL_tkill] = 381,
	[SYSCALL_truncate] = 129,
	[SYSCALL_truncate64] = -1,
	[SYSCALL_ugetrlimit] = -1,
	[SYSCALL_umask] = 60,
	[SYSCALL_umount] = 22,
	[SYSCALL_umount2] = 22,
	[SYSCALL_uname] = 339,
	[SYSCALL_unlink] = 10,
	[SYSCALL_unlinkat] = 456,
	[SYSCALL_unshare] = 465,
	[SYSCALL_uselib] = 313,
	[SYSCALL_userfaultfd] = 516,
	[SYSCALL_ustat] = 327,
	[SYSCALL_utime] = -1,
	[SYSCALL_utimensat] = 475,
	[SYSCALL_utimensat_time64] = -1,
	[SYSCALL_utimes] = 363,
	[SYSCALL_utrap_install] = -1,
	[SYSCALL_vfork] = 66,
	[SYSCALL_vhangup] = 76,
	[SYSCALL_vm86] = -1,
	[SYSCALL_vm86old] = -1,
	[SYSCALL_vmsplice] = 471,
	[SYSCALL_wait4] = 365,
	[SYSCALL_waitid] = 438,
	[SYSCALL_waitpid] = -1,
	[SYSCALL_write] = 4,
	[SYSCALL_writev] = 121,
};
