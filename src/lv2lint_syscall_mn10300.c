/*
 * SPDX-FileCopyrightText: Hanspeter Portner <dev@open-music-kontrollers.ch>
 * SPDX-License-Identifier: Artistic-2.0
 */

#include <lv2lint/lv2lint_syscall.h>

const int syscall_ids [SYSCALL_MAX] = {
	[SYSCALL__llseek] = 140,
	[SYSCALL__newselect] = 142,
	[SYSCALL__sysctl] = 149,
	[SYSCALL_accept] = -1,
	[SYSCALL_accept4] = -1,
	[SYSCALL_access] = 33,
	[SYSCALL_acct] = 51,
	[SYSCALL_add_key] = 286,
	[SYSCALL_adjtimex] = 124,
	[SYSCALL_afs_syscall] = 137,
	[SYSCALL_alarm] = 27,
	[SYSCALL_arch_prctl] = -1,
	[SYSCALL_arm_fadvise64_64] = -1,
	[SYSCALL_atomic_barrier] = -1,
	[SYSCALL_atomic_cmpxchg_32] = -1,
	[SYSCALL_bdflush] = 134,
	[SYSCALL_bfin_spinlock] = -1,
	[SYSCALL_bind] = -1,
	[SYSCALL_bpf] = -1,
	[SYSCALL_break] = 17,
	[SYSCALL_brk] = 45,
	[SYSCALL_cachectl] = -1,
	[SYSCALL_cacheflush] = 289,
	[SYSCALL_capget] = 184,
	[SYSCALL_capset] = 185,
	[SYSCALL_chdir] = 12,
	[SYSCALL_chmod] = 15,
	[SYSCALL_chown] = 182,
	[SYSCALL_chown32] = 212,
	[SYSCALL_chroot] = 61,
	[SYSCALL_clock_adjtime] = -1,
	[SYSCALL_clock_getres] = 266,
	[SYSCALL_clock_gettime] = 265,
	[SYSCALL_clock_nanosleep] = 267,
	[SYSCALL_clock_settime] = 264,
	[SYSCALL_clone] = 120,
	[SYSCALL_clone2] = -1,
	[SYSCALL_close] = 6,
	[SYSCALL_connect] = -1,
	[SYSCALL_copy_file_range] = -1,
	[SYSCALL_creat] = 8,
	[SYSCALL_create_module] = 127,
	[SYSCALL_delete_module] = 129,
	[SYSCALL_dipc] = -1,
	[SYSCALL_dma_memcpy] = -1,
	[SYSCALL_dup] = 41,
	[SYSCALL_dup2] = 63,
	[SYSCALL_dup3] = 331,
	[SYSCALL_epoll_create] = 254,
	[SYSCALL_epoll_create1] = 330,
	[SYSCALL_epoll_ctl] = 255,
	[SYSCALL_epoll_ctl_old] = -1,
	[SYSCALL_epoll_pwait] = 320,
	[SYSCALL_epoll_wait] = 256,
	[SYSCALL_epoll_wait_old] = -1,
	[SYSCALL_eventfd] = 324,
	[SYSCALL_eventfd2] = 329,
	[SYSCALL_execv] = -1,
	[SYSCALL_execve] = 11,
	[SYSCALL_execveat] = -1,
	[SYSCALL_exit] = 1,
	[SYSCALL_exit_group] = 252,
	[SYSCALL_faccessat] = 308,
	[SYSCALL_fadvise64] = 250,
	[SYSCALL_fadvise64_64] = 272,
	[SYSCALL_fallocate] = 325,
	[SYSCALL_fanotify_init] = -1,
	[SYSCALL_fanotify_mark] = -1,
	[SYSCALL_fchdir] = 133,
	[SYSCALL_fchmod] = 94,
	[SYSCALL_fchmodat] = 307,
	[SYSCALL_fchown] = 95,
	[SYSCALL_fchown32] = 207,
	[SYSCALL_fchownat] = 299,
	[SYSCALL_fcntl] = 55,
	[SYSCALL_fcntl64] = 221,
	[SYSCALL_fdatasync] = 148,
	[SYSCALL_fgetxattr] = 231,
	[SYSCALL_finit_module] = -1,
	[SYSCALL_flistxattr] = 234,
	[SYSCALL_flock] = 143,
	[SYSCALL_fork] = 2,
	[SYSCALL_fremovexattr] = 237,
	[SYSCALL_fsetxattr] = 228,
	[SYSCALL_fstat] = 108,
	[SYSCALL_fstat64] = 197,
	[SYSCALL_fstatat64] = 301,
	[SYSCALL_fstatfs] = 100,
	[SYSCALL_fstatfs64] = 269,
	[SYSCALL_fsync] = 118,
	[SYSCALL_ftime] = 35,
	[SYSCALL_ftruncate] = 93,
	[SYSCALL_ftruncate64] = 194,
	[SYSCALL_futex] = 240,
	[SYSCALL_futimesat] = 300,
	[SYSCALL_get_kernel_syms] = 130,
	[SYSCALL_get_mempolicy] = 275,
	[SYSCALL_get_robust_list] = 313,
	[SYSCALL_get_thread_area] = 244,
	[SYSCALL_getcpu] = 319,
	[SYSCALL_getcwd] = 183,
	[SYSCALL_getdents] = 141,
	[SYSCALL_getdents64] = 220,
	[SYSCALL_getdomainname] = -1,
	[SYSCALL_getdtablesize] = -1,
	[SYSCALL_getegid] = 50,
	[SYSCALL_getegid32] = 202,
	[SYSCALL_geteuid] = 49,
	[SYSCALL_geteuid32] = 201,
	[SYSCALL_getgid] = 47,
	[SYSCALL_getgid32] = 200,
	[SYSCALL_getgroups] = 80,
	[SYSCALL_getgroups32] = 205,
	[SYSCALL_gethostname] = -1,
	[SYSCALL_getitimer] = 105,
	[SYSCALL_getpagesize] = -1,
	[SYSCALL_getpeername] = -1,
	[SYSCALL_getpgid] = 132,
	[SYSCALL_getpgrp] = 65,
	[SYSCALL_getpid] = 20,
	[SYSCALL_getpmsg] = 188,
	[SYSCALL_getppid] = 64,
	[SYSCALL_getpriority] = 96,
	[SYSCALL_getrandom] = -1,
	[SYSCALL_getresgid] = 171,
	[SYSCALL_getresgid32] = 211,
	[SYSCALL_getresuid] = 165,
	[SYSCALL_getresuid32] = 209,
	[SYSCALL_getrlimit] = 76,
	[SYSCALL_getrusage] = 77,
	[SYSCALL_getsid] = 147,
	[SYSCALL_getsockname] = -1,
	[SYSCALL_getsockopt] = -1,
	[SYSCALL_gettid] = 224,
	[SYSCALL_gettimeofday] = 78,
	[SYSCALL_getuid] = 24,
	[SYSCALL_getuid32] = 199,
	[SYSCALL_getunwind] = -1,
	[SYSCALL_getxattr] = 229,
	[SYSCALL_getxgid] = -1,
	[SYSCALL_getxpid] = -1,
	[SYSCALL_getxuid] = -1,
	[SYSCALL_gtty] = 32,
	[SYSCALL_idle] = 112,
	[SYSCALL_init_module] = 128,
	[SYSCALL_inotify_add_watch] = 293,
	[SYSCALL_inotify_init] = 292,
	[SYSCALL_inotify_init1] = 333,
	[SYSCALL_inotify_rm_watch] = 294,
	[SYSCALL_io_cancel] = 249,
	[SYSCALL_io_destroy] = 246,
	[SYSCALL_io_getevents] = 247,
	[SYSCALL_io_setup] = 245,
	[SYSCALL_io_submit] = 248,
	[SYSCALL_ioctl] = 54,
	[SYSCALL_ioperm] = 101,
	[SYSCALL_iopl] = 110,
	[SYSCALL_ioprio_get] = 291,
	[SYSCALL_ioprio_set] = 290,
	[SYSCALL_ipc] = 117,
	[SYSCALL_kcmp] = -1,
	[SYSCALL_kern_features] = -1,
	[SYSCALL_kexec_file_load] = -1,
	[SYSCALL_kexec_load] = 283,
	[SYSCALL_keyctl] = 288,
	[SYSCALL_kill] = 37,
	[SYSCALL_lchown] = 16,
	[SYSCALL_lchown32] = 198,
	[SYSCALL_lgetxattr] = 230,
	[SYSCALL_link] = 9,
	[SYSCALL_linkat] = 304,
	[SYSCALL_listen] = -1,
	[SYSCALL_listxattr] = 232,
	[SYSCALL_llistxattr] = 233,
	[SYSCALL_lock] = 53,
	[SYSCALL_lookup_dcookie] = 253,
	[SYSCALL_lremovexattr] = 236,
	[SYSCALL_lseek] = 19,
	[SYSCALL_lsetxattr] = 227,
	[SYSCALL_lstat] = 107,
	[SYSCALL_lstat64] = 196,
	[SYSCALL_madvise] = 219,
	[SYSCALL_madvise1] = 219,
	[SYSCALL_mbind] = 274,
	[SYSCALL_membarrier] = -1,
	[SYSCALL_memfd_create] = -1,
	[SYSCALL_migrate_pages] = 295,
	[SYSCALL_mincore] = 218,
	[SYSCALL_mkdir] = 39,
	[SYSCALL_mkdirat] = 297,
	[SYSCALL_mknod] = 14,
	[SYSCALL_mknodat] = 298,
	[SYSCALL_mlock] = 150,
	[SYSCALL_mlock2] = -1,
	[SYSCALL_mlockall] = 152,
	[SYSCALL_mmap] = 90,
	[SYSCALL_mmap2] = 192,
	[SYSCALL_modify_ldt] = 123,
	[SYSCALL_mount] = 21,
	[SYSCALL_move_pages] = 318,
	[SYSCALL_mprotect] = 125,
	[SYSCALL_mpx] = 56,
	[SYSCALL_mq_getsetattr] = 282,
	[SYSCALL_mq_notify] = 281,
	[SYSCALL_mq_open] = 277,
	[SYSCALL_mq_timedreceive] = 280,
	[SYSCALL_mq_timedsend] = 279,
	[SYSCALL_mq_unlink] = 278,
	[SYSCALL_mremap] = 163,
	[SYSCALL_msgctl] = -1,
	[SYSCALL_msgget] = -1,
	[SYSCALL_msgrcv] = -1,
	[SYSCALL_msgsnd] = -1,
	[SYSCALL_msync] = 144,
	[SYSCALL_multiplexer] = -1,
	[SYSCALL_munlock] = 151,
	[SYSCALL_munlockall] = 153,
	[SYSCALL_munmap] = 91,
	[SYSCALL_name_to_handle_at] = -1,
	[SYSCALL_nanosleep] = 162,
	[SYSCALL_newfstatat] = -1,
	[SYSCALL_nfsservctl] = 169,
	[SYSCALL_nice] = 34,
	[SYSCALL_old_adjtimex] = -1,
	[SYSCALL_oldfstat] = 28,
	[SYSCALL_oldlstat] = 84,
	[SYSCALL_oldolduname] = 59,
	[SYSCALL_oldstat] = 18,
	[SYSCALL_oldumount] = -1,
	[SYSCALL_olduname] = 109,
	[SYSCALL_oldwait4] = -1,
	[SYSCALL_open] = 5,
	[SYSCALL_open_by_handle_at] = -1,
	[SYSCALL_openat] = 296,
	[SYSCALL_osf_fstat] = -1,
	[SYSCALL_osf_fstatfs] = -1,
	[SYSCALL_osf_fstatfs64] = -1,
	[SYSCALL_osf_getdirentries] = -1,
	[SYSCALL_osf_getdomainname] = -1,
	[SYSCALL_osf_getitimer] = -1,
	[SYSCALL_osf_getrusage] = -1,
	[SYSCALL_osf_getsysinfo] = -1,
	[SYSCALL_osf_gettimeofday] = -1,
	[SYSCALL_osf_lstat] = -1,
	[SYSCALL_osf_mount] = -1,
	[SYSCALL_osf_proplist_syscall] = -1,
	[SYSCALL_osf_select] = -1,
	[SYSCALL_osf_set_program_attributes] = -1,
	[SYSCALL_osf_setitimer] = -1,
	[SYSCALL_osf_setsysinfo] = -1,
	[SYSCALL_osf_settimeofday] = -1,
	[SYSCALL_osf_shmat] = -1,
	[SYSCALL_osf_sigprocmask] = -1,
	[SYSCALL_osf_sigstack] = -1,
	[SYSCALL_osf_stat] = -1,
	[SYSCALL_osf_statfs] = -1,
	[SYSCALL_osf_statfs64] = -1,
	[SYSCALL_osf_swapon] = -1,
	[SYSCALL_osf_sysinfo] = -1,
	[SYSCALL_osf_usleep_thread] = -1,
	[SYSCALL_osf_utimes] = -1,
	[SYSCALL_osf_utsname] = -1,
	[SYSCALL_osf_wait4] = -1,
	[SYSCALL_pause] = 29,
	[SYSCALL_pciconfig_iobase] = -1,
	[SYSCALL_pciconfig_read] = -1,
	[SYSCALL_pciconfig_write] = -1,
	[SYSCALL_perf_event_open] = 337,
	[SYSCALL_perfctr] = -1,
	[SYSCALL_personality] = 136,
	[SYSCALL_pipe] = 42,
	[SYSCALL_pipe2] = 332,
	[SYSCALL_pivot_root] = 217,
	[SYSCALL_pkey_alloc] = -1,
	[SYSCALL_pkey_free] = -1,
	[SYSCALL_pkey_mprotect] = -1,
	[SYSCALL_poll] = 168,
	[SYSCALL_ppoll] = 310,
	[SYSCALL_prctl] = 172,
	[SYSCALL_pread] = -1,
	[SYSCALL_pread64] = 180,
	[SYSCALL_preadv] = 334,
	[SYSCALL_preadv2] = -1,
	[SYSCALL_prlimit64] = -1,
	[SYSCALL_process_vm_readv] = -1,
	[SYSCALL_process_vm_writev] = -1,
	[SYSCALL_prof] = 44,
	[SYSCALL_profil] = 98,
	[SYSCALL_pselect6] = 309,
	[SYSCALL_ptrace] = 26,
	[SYSCALL_putpmsg] = 189,
	[SYSCALL_pwrite] = -1,
	[SYSCALL_pwrite64] = 181,
	[SYSCALL_pwritev] = 335,
	[SYSCALL_pwritev2] = -1,
	[SYSCALL_query_module] = 167,
	[SYSCALL_quotactl] = 131,
	[SYSCALL_read] = 3,
	[SYSCALL_readahead] = 225,
	[SYSCALL_readdir] = 89,
	[SYSCALL_readlink] = 85,
	[SYSCALL_readlinkat] = 306,
	[SYSCALL_readv] = 145,
	[SYSCALL_reboot] = 88,
	[SYSCALL_recv] = -1,
	[SYSCALL_recvfrom] = -1,
	[SYSCALL_recvmmsg] = 338,
	[SYSCALL_recvmsg] = -1,
	[SYSCALL_remap_file_pages] = 257,
	[SYSCALL_removexattr] = 235,
	[SYSCALL_rename] = 38,
	[SYSCALL_renameat] = 303,
	[SYSCALL_renameat2] = -1,
	[SYSCALL_request_key] = 287,
	[SYSCALL_restart_syscall] = 0,
	[SYSCALL_rmdir] = 40,
	[SYSCALL_rt_sigaction] = 174,
	[SYSCALL_rt_sigpending] = 176,
	[SYSCALL_rt_sigprocmask] = 175,
	[SYSCALL_rt_sigqueueinfo] = 178,
	[SYSCALL_rt_sigreturn] = 173,
	[SYSCALL_rt_sigsuspend] = 179,
	[SYSCALL_rt_sigtimedwait] = 177,
	[SYSCALL_rt_tgsigqueueinfo] = 336,
	[SYSCALL_rtas] = -1,
	[SYSCALL_s390_guarded_storage] = -1,
	[SYSCALL_s390_pci_mmio_read] = -1,
	[SYSCALL_s390_pci_mmio_write] = -1,
	[SYSCALL_s390_runtime_instr] = -1,
	[SYSCALL_s390_sthyi] = -1,
	[SYSCALL_sched_get_priority_max] = 159,
	[SYSCALL_sched_get_priority_min] = 160,
	[SYSCALL_sched_getaffinity] = 242,
	[SYSCALL_sched_getattr] = -1,
	[SYSCALL_sched_getparam] = 155,
	[SYSCALL_sched_getscheduler] = 157,
	[SYSCALL_sched_rr_get_interval] = 161,
	[SYSCALL_sched_setaffinity] = 241,
	[SYSCALL_sched_setattr] = -1,
	[SYSCALL_sched_setparam] = 154,
	[SYSCALL_sched_setscheduler] = 156,
	[SYSCALL_sched_yield] = 158,
	[SYSCALL_seccomp] = -1,
	[SYSCALL_security] = -1,
	[SYSCALL_select] = 82,
	[SYSCALL_semctl] = -1,
	[SYSCALL_semget] = -1,
	[SYSCALL_semop] = -1,
	[SYSCALL_semtimedop] = -1,
	[SYSCALL_send] = -1,
	[SYSCALL_sendfile] = 187,
	[SYSCALL_sendfile64] = 239,
	[SYSCALL_sendmmsg] = -1,
	[SYSCALL_sendmsg] = -1,
	[SYSCALL_sendto] = -1,
	[SYSCALL_set_mempolicy] = 276,
	[SYSCALL_set_robust_list] = 312,
	[SYSCALL_set_thread_area] = 243,
	[SYSCALL_set_tid_address] = 258,
	[SYSCALL_setdomainname] = 121,
	[SYSCALL_setfsgid] = 139,
	[SYSCALL_setfsgid32] = 216,
	[SYSCALL_setfsuid] = 138,
	[SYSCALL_setfsuid32] = 215,
	[SYSCALL_setgid] = 46,
	[SYSCALL_setgid32] = 214,
	[SYSCALL_setgroups] = 81,
	[SYSCALL_setgroups32] = 206,
	[SYSCALL_sethae] = -1,
	[SYSCALL_sethostname] = 74,
	[SYSCALL_setitimer] = 104,
	[SYSCALL_setns] = 339,
	[SYSCALL_setpgid] = 57,
	[SYSCALL_setpgrp] = -1,
	[SYSCALL_setpriority] = 97,
	[SYSCALL_setregid] = 71,
	[SYSCALL_setregid32] = 204,
	[SYSCALL_setresgid] = 170,
	[SYSCALL_setresgid32] = 210,
	[SYSCALL_setresuid] = 164,
	[SYSCALL_setresuid32] = 208,
	[SYSCALL_setreuid] = 70,
	[SYSCALL_setreuid32] = 203,
	[SYSCALL_setrlimit] = 75,
	[SYSCALL_setsid] = 66,
	[SYSCALL_setsockopt] = -1,
	[SYSCALL_settimeofday] = 79,
	[SYSCALL_setuid] = 23,
	[SYSCALL_setuid32] = 213,
	[SYSCALL_setxattr] = 226,
	[SYSCALL_sgetmask] = 68,
	[SYSCALL_shmat] = -1,
	[SYSCALL_shmctl] = -1,
	[SYSCALL_shmdt] = -1,
	[SYSCALL_shmget] = -1,
	[SYSCALL_shutdown] = -1,
	[SYSCALL_sigaction] = 67,
	[SYSCALL_sigaltstack] = 186,
	[SYSCALL_signal] = 48,
	[SYSCALL_signalfd] = 322,
	[SYSCALL_signalfd4] = 328,
	[SYSCALL_sigpending] = 73,
	[SYSCALL_sigprocmask] = 126,
	[SYSCALL_sigreturn] = 119,
	[SYSCALL_sigsuspend] = 72,
	[SYSCALL_socket] = -1,
	[SYSCALL_socketcall] = 102,
	[SYSCALL_socketpair] = -1,
	[SYSCALL_splice] = 314,
	[SYSCALL_spu_create] = -1,
	[SYSCALL_spu_run] = -1,
	[SYSCALL_sram_alloc] = -1,
	[SYSCALL_sram_free] = -1,
	[SYSCALL_ssetmask] = 69,
	[SYSCALL_stat] = 106,
	[SYSCALL_stat64] = 195,
	[SYSCALL_statfs] = 99,
	[SYSCALL_statfs64] = 268,
	[SYSCALL_statx] = -1,
	[SYSCALL_stime] = 25,
	[SYSCALL_stty] = 31,
	[SYSCALL_subpage_prot] = -1,
	[SYSCALL_swapcontext] = -1,
	[SYSCALL_swapoff] = 115,
	[SYSCALL_swapon] = 87,
	[SYSCALL_switch_endian] = -1,
	[SYSCALL_symlink] = 83,
	[SYSCALL_symlinkat] = 305,
	[SYSCALL_sync] = 36,
	[SYSCALL_sync_file_range] = 315,
	[SYSCALL_sync_file_range2] = -1,
	[SYSCALL_syncfs] = -1,
	[SYSCALL_sys_debug_setcontext] = -1,
	[SYSCALL_sysfs] = 135,
	[SYSCALL_sysinfo] = 116,
	[SYSCALL_syslog] = 103,
	[SYSCALL_sysmips] = -1,
	[SYSCALL_tas] = -1,
	[SYSCALL_tee] = 316,
	[SYSCALL_tgkill] = 270,
	[SYSCALL_time] = 13,
	[SYSCALL_timer_create] = 259,
	[SYSCALL_timer_delete] = 263,
	[SYSCALL_timer_getoverrun] = 262,
	[SYSCALL_timer_gettime] = 261,
	[SYSCALL_timer_settime] = 260,
	[SYSCALL_timerfd] = -1,
	[SYSCALL_timerfd_create] = 323,
	[SYSCALL_timerfd_gettime] = 327,
	[SYSCALL_timerfd_settime] = 326,
	[SYSCALL_times] = 43,
	[SYSCALL_tkill] = 238,
	[SYSCALL_truncate] = 92,
	[SYSCALL_truncate64] = 193,
	[SYSCALL_tuxcall] = -1,
	[SYSCALL_ugetrlimit] = 191,
	[SYSCALL_ulimit] = 58,
	[SYSCALL_umask] = 60,
	[SYSCALL_umount] = 22,
	[SYSCALL_umount2] = 52,
	[SYSCALL_uname] = 122,
	[SYSCALL_unlink] = 10,
	[SYSCALL_unlinkat] = 302,
	[SYSCALL_unshare] = 311,
	[SYSCALL_uselib] = 86,
	[SYSCALL_userfaultfd] = -1,
	[SYSCALL_ustat] = 62,
	[SYSCALL_utime] = 30,
	[SYSCALL_utimensat] = 321,
	[SYSCALL_utimes] = 271,
	[SYSCALL_utrap_install] = -1,
	[SYSCALL_vfork] = 190,
	[SYSCALL_vhangup] = 111,
	[SYSCALL_vm86] = 166,
	[SYSCALL_vm86old] = 113,
	[SYSCALL_vmsplice] = 317,
	[SYSCALL_vserver] = 273,
	[SYSCALL_wait4] = 114,
	[SYSCALL_waitid] = 284,
	[SYSCALL_waitpid] = 7,
	[SYSCALL_write] = 4,
	[SYSCALL_writev] = 146,
};
