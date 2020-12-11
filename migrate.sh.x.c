#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f migrate.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[4]))
	"\370\115\115\070\176\136\333\055\361\070\003\200\273\163\135\334"
	"\025\006\367\037\136\300\237\057\270\347\011\037\226\170\264"
#define      chk1_z	22
#define      chk1	((&data[31]))
	"\242\366\004\106\111\306\357\224\261\067\022\371\275\334\236\342"
	"\217\147\210\227\125\332\254\301\372\231"
#define      msg2_z	19
#define      msg2	((&data[61]))
	"\103\232\246\034\031\236\130\001\205\337\067\264\325\137\122\315"
	"\022\352\111\242\014\307\013\320\142"
#define      chk2_z	19
#define      chk2	((&data[86]))
	"\166\247\153\156\374\333\354\236\230\240\070\035\324\025\373\272"
	"\136\313\175\017\137\055\321\364\271"
#define      rlax_z	1
#define      rlax	((&data[107]))
	"\356"
#define      shll_z	10
#define      shll	((&data[109]))
	"\323\136\110\174\240\045\165\031\142\221\341\175"
#define      inlo_z	3
#define      inlo	((&data[120]))
	"\221\010\232"
#define      xecc_z	15
#define      xecc	((&data[123]))
	"\054\364\007\023\370\140\325\124\135\135\062\370\112\213\301\064"
	"\240\021"
#define      text_z	1571
#define      text	((&data[251]))
	"\236\252\045\227\034\233\077\210\012\064\101\261\062\032\356\251"
	"\251\302\046\362\103\145\067\135\064\153\376\105\072\105\163\331"
	"\357\231\160\014\065\260\224\077\344\325\361\027\360\337\300\231"
	"\242\347\214\345\115\303\102\201\057\100\307\151\206\072\102\166"
	"\323\263\202\011\144\026\110\111\354\071\140\334\031\041\166\273"
	"\011\003\241\126\307\343\330\366\044\237\140\252\332\243\041\256"
	"\127\243\267\273\272\000\005\246\072\145\203\123\207\371\122\376"
	"\041\275\125\020\235\141\031\225\140\276\120\356\056\011\324\011"
	"\204\105\070\233\172\317\244\337\220\254\272\150\156\007\304\173"
	"\111\033\205\160\252\045\060\366\126\154\171\104\241\265\060\071"
	"\213\230\036\036\140\245\170\156\156\027\161\371\162\332\172\313"
	"\306\351\255\204\270\214\275\351\266\245\356\002\017\017\157\230"
	"\131\354\117\326\364\244\151\172\255\120\102\214\322\346\057\234"
	"\141\010\107\057\355\060\036\014\102\116\313\135\233\271\046\310"
	"\047\045\020\164\057\375\215\050\215\101\176\222\030\200\011\150"
	"\315\042\131\334\233\215\141\174\343\316\316\155\305\170\155\374"
	"\012\355\225\022\202\236\351\146\016\200\106\212\330\075\124\210"
	"\024\242\375\265\324\340\036\321\306\363\155\300\166\307\120\142"
	"\032\274\270\102\133\111\244\324\077\236\361\322\113\310\132\305"
	"\054\342\022\333\147\007\254\246\120\371\177\041\175\350\375\326"
	"\305\210\200\143\220\050\073\132\014\241\020\034\114\114\077\225"
	"\213\143\217\317\012\276\166\351\106\014\174\305\200\357\276\356"
	"\244\036\016\153\144\023\026\110\176\203\013\333\012\033\027\117"
	"\267\322\125\142\055\132\333\055\274\150\012\117\030\242\157\353"
	"\112\354\111\070\333\061\215\013\357\311\266\313\064\272\334\011"
	"\016\132\234\317\345\275\154\347\062\000\317\026\330\221\247\364"
	"\217\230\154\254\203\121\265\165\305\106\110\262\243\015\110\140"
	"\060\303\127\237\116\252\372\357\067\223\142\374\311\034\063\335"
	"\374\047\051\144\020\012\107\160\060\201\100\045\055\076\347\302"
	"\104\127\375\226\230\205\171\260\231\022\252\071\230\012\046\160"
	"\047\267\277\021\370\301\132\225\135\347\343\101\106\030\126\065"
	"\377\253\305\214\330\216\247\012\174\106\117\224\357\175\344\214"
	"\276\111\033\370\057\017\164\247\213\270\106\327\347\246\313\331"
	"\100\115\220\361\216\300\066\056\360\055\316\056\125\261\061\171"
	"\320\331\340\266\025\301\374\255\312\133\146\063\271\134\133\173"
	"\272\016\242\260\211\116\010\130\236\305\306\360\317\241\233\077"
	"\264\006\213\211\126\213\004\333\141\326\332\304\240\270\033\363"
	"\016\021\120\123\137\173\267\210\311\306\341\362\371\252\114\363"
	"\214\320\147\103\232\347\164\202\020\357\333\103\312\107\146\041"
	"\201\331\347\327\320\320\053\233\140\300\010\374\042\045\145\154"
	"\142\043\274\363\023\162\160\212\042\332\374\353\050\151\106\330"
	"\122\160\024\120\240\013\264\106\053\042\167\153\204\311\001\204"
	"\265\241\302\264\262\346\046\161\267\227\021\177\140\113\240\265"
	"\171\046\161\277\043\031\002\222\103\047\002\071\066\132\274\037"
	"\340\000\371\073\010\037\372\037\141\152\206\203\343\221\056\255"
	"\363\140\302\313\371\061\030\121\165\205\113\101\155\257\330\334"
	"\110\171\230\243\121\206\140\143\253\257\363\351\165\310\052\143"
	"\343\332\034\246\362\373\267\331\170\344\276\202\075\376\234\156"
	"\120\237\075\121\312\144\205\074\266\201\257\246\162\327\352\126"
	"\000\376\360\162\215\155\307\160\221\276\331\151\043\307\341\311"
	"\116\204\350\243\376\041\325\100\262\173\377\031\206\030\045\104"
	"\065\144\057\032\312\235\251\242\106\056\311\100\224\376\041\103"
	"\226\326\220\234\165\034\115\056\054\241\335\135\274\275\365\155"
	"\151\317\113\257\100\141\042\040\177\345\103\263\244\337\134\054"
	"\371\104\123\070\247\032\267\350\220\022\062\071\232\256\374\345"
	"\143\000\064\102\061\316\120\236\236\251\016\134\064\132\343\046"
	"\267\011\137\346\351\005\271\060\253\317\147\252\034\377\310\135"
	"\340\007\066\162\024\321\073\216\360\070\306\220\206\133\135\312"
	"\073\256\024\205\043\132\206\261\100\027\200\127\304\273\253\136"
	"\037\235\317\233\072\046\040\230\243\252\160\354\103\116\335\172"
	"\356\224\206\255\231\073\267\114\163\371\250\147\255\271\375\315"
	"\374\355\376\211\142\214\063\330\154\267\243\123\067\274\144\221"
	"\047\116\225\211\341\063\360\306\056\311\232\115\266\152\057\134"
	"\054\314\320\111\337\002\123\267\272\061\014\105\160\244\103\213"
	"\345\222\133\300\052\342\221\106\301\101\156\260\077\357\316\330"
	"\026\101\246\261\325\031\337\100\063\122\004\074\034\277\252\152"
	"\214\004\345\332\020\223\170\075\005\061\351\172\036\230\321\327"
	"\076\154\101\011\030\303\300\160\235\336\375\072\256\042\034\060"
	"\153\137\225\333\160\355\201\355\125\255\370\122\064\230\055\111"
	"\010\242\071\352\252\037\061\376\021\236\373\147\247\310\320\077"
	"\134\261\316\006\376\161\207\224\211\272\046\054\267\032\153\024"
	"\346\101\171\375\044\175\023\377\156\042\374\060\377\236\277\142"
	"\231\250\202\117\016\132\220\146\321\040\133\067\233\356\354\242"
	"\364\164\121\354\044\147\117\237\367\037\243\047\130\003\304\356"
	"\122\246\137\247\322\031\142\152\042\061\375\316\356\121\124\154"
	"\141\017\170\004\327\350\135\101\135\245\355\234\005\031\106\351"
	"\054\144\336\114\100\043\137\156\256\327\157\076\123\003\217\215"
	"\112\161\276\031\207\133\300\156\033\033\010\260\131\057\300\206"
	"\101\057\113\262\303\031\055\022\207\304\036\243\004\151\277\307"
	"\114\234\117\117\202\006\024\155\132\070\270\052\241\202\354\003"
	"\143\170\241\057\242\357\062\055\305\261\043\033\104\157\113\024"
	"\073\016\021\372\215\340\013\133\213\301\327\130\327\021\227\125"
	"\021\221\277\137\030\125\017\337\237\200\045\035\241\117\050\335"
	"\311\330\105\327\266\223\314\103\120\247\254\177\022\225\171\040"
	"\075\135\163\144\174\042\100\126\071\076\366\150\301\273\051\067"
	"\302\173\031\260\145\207\111\156\054\105\376\374\027\101\073\353"
	"\316\242\074\060\170\105\376\100\066\272\301\211\362\054\005\063"
	"\317\105\100\112\151\016\015\177\061\066\303\377\243\230\107\251"
	"\013\136\061\007\171\275\307\321\052\150\040\313\232\221\066\046"
	"\356\144\105\067\257\343\045\072\266\171\047\343\310\247\075\014"
	"\362\367\145\100\365\155\313\307\047\202\133\260\161\303\055\207"
	"\016\277\126\220\053\161\321\317\315\145\077\356\061\373\173\142"
	"\052\161\123\355\134\002\041\032\275\365\074\024\250\313\263\037"
	"\353\041\215\055\101\132\156\326\205\037\032\130\165\371\320\315"
	"\023\201\044\271\316\273\000\323\234\113\270\227\121\371\213\065"
	"\162\230\053\114\174\342\276\145\241\201\147\221\366\147\244\215"
	"\324\214\016\062\263\327\107\027\175\327\216\214\026\016\171\015"
	"\034\310\166\112\203\074\311\142\344\260\347\027\216\027\334\161"
	"\256\261\060\340\103\120\331\303\056\364\333\115\345\001\361\161"
	"\344\167\346\225\267\074\056\054\063\221\143\261\021\155\321\257"
	"\231\251\271\055\262\361\351\202\374\350\367\261\112\154\117\065"
	"\377\267\240\011\150\333\103\350\275\340\066\163\172\107\003\121"
	"\005\307\367\023\301\375\210\200\342\126\357\237\043\317\100\163"
	"\262\236\361\154\102\131\271\302\156\043\175\114\315\127\230\176"
	"\127\024\071\350\213\232\254\011\275\301\344\355\222\351\223\233"
	"\144\017\220\375\260\347\304\224\277\273\270\137\034\143\071\277"
	"\204\347\027\050\237\323\342\237\330\210\331\076\013\054\305\005"
	"\074\125\003\355\075\307\201\374\203\072\133\237\236\225\137\042"
	"\175\166\113\034\112\055\273\042\266\224\140\302\301\045\310\376"
	"\173\313\353\271\223\154\265"
#define      msg1_z	65
#define      msg1	((&data[1903]))
	"\266\105\247\025\150\044\214\263\100\327\340\043\064\067\062\321"
	"\141\047\022\034\377\122\371\044\305\317\171\032\263\045\003\177"
	"\343\014\346\214\010\322\051\025\021\030\225\100\230\055\014\215"
	"\142\072\002\366\172\245\372\147\334\210\334\252\103\201\007\243"
	"\036\344\365\366\126\125\134\301\215\350\053\023\374"
#define      pswd_z	256
#define      pswd	((&data[2007]))
	"\132\131\123\200\041\121\374\355\074\265\200\251\153\227\120\175"
	"\116\225\044\144\376\110\360\261\211\310\222\206\301\051\027\034"
	"\203\152\234\245\274\230\007\004\361\326\206\101\327\117\223\245"
	"\215\355\141\162\165\120\174\041\373\264\321\300\025\227\363\120"
	"\171\301\203\240\131\212\244\112\140\052\213\070\172\037\335\010"
	"\015\077\172\203\217\366\245\212\253\166\113\300\016\076\021\210"
	"\000\224\050\131\037\315\244\177\370\060\270\162\120\225\172\135"
	"\324\365\341\143\353\206\356\226\375\071\127\014\170\150\224\170"
	"\375\275\322\034\212\166\234\203\247\124\365\367\351\160\125\276"
	"\145\066\042\121\275\021\350\273\113\077\307\303\250\134\074\245"
	"\031\016\302\244\205\136\047\054\263\035\044\235\215\171\133\363"
	"\260\175\104\156\217\054\051\332\154\360\236\025\115\332\272\147"
	"\351\174\013\157\333\063\234\216\120\300\053\336\072\206\321\353"
	"\004\026\131\223\103\203\156\260\164\014\305\301\347\177\050\321"
	"\374\064\100\330\147\335\146\270\236\222\226\331\031\150\304\036"
	"\177\036\261\302\241\037\162\025\054\067\327\023\267\377\344\264"
	"\063\045\214\233\003\362\123\241\205\352\172\236\123\077\274\322"
	"\136\156\224\000\216\007\026\272\076\355\316\365\354\263\251\040"
	"\331\066\273\334\051\017\222\370\115\023\241\271\253\362\066\371"
	"\210\132\135\206\243\116\070\055\026\312\263\330\364\312\364\167"
	"\065\221\035\361\051\257\352\167\303\214"
#define      date_z	1
#define      date	((&data[2299]))
	"\141"
#define      lsto_z	1
#define      lsto	((&data[2300]))
	"\012"
#define      opts_z	1
#define      opts	((&data[2301]))
	"\245"
#define      tst2_z	19
#define      tst2	((&data[2302]))
	"\027\344\060\335\304\321\170\144\257\225\054\166\354\235\135\104"
	"\307\114\340\221\052\221"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
