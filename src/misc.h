/*$Id: misc.h,v 1.31 1994/09/28 19:58:48 berg Exp $*/

struct dyna_long{size_t filled,tspace;off_t*offs;};
struct dynstring{struct dynstring*enext;char ename[255];};

void
 elog P((const char*const newt)),
 ignoreterm P((void)),
 shutdesc P((void)),
 setids P((void)),
 writeerr P((const char*const line)),
 progerr P((const char*const line,int xitcode)),
 chderr P((const char*const dir)),
 readerr P((const char*const file)),
 verboff P((void)),
 verbon P((void)),
 newid P((void)),
 zombiecollect P((void)),
 yell P((const char*const a,const char*const b)),
 nlog P((const char*const a)),
 logqnl P((const char*const a)),
 skipped P((const char*const x)),
 onguard P((void)),
 offguard P((void)),
 sterminate P((void)),
 Terminate P((void)),
 suspend P((void)),
 app_val P((struct dyna_long*const sp,const off_t val)),
 setmaildir P((const char*const newdir)),
 srequeue P((void)),
 slose P((void)),
 sbounce P((void)),
 catlim P((const char*src)),
 setdef P((const char*const name,const char*const contents)),
 metaparse P((const char*p)),
 setlastfolder P((const char*const folder)),
 asenv P((const char*const chp)),
 concatenate P((char*p)),
 squeeze P((char*target)),
 initdefenv P((void));
int
 forkerr Q((const pid_t pid,const char*const a)),
 nextrcfile P((void)),
 asenvcpy P((char*src)),
 alphanum P((const unsigned c)),
 enoughprivs Q((const struct passwd*const passinvk,const uid_t euid,
  const gid_t egid,const uid_t uid,const gid_t gid)),
 screenmailbox Q((char*chp,char*const chp2,const gid_t egid,
  const Deliverymode)),
 conditions P((const prevcond,const lastsucc,const lastcond,int nrcond,
  const char flags[]));
char
 *cat P((const char*const a,const char*const b)),
 *tstrdup P((const char*const a)),
 *pmrc2buf P((void)),
 *cstr P((char*const a,const char*const b)),
 *gobenv P((char*chp)),
 *egrepin P((char*expr,const char*source,const long len,int casesens));
const char
 *tgetenv P((const char*const a)),
 *newdynstring P((struct dynstring**const adrp,const char*const chp));
long
 renvint P((const long i,const char*const env));
const struct passwd
 *savepass Q((struct passwd*const spass,const uid_t uid));

extern const char lastfolder[],maildir[];
extern int didchd;
extern char*globlock;
