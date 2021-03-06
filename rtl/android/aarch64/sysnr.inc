// Available syscalls for arm64-android.
// This file is autogenerated by the genandroidsyscalls.py script. 
// Script location: https://svn.freepascal.org/svn/fpcbuild/scripts/android

const
  syscall_nr_io_setup = 0;
  syscall_nr_io_destroy = 1;
  syscall_nr_io_submit = 2;
  syscall_nr_io_cancel = 3;
  syscall_nr_io_getevents = 4;
  syscall_nr_setxattr = 5;
  syscall_nr_lsetxattr = 6;
  syscall_nr_fsetxattr = 7;
  syscall_nr_getxattr = 8;
  syscall_nr_lgetxattr = 9;
  syscall_nr_fgetxattr = 10;
  syscall_nr_listxattr = 11;
  syscall_nr_llistxattr = 12;
  syscall_nr_flistxattr = 13;
  syscall_nr_removexattr = 14;
  syscall_nr_lremovexattr = 15;
  syscall_nr_fremovexattr = 16;
  syscall_nr_getcwd = 17;
  syscall_nr_eventfd2 = 19;
  syscall_nr_eventfd = syscall_nr_eventfd2;
  syscall_nr_epoll_create1 = 20;
  syscall_nr_epoll_ctl = 21;
  syscall_nr_epoll_pwait = 22;
  syscall_nr_dup = 23;
  syscall_nr_dup3 = 24;
  syscall_nr_fcntl = 25;
  syscall_nr_inotify_init1 = 26;
  syscall_nr_inotify_add_watch = 27;
  syscall_nr_inotify_rm_watch = 28;
  syscall_nr_ioctl = 29;
  syscall_nr_ioprio_set = 30;
  syscall_nr_ioprio_get = 31;
  syscall_nr_flock = 32;
  syscall_nr_mknodat = 33;
  syscall_nr_mkdirat = 34;
  syscall_nr_unlinkat = 35;
  syscall_nr_symlinkat = 36;
  syscall_nr_linkat = 37;
  syscall_nr_renameat = 38;
  syscall_nr_pivot_root = 41;
  syscall_nr_statfs = 43;
  syscall_nr_fstatfs = 44;
  syscall_nr_truncate = 45;
  syscall_nr_ftruncate = 46;
  syscall_nr_ftruncate64 = syscall_nr_ftruncate;
  syscall_nr_fallocate = 47;
  syscall_nr_fallocate64 = syscall_nr_fallocate;
  syscall_nr_faccessat = 48;
  syscall_nr_chdir = 49;
  syscall_nr_fchdir = 50;
  syscall_nr_fchmod = 52;
  syscall_nr_fchmodat = 53;
  syscall_nr_fchownat = 54;
  syscall_nr_fchown = 55;
  syscall_nr_openat = 56;
  syscall_nr_close = 57;
  syscall_nr_pipe2 = 59;
  syscall_nr_quotactl = 60;
  syscall_nr_getdents64 = 61;
  syscall_nr_lseek = 62;
  syscall_nr_read = 63;
  syscall_nr_write = 64;
  syscall_nr_readv = 65;
  syscall_nr_writev = 66;
  syscall_nr_pread64 = 67;
  syscall_nr_pwrite64 = 68;
  syscall_nr_preadv = 69;
  syscall_nr_pwritev = 70;
  syscall_nr_sendfile = 71;
  syscall_nr_pselect6 = 72;
  syscall_nr_ppoll = 73;
  syscall_nr_signalfd4 = 74;
  syscall_nr_vmsplice = 75;
  syscall_nr_splice = 76;
  syscall_nr_tee = 77;
  syscall_nr_readlinkat = 78;
  syscall_nr_newfstatat = 79;
  syscall_nr_fstatat = syscall_nr_newfstatat;
  syscall_nr_fstatat64 = syscall_nr_newfstatat;
  syscall_nr_fstat = 80;
  syscall_nr_fstat64 = syscall_nr_fstat;
  syscall_nr_sync = 81;
  syscall_nr_fsync = 82;
  syscall_nr_fdatasync = 83;
  syscall_nr_sync_file_range = 84;
  syscall_nr_timerfd_create = 85;
  syscall_nr_timerfd_settime = 86;
  syscall_nr_timerfd_gettime = 87;
  syscall_nr_utimensat = 88;
  syscall_nr_capget = 90;
  syscall_nr_capset = 91;
  syscall_nr_personality = 92;
  syscall_nr_exit = 93;
  syscall_nr_exit_group = 94;
  syscall_nr_waitid = 95;
  syscall_nr_set_tid_address = 96;
  syscall_nr_unshare = 97;
  syscall_nr_futex = 98;
  syscall_nr_nanosleep = 101;
  syscall_nr_getitimer = 102;
  syscall_nr_setitimer = 103;
  syscall_nr_timer_create = 107;
  syscall_nr_timer_gettime = 108;
  syscall_nr_timer_getoverrun = 109;
  syscall_nr_timer_settime = 110;
  syscall_nr_timer_delete = 111;
  syscall_nr_clock_gettime = 113;
  syscall_nr_clock_getres = 114;
  syscall_nr_clock_nanosleep = 115;
  syscall_nr_ptrace = 117;
  syscall_nr_sched_setparam = 118;
  syscall_nr_sched_setscheduler = 119;
  syscall_nr_sched_getscheduler = 120;
  syscall_nr_sched_getparam = 121;
  syscall_nr_sched_setaffinity = 122;
  syscall_nr_sched_getaffinity = 123;
  syscall_nr_sched_yield = 124;
  syscall_nr_sched_get_priority_max = 125;
  syscall_nr_sched_get_priority_min = 126;
  syscall_nr_sched_rr_get_interval = 127;
  syscall_nr_restart_syscall = 128;
  syscall_nr_kill = 129;
  syscall_nr_tkill = 130;
  syscall_nr_tgkill = 131;
  syscall_nr_sigaltstack = 132;
  syscall_nr_rt_sigsuspend = 133;
  syscall_nr_rt_sigaction = 134;
  syscall_nr_rt_sigprocmask = 135;
  syscall_nr_rt_sigpending = 136;
  syscall_nr_rt_sigtimedwait = 137;
  syscall_nr_rt_sigqueueinfo = 138;
  syscall_nr_rt_sigreturn = 139;
  syscall_nr_setpriority = 140;
  syscall_nr_getpriority = 141;
  syscall_nr_setregid = 143;
  syscall_nr_setresuid = 147;
  syscall_nr_getresuid = 148;
  syscall_nr_getresgid = 150;
  syscall_nr_times = 153;
  syscall_nr_setpgid = 154;
  syscall_nr_getpgid = 155;
  syscall_nr_getsid = 156;
  syscall_nr_setsid = 157;
  syscall_nr_getgroups = 158;
  syscall_nr_uname = 160;
  syscall_nr_getrlimit = 163;
  syscall_nr_setrlimit = 164;
  syscall_nr_getrusage = 165;
  syscall_nr_umask = 166;
  syscall_nr_prctl = 167;
  syscall_nr_getcpu = 168;
  syscall_nr_gettimeofday = 169;
  syscall_nr_getpid = 172;
  syscall_nr_getppid = 173;
  syscall_nr_getuid = 174;
  syscall_nr_geteuid = 175;
  syscall_nr_getgid = 176;
  syscall_nr_getegid = 177;
  syscall_nr_gettid = 178;
  syscall_nr_sysinfo = 179;
  syscall_nr_socket = 198;
  syscall_nr_socketpair = 199;
  syscall_nr_bind = 200;
  syscall_nr_listen = 201;
  syscall_nr_connect = 203;
  syscall_nr_getsockname = 204;
  syscall_nr_getpeername = 205;
  syscall_nr_sendto = 206;
  syscall_nr_recvfrom = 207;
  syscall_nr_setsockopt = 208;
  syscall_nr_getsockopt = 209;
  syscall_nr_shutdown = 210;
  syscall_nr_sendmsg = 211;
  syscall_nr_recvmsg = 212;
  syscall_nr_readahead = 213;
  syscall_nr_brk = 214;
  syscall_nr_munmap = 215;
  syscall_nr_mremap = 216;
  syscall_nr_clone = 220;
  syscall_nr_execve = 221;
  syscall_nr_mmap = 222;
  syscall_nr_mmap64 = syscall_nr_mmap;
  syscall_nr_fadvise64 = 223;
  syscall_nr_mprotect = 226;
  syscall_nr_msync = 227;
  syscall_nr_mlock = 228;
  syscall_nr_munlock = 229;
  syscall_nr_mlockall = 230;
  syscall_nr_munlockall = 231;
  syscall_nr_mincore = 232;
  syscall_nr_madvise = 233;
  syscall_nr_rt_tgsigqueueinfo = 240;
  syscall_nr_perf_event_open = 241;
  syscall_nr_accept4 = 242;
  syscall_nr_recvmmsg = 243;
  syscall_nr_wait4 = 260;
  syscall_nr_prlimit64 = 261;
  syscall_nr_prlimit = syscall_nr_prlimit64;
  syscall_nr_syncfs = 267;
  syscall_nr_setns = 268;
  syscall_nr_sendmmsg = 269;
  syscall_nr_process_vm_readv = 270;
  syscall_nr_process_vm_writev = 271;
  syscall_nr_sched_setattr = 274;
  syscall_nr_sched_getattr = 275;
  syscall_nr_renameat2 = 276;
  syscall_nr_seccomp = 277;
  syscall_nr_getrandom = 278;
  syscall_nr_memfd_create = 279;
  syscall_nr_execveat = 281;
  syscall_nr_mlock2 = 284;
  syscall_nr_copy_file_range = 285;
  syscall_nr_preadv2 = 286;
  syscall_nr_pwritev2 = 287;
  syscall_nr_statx = 291;

// The following syscalls are blocked by SECCOMP starting from Android 8.
// Do not use them, unless you know what you are doing.
const
  syscall_nr_umount2 = 39 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_mount = 40 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_chroot = 51 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_acct = 89 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_init_module = 105 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_delete_module = 106 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_clock_settime = 112 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_syslog = 116 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_klogctl = 116 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_reboot = 142 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setgid = 144 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setreuid = 145 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setuid = 146 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setresgid = 149 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setfsuid = 151 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setfsgid = 152 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setgroups = 159 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_sethostname = 161 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_setdomainname = 162 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_settimeofday = 170 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_adjtimex = 171 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_swapon = 224 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_swapoff = 225 deprecated 'This syscall is blocked on Android 8+';
  syscall_nr_clock_adjtime = 266 deprecated 'This syscall is blocked on Android 8+';
