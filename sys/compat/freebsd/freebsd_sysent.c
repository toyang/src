/*	$OpenBSD: freebsd_sysent.c,v 1.10 1999/05/31 17:34:45 millert Exp $	*/

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	OpenBSD: syscalls.master,v 1.9 1999/02/10 08:05:08 deraadt Exp 
 */

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/syscallargs.h>
#include <compat/freebsd/freebsd_syscallargs.h>
#include <machine/freebsd_machdep.h>

#define	s(type)	sizeof(type)

struct sysent freebsd_sysent[] = {
	{ 0, 0,
	    sys_nosys },			/* 0 = syscall */
	{ 1, s(struct sys_exit_args),
	    sys_exit },				/* 1 = exit */
	{ 0, 0,
	    sys_fork },				/* 2 = fork */
	{ 3, s(struct sys_read_args),
	    sys_read },				/* 3 = read */
	{ 3, s(struct sys_write_args),
	    sys_write },			/* 4 = write */
	{ 3, s(struct freebsd_sys_open_args),
	    freebsd_sys_open },			/* 5 = open */
	{ 1, s(struct sys_close_args),
	    sys_close },			/* 6 = close */
	{ 4, s(struct sys_wait4_args),
	    sys_wait4 },			/* 7 = wait4 */
	{ 2, s(struct compat_43_freebsd_sys_creat_args),
	    compat_43_freebsd_sys_creat },	/* 8 = ocreat */
	{ 2, s(struct freebsd_sys_link_args),
	    freebsd_sys_link },			/* 9 = link */
	{ 1, s(struct freebsd_sys_unlink_args),
	    freebsd_sys_unlink },		/* 10 = unlink */
	{ 0, 0,
	    sys_nosys },			/* 11 = obsolete execv */
	{ 1, s(struct freebsd_sys_chdir_args),
	    freebsd_sys_chdir },		/* 12 = chdir */
	{ 1, s(struct sys_fchdir_args),
	    sys_fchdir },			/* 13 = fchdir */
	{ 3, s(struct freebsd_sys_mknod_args),
	    freebsd_sys_mknod },		/* 14 = mknod */
	{ 2, s(struct freebsd_sys_chmod_args),
	    freebsd_sys_chmod },		/* 15 = chmod */
	{ 3, s(struct freebsd_sys_chown_args),
	    freebsd_sys_chown },		/* 16 = chown */
	{ 1, s(struct sys_obreak_args),
	    sys_obreak },			/* 17 = break */
	{ 3, s(struct freebsd_sys_getfsstat_args),
	    freebsd_sys_getfsstat },		/* 18 = getfsstat */
	{ 3, s(struct compat_43_sys_lseek_args),
	    compat_43_sys_lseek },		/* 19 = olseek */
	{ 0, 0,
	    sys_getpid },			/* 20 = getpid */
	{ 4, s(struct freebsd_sys_mount_args),
	    freebsd_sys_mount },		/* 21 = mount */
	{ 2, s(struct freebsd_sys_unmount_args),
	    freebsd_sys_unmount },		/* 22 = unmount */
	{ 1, s(struct sys_setuid_args),
	    sys_setuid },			/* 23 = setuid */
	{ 0, 0,
	    sys_getuid },			/* 24 = getuid */
	{ 0, 0,
	    sys_geteuid },			/* 25 = geteuid */
	{ 4, s(struct freebsd_sys_ptrace_args),
	    freebsd_sys_ptrace },		/* 26 = ptrace */
	{ 3, s(struct sys_recvmsg_args),
	    sys_recvmsg },			/* 27 = recvmsg */
	{ 3, s(struct sys_sendmsg_args),
	    sys_sendmsg },			/* 28 = sendmsg */
	{ 6, s(struct sys_recvfrom_args),
	    sys_recvfrom },			/* 29 = recvfrom */
	{ 3, s(struct sys_accept_args),
	    sys_accept },			/* 30 = accept */
	{ 3, s(struct sys_getpeername_args),
	    sys_getpeername },			/* 31 = getpeername */
	{ 3, s(struct sys_getsockname_args),
	    sys_getsockname },			/* 32 = getsockname */
	{ 2, s(struct freebsd_sys_access_args),
	    freebsd_sys_access },		/* 33 = access */
	{ 2, s(struct freebsd_sys_chflags_args),
	    freebsd_sys_chflags },		/* 34 = chflags */
	{ 2, s(struct sys_fchflags_args),
	    sys_fchflags },			/* 35 = fchflags */
	{ 0, 0,
	    sys_sync },				/* 36 = sync */
	{ 2, s(struct sys_kill_args),
	    sys_kill },				/* 37 = kill */
	{ 2, s(struct compat_43_freebsd_sys_stat_args),
	    compat_43_freebsd_sys_stat },	/* 38 = ostat */
	{ 0, 0,
	    sys_getppid },			/* 39 = getppid */
	{ 2, s(struct compat_43_freebsd_sys_lstat_args),
	    compat_43_freebsd_sys_lstat },	/* 40 = olstat */
	{ 1, s(struct sys_dup_args),
	    sys_dup },				/* 41 = dup */
	{ 0, 0,
	    sys_pipe },				/* 42 = pipe */
	{ 0, 0,
	    sys_getegid },			/* 43 = getegid */
	{ 4, s(struct sys_profil_args),
	    sys_profil },			/* 44 = profil */
#ifdef KTRACE
	{ 4, s(struct sys_ktrace_args),
	    sys_ktrace },			/* 45 = ktrace */
#else
	{ 0, 0,
	    sys_nosys },			/* 45 = unimplemented ktrace */
#endif
	{ 3, s(struct sys_sigaction_args),
	    sys_sigaction },			/* 46 = sigaction */
	{ 0, 0,
	    sys_getgid },			/* 47 = getgid */
	{ 2, s(struct sys_sigprocmask_args),
	    sys_sigprocmask },			/* 48 = sigprocmask */
	{ 2, s(struct sys_getlogin_args),
	    sys_getlogin },			/* 49 = getlogin */
	{ 1, s(struct sys_setlogin_args),
	    sys_setlogin },			/* 50 = setlogin */
	{ 1, s(struct sys_acct_args),
	    sys_acct },				/* 51 = acct */
	{ 0, 0,
	    sys_sigpending },			/* 52 = sigpending */
	{ 2, s(struct sys_sigaltstack_args),
	    sys_sigaltstack },			/* 53 = sigaltstack */
	{ 3, s(struct freebsd_sys_ioctl_args),
	    freebsd_sys_ioctl },		/* 54 = ioctl */
	{ 1, s(struct sys_reboot_args),
	    sys_reboot },			/* 55 = reboot */
	{ 1, s(struct freebsd_sys_revoke_args),
	    freebsd_sys_revoke },		/* 56 = revoke */
	{ 2, s(struct freebsd_sys_symlink_args),
	    freebsd_sys_symlink },		/* 57 = symlink */
	{ 3, s(struct freebsd_sys_readlink_args),
	    freebsd_sys_readlink },		/* 58 = readlink */
	{ 3, s(struct freebsd_sys_execve_args),
	    freebsd_sys_execve },		/* 59 = execve */
	{ 1, s(struct sys_umask_args),
	    sys_umask },			/* 60 = umask */
	{ 1, s(struct freebsd_sys_chroot_args),
	    freebsd_sys_chroot },		/* 61 = chroot */
	{ 2, s(struct compat_43_sys_fstat_args),
	    compat_43_sys_fstat },		/* 62 = ofstat */
	{ 4, s(struct compat_43_sys_getkerninfo_args),
	    compat_43_sys_getkerninfo },	/* 63 = ogetkerninfo */
	{ 0, 0,
	    compat_43_sys_getpagesize },	/* 64 = ogetpagesize */
	{ 3, s(struct sys_msync_args),
	    sys_msync },			/* 65 = msync */
	{ 0, 0,
	    sys_vfork },			/* 66 = vfork */
	{ 0, 0,
	    sys_nosys },			/* 67 = obsolete vread */
	{ 0, 0,
	    sys_nosys },			/* 68 = obsolete vwrite */
	{ 1, s(struct sys_sbrk_args),
	    sys_sbrk },				/* 69 = sbrk */
	{ 1, s(struct sys_sstk_args),
	    sys_sstk },				/* 70 = sstk */
	{ 6, s(struct compat_43_sys_mmap_args),
	    compat_43_sys_mmap },		/* 71 = ommap */
	{ 1, s(struct sys_ovadvise_args),
	    sys_ovadvise },			/* 72 = vadvise */
	{ 2, s(struct sys_munmap_args),
	    sys_munmap },			/* 73 = munmap */
	{ 3, s(struct sys_mprotect_args),
	    sys_mprotect },			/* 74 = mprotect */
	{ 3, s(struct freebsd_sys_madvise_args),
	    freebsd_sys_madvise },		/* 75 = madvise */
	{ 0, 0,
	    sys_nosys },			/* 76 = obsolete vhangup */
	{ 0, 0,
	    sys_nosys },			/* 77 = obsolete vlimit */
	{ 3, s(struct sys_mincore_args),
	    sys_mincore },			/* 78 = mincore */
	{ 2, s(struct sys_getgroups_args),
	    sys_getgroups },			/* 79 = getgroups */
	{ 2, s(struct sys_setgroups_args),
	    sys_setgroups },			/* 80 = setgroups */
	{ 0, 0,
	    sys_getpgrp },			/* 81 = getpgrp */
	{ 2, s(struct sys_setpgid_args),
	    sys_setpgid },			/* 82 = setpgid */
	{ 3, s(struct sys_setitimer_args),
	    sys_setitimer },			/* 83 = setitimer */
	{ 0, 0,
	    compat_43_sys_wait },		/* 84 = owait */
	{ 1, s(struct sys_swapon_args),
	    sys_swapon },			/* 85 = swapon */
	{ 2, s(struct sys_getitimer_args),
	    sys_getitimer },			/* 86 = getitimer */
	{ 2, s(struct compat_43_sys_gethostname_args),
	    compat_43_sys_gethostname },	/* 87 = ogethostname */
	{ 2, s(struct compat_43_sys_sethostname_args),
	    compat_43_sys_sethostname },	/* 88 = osethostname */
	{ 0, 0,
	    compat_43_sys_getdtablesize },	/* 89 = ogetdtablesize */
	{ 2, s(struct sys_dup2_args),
	    sys_dup2 },				/* 90 = dup2 */
	{ 0, 0,
	    sys_nosys },			/* 91 = unimplemented getdopt */
	{ 3, s(struct sys_fcntl_args),
	    sys_fcntl },			/* 92 = fcntl */
	{ 5, s(struct sys_select_args),
	    sys_select },			/* 93 = select */
	{ 0, 0,
	    sys_nosys },			/* 94 = unimplemented setdopt */
	{ 1, s(struct sys_fsync_args),
	    sys_fsync },			/* 95 = fsync */
	{ 3, s(struct sys_setpriority_args),
	    sys_setpriority },			/* 96 = setpriority */
	{ 3, s(struct sys_socket_args),
	    sys_socket },			/* 97 = socket */
	{ 3, s(struct sys_connect_args),
	    sys_connect },			/* 98 = connect */
	{ 3, s(struct compat_43_sys_accept_args),
	    compat_43_sys_accept },		/* 99 = oaccept */
	{ 2, s(struct sys_getpriority_args),
	    sys_getpriority },			/* 100 = getpriority */
	{ 4, s(struct compat_43_sys_send_args),
	    compat_43_sys_send },		/* 101 = osend */
	{ 4, s(struct compat_43_sys_recv_args),
	    compat_43_sys_recv },		/* 102 = orecv */
	{ 1, s(struct freebsd_sys_sigreturn_args),
	    freebsd_sys_sigreturn },		/* 103 = sigreturn */
	{ 3, s(struct sys_bind_args),
	    sys_bind },				/* 104 = bind */
	{ 5, s(struct sys_setsockopt_args),
	    sys_setsockopt },			/* 105 = setsockopt */
	{ 2, s(struct sys_listen_args),
	    sys_listen },			/* 106 = listen */
	{ 0, 0,
	    sys_nosys },			/* 107 = obsolete vtimes */
	{ 3, s(struct compat_43_sys_sigvec_args),
	    compat_43_sys_sigvec },		/* 108 = osigvec */
	{ 1, s(struct compat_43_sys_sigblock_args),
	    compat_43_sys_sigblock },		/* 109 = osigblock */
	{ 1, s(struct compat_43_sys_sigsetmask_args),
	    compat_43_sys_sigsetmask },		/* 110 = osigsetmask */
	{ 1, s(struct sys_sigsuspend_args),
	    sys_sigsuspend },			/* 111 = sigsuspend */
	{ 2, s(struct compat_43_sys_sigstack_args),
	    compat_43_sys_sigstack },		/* 112 = osigstack */
	{ 3, s(struct compat_43_sys_recvmsg_args),
	    compat_43_sys_recvmsg },		/* 113 = orecvmsg */
	{ 3, s(struct compat_43_sys_sendmsg_args),
	    compat_43_sys_sendmsg },		/* 114 = osendmsg */
#ifdef TRACE
	{ 2, s(struct sys_vtrace_args),
	    sys_vtrace },			/* 115 = vtrace */
#else
	{ 0, 0,
	    sys_nosys },			/* 115 = obsolete vtrace */
#endif
	{ 2, s(struct sys_gettimeofday_args),
	    sys_gettimeofday },			/* 116 = gettimeofday */
	{ 2, s(struct sys_getrusage_args),
	    sys_getrusage },			/* 117 = getrusage */
	{ 5, s(struct sys_getsockopt_args),
	    sys_getsockopt },			/* 118 = getsockopt */
	{ 0, 0,
	    sys_nosys },			/* 119 = obsolete resuba */
	{ 3, s(struct sys_readv_args),
	    sys_readv },			/* 120 = readv */
	{ 3, s(struct sys_writev_args),
	    sys_writev },			/* 121 = writev */
	{ 2, s(struct sys_settimeofday_args),
	    sys_settimeofday },			/* 122 = settimeofday */
	{ 3, s(struct sys_fchown_args),
	    sys_fchown },			/* 123 = fchown */
	{ 2, s(struct sys_fchmod_args),
	    sys_fchmod },			/* 124 = fchmod */
	{ 6, s(struct compat_43_sys_recvfrom_args),
	    compat_43_sys_recvfrom },		/* 125 = orecvfrom */
	{ 2, s(struct compat_43_sys_setreuid_args),
	    compat_43_sys_setreuid },		/* 126 = osetreuid */
	{ 2, s(struct compat_43_sys_setregid_args),
	    compat_43_sys_setregid },		/* 127 = osetregid */
	{ 2, s(struct freebsd_sys_rename_args),
	    freebsd_sys_rename },		/* 128 = rename */
	{ 2, s(struct compat_43_freebsd_sys_truncate_args),
	    compat_43_freebsd_sys_truncate },	/* 129 = otruncate */
	{ 2, s(struct compat_43_sys_ftruncate_args),
	    compat_43_sys_ftruncate },		/* 130 = oftruncate */
	{ 2, s(struct sys_flock_args),
	    sys_flock },			/* 131 = flock */
	{ 2, s(struct freebsd_sys_mkfifo_args),
	    freebsd_sys_mkfifo },		/* 132 = mkfifo */
	{ 6, s(struct sys_sendto_args),
	    sys_sendto },			/* 133 = sendto */
	{ 2, s(struct sys_shutdown_args),
	    sys_shutdown },			/* 134 = shutdown */
	{ 4, s(struct sys_socketpair_args),
	    sys_socketpair },			/* 135 = socketpair */
	{ 2, s(struct freebsd_sys_mkdir_args),
	    freebsd_sys_mkdir },		/* 136 = mkdir */
	{ 1, s(struct freebsd_sys_rmdir_args),
	    freebsd_sys_rmdir },		/* 137 = rmdir */
	{ 2, s(struct sys_utimes_args),
	    sys_utimes },			/* 138 = utimes */
	{ 0, 0,
	    sys_nosys },			/* 139 = obsolete 4.2 sigreturn */
	{ 2, s(struct sys_adjtime_args),
	    sys_adjtime },			/* 140 = adjtime */
	{ 3, s(struct compat_43_sys_getpeername_args),
	    compat_43_sys_getpeername },	/* 141 = ogetpeername */
	{ 0, 0,
	    compat_43_sys_gethostid },		/* 142 = ogethostid */
	{ 1, s(struct compat_43_sys_sethostid_args),
	    compat_43_sys_sethostid },		/* 143 = osethostid */
	{ 2, s(struct compat_43_sys_getrlimit_args),
	    compat_43_sys_getrlimit },		/* 144 = ogetrlimit */
	{ 2, s(struct compat_43_sys_setrlimit_args),
	    compat_43_sys_setrlimit },		/* 145 = osetrlimit */
	{ 2, s(struct compat_43_sys_killpg_args),
	    compat_43_sys_killpg },		/* 146 = okillpg */
	{ 0, 0,
	    sys_setsid },			/* 147 = setsid */
	{ 4, s(struct sys_quotactl_args),
	    sys_quotactl },			/* 148 = quotactl */
	{ 0, 0,
	    compat_43_sys_quota },		/* 149 = oquota */
	{ 3, s(struct compat_43_sys_getsockname_args),
	    compat_43_sys_getsockname },	/* 150 = ogetsockname */
	{ 0, 0,
	    sys_nosys },			/* 151 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 152 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 153 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 154 = unimplemented */
#if defined(NFSCLIENT) || defined(NFSSERVER)
	{ 2, s(struct sys_nfssvc_args),
	    sys_nfssvc },			/* 155 = nfssvc */
#else
	{ 0, 0,
	    sys_nosys },			/* 155 = unimplemented */
#endif
	{ 4, s(struct compat_43_sys_getdirentries_args),
	    compat_43_sys_getdirentries },	/* 156 = ogetdirentries */
	{ 2, s(struct freebsd_sys_statfs_args),
	    freebsd_sys_statfs },		/* 157 = statfs */
	{ 2, s(struct freebsd_sys_fstatfs_args),
	    freebsd_sys_fstatfs },		/* 158 = fstatfs */
	{ 0, 0,
	    sys_nosys },			/* 159 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 160 = unimplemented */
#ifdef NFSCLIENT
	{ 2, s(struct freebsd_sys_getfh_args),
	    freebsd_sys_getfh },		/* 161 = getfh */
#else
	{ 0, 0,
	    sys_nosys },			/* 161 = unimplemented getfh */
#endif
	{ 2, s(struct compat_09_sys_getdomainname_args),
	    compat_09_sys_getdomainname },	/* 162 = getdomainname */
	{ 2, s(struct compat_09_sys_setdomainname_args),
	    compat_09_sys_setdomainname },	/* 163 = setdomainname */
	{ 1, s(struct compat_09_sys_uname_args),
	    compat_09_sys_uname },		/* 164 = uname */
	{ 2, s(struct sys_sysarch_args),
	    sys_sysarch },			/* 165 = sysarch */
	{ 3, s(struct freebsd_sys_rtprio_args),
	    freebsd_sys_rtprio },		/* 166 = rtprio */
	{ 0, 0,
	    sys_nosys },			/* 167 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 168 = unimplemented */
#if defined(SYSVSEM) && !defined(alpha)
	{ 5, s(struct compat_10_sys_semsys_args),
	    compat_10_sys_semsys },		/* 169 = semsys */
#else
	{ 0, 0,
	    sys_nosys },			/* 169 = unimplemented 1.0 semsys */
#endif
#if defined(SYSVMSG) && !defined(alpha)
	{ 6, s(struct compat_10_sys_msgsys_args),
	    compat_10_sys_msgsys },		/* 170 = msgsys */
#else
	{ 0, 0,
	    sys_nosys },			/* 170 = unimplemented 1.0 msgsys */
#endif
#if defined(SYSVSHM) && !defined(alpha)
	{ 4, s(struct compat_10_sys_shmsys_args),
	    compat_10_sys_shmsys },		/* 171 = shmsys */
#else
	{ 0, 0,
	    sys_nosys },			/* 171 = unimplemented 1.0 shmsys */
#endif
	{ 0, 0,
	    sys_nosys },			/* 172 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 173 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 174 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 175 = unimplemented */
	{ 1, s(struct freebsd_ntp_adjtime_args),
	    freebsd_ntp_adjtime },		/* 176 = freebsd_ntp_adjtime */
	{ 0, 0,
	    sys_nosys },			/* 177 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 178 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 179 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 180 = unimplemented */
	{ 1, s(struct sys_setgid_args),
	    sys_setgid },			/* 181 = setgid */
	{ 1, s(struct sys_setegid_args),
	    sys_setegid },			/* 182 = setegid */
	{ 1, s(struct sys_seteuid_args),
	    sys_seteuid },			/* 183 = seteuid */
#ifdef LFS
	{ 3, s(struct lfs_bmapv_args),
	    lfs_bmapv },			/* 184 = lfs_bmapv */
	{ 3, s(struct lfs_markv_args),
	    lfs_markv },			/* 185 = lfs_markv */
	{ 2, s(struct lfs_segclean_args),
	    lfs_segclean },			/* 186 = lfs_segclean */
	{ 2, s(struct lfs_segwait_args),
	    lfs_segwait },			/* 187 = lfs_segwait */
#else
	{ 0, 0,
	    sys_nosys },			/* 184 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 185 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 186 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 187 = unimplemented */
#endif
	{ 2, s(struct freebsd_sys_stat_args),
	    freebsd_sys_stat },			/* 188 = stat */
	{ 2, s(struct sys_fstat_args),
	    sys_fstat },			/* 189 = fstat */
	{ 2, s(struct freebsd_sys_lstat_args),
	    freebsd_sys_lstat },		/* 190 = lstat */
	{ 2, s(struct freebsd_sys_pathconf_args),
	    freebsd_sys_pathconf },		/* 191 = pathconf */
	{ 2, s(struct sys_fpathconf_args),
	    sys_fpathconf },			/* 192 = fpathconf */
	{ 0, 0,
	    sys_nosys },			/* 193 = unimplemented */
	{ 2, s(struct sys_getrlimit_args),
	    sys_getrlimit },			/* 194 = getrlimit */
	{ 2, s(struct sys_setrlimit_args),
	    sys_setrlimit },			/* 195 = setrlimit */
	{ 4, s(struct sys_getdirentries_args),
	    sys_getdirentries },		/* 196 = getdirentries */
	{ 7, s(struct sys_mmap_args),
	    sys_mmap },				/* 197 = mmap */
	{ 0, 0,
	    sys_nosys },			/* 198 = __syscall */
	{ 4, s(struct sys_lseek_args),
	    sys_lseek },			/* 199 = lseek */
	{ 3, s(struct freebsd_sys_truncate_args),
	    freebsd_sys_truncate },		/* 200 = truncate */
	{ 3, s(struct sys_ftruncate_args),
	    sys_ftruncate },			/* 201 = ftruncate */
	{ 6, s(struct sys___sysctl_args),
	    sys___sysctl },			/* 202 = __sysctl */
	{ 2, s(struct sys_mlock_args),
	    sys_mlock },			/* 203 = mlock */
	{ 2, s(struct sys_munlock_args),
	    sys_munlock },			/* 204 = munlock */
#ifdef FREEBSD_BASED_ON_44LITE_R2
	{ 1, s(struct freebsd_sys_undelete_args),
	    freebsd_sys_undelete },		/* 205 = undelete */
#else
	{ 0, 0,
	    sys_nosys },			/* 205 = unimplemented */
#endif
	{ 0, 0,
	    sys_nosys },			/* 206 = unimplemented */
	{ 1, s(struct sys_getpgid_args),
	    sys_getpgid },			/* 207 = getpgid */
	{ 0, 0,
	    sys_nosys },			/* 208 = unimplemented */
	{ 3, s(struct sys_poll_args),
	    sys_poll },				/* 209 = poll */
	{ 0, 0,
	    sys_nosys },			/* 210 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 211 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 212 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 213 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 214 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 215 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 216 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 217 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 218 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 219 = unimplemented */
#ifdef SYSVSEM
	{ 4, s(struct sys___semctl_args),
	    sys___semctl },			/* 220 = __semctl */
	{ 3, s(struct sys_semget_args),
	    sys_semget },			/* 221 = semget */
	{ 3, s(struct sys_semop_args),
	    sys_semop },			/* 222 = semop */
	{ 1, s(struct sys_semconfig_args),
	    sys_semconfig },			/* 223 = semconfig */
#else
	{ 0, 0,
	    sys_nosys },			/* 220 = unimplemented sys___semctl */
	{ 0, 0,
	    sys_nosys },			/* 221 = unimplemented sys_semget */
	{ 0, 0,
	    sys_nosys },			/* 222 = unimplemented sys_semop */
	{ 0, 0,
	    sys_nosys },			/* 223 = unimplemented sys_semconfig */
#endif
#ifdef SYSVMSG
	{ 3, s(struct sys_msgctl_args),
	    sys_msgctl },			/* 224 = msgctl */
	{ 2, s(struct sys_msgget_args),
	    sys_msgget },			/* 225 = msgget */
	{ 4, s(struct sys_msgsnd_args),
	    sys_msgsnd },			/* 226 = msgsnd */
	{ 5, s(struct sys_msgrcv_args),
	    sys_msgrcv },			/* 227 = msgrcv */
#else
	{ 0, 0,
	    sys_nosys },			/* 224 = unimplemented sys_msgctl */
	{ 0, 0,
	    sys_nosys },			/* 225 = unimplemented sys_msgget */
	{ 0, 0,
	    sys_nosys },			/* 226 = unimplemented sys_msgsnd */
	{ 0, 0,
	    sys_nosys },			/* 227 = unimplemented sys_msgrcv */
#endif
#ifdef SYSVSHM
	{ 3, s(struct sys_shmat_args),
	    sys_shmat },			/* 228 = shmat */
	{ 3, s(struct sys_shmctl_args),
	    sys_shmctl },			/* 229 = shmctl */
	{ 1, s(struct sys_shmdt_args),
	    sys_shmdt },			/* 230 = shmdt */
	{ 3, s(struct sys_shmget_args),
	    sys_shmget },			/* 231 = shmget */
#else
	{ 0, 0,
	    sys_nosys },			/* 228 = unimplemented sys_shmat */
	{ 0, 0,
	    sys_nosys },			/* 229 = unimplemented sys_shmctl */
	{ 0, 0,
	    sys_nosys },			/* 230 = unimplemented sys_shmdt */
	{ 0, 0,
	    sys_nosys },			/* 231 = unimplemented sys_shmget */
#endif
	{ 0, 0,
	    sys_nosys },			/* 232 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 233 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 234 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 235 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 236 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 237 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 238 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 239 = unimplemented */
	{ 2, s(struct sys_nanosleep_args),
	    sys_nanosleep },			/* 240 = nanosleep */
	{ 0, 0,
	    sys_nosys },			/* 241 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 242 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 243 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 244 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 245 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 246 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 247 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 248 = unimplemented */
	{ 0, 0,
	    sys_nosys },			/* 249 = unimplemented */
	{ 3, s(struct sys_minherit_args),
	    sys_minherit },			/* 250 = minherit */
	{ 1, s(struct sys_rfork_args),
	    sys_rfork },			/* 251 = rfork */
	{ 3, s(struct freebsd_sys_poll2_args),
	    freebsd_sys_poll2 },		/* 252 = poll2 */
	{ 0, 0,
	    sys_issetugid },			/* 253 = issetugid */
	{ 3, s(struct sys_lchown_args),
	    sys_lchown },			/* 254 = lchown */
};

