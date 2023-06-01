typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))
                                          ;
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;




typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));
 extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));
 extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));
 extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));
 extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));
 extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));
 extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));
 extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));
 extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
 extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));
 extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));
 extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));
 extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));
 extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));
 extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));
extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));
 extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));
 extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
 extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));
extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));
extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));
extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));
extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));
 extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));
 extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));
 extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));
extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));
 extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));
 extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
 extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));
extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));
extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));
extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));
extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));
 extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));
extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));
extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern int fclose (FILE *__stream);
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;
extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                         ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void perror (const char *__s);
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int pclose (FILE *__stream);
extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) ;
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ))
                                     ;
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
static void
platform_main_begin(void)
{
}
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
  return -ui;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
float fabsf(float);
double fabs(double);
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
static long __undefined;
static int32_t g_11 = 0x272A7275L;
static int32_t g_20 = 0x0CBEB969L;
static const int32_t *g_19[1] = {&g_20};
static int32_t *g_74 = (void*)0;
static int32_t **g_73 = &g_74;
static uint32_t g_77 = 1UL;
static int32_t g_85 = (-1L);
static int32_t g_87 = 1L;
static uint8_t g_90 = 0xA2L;
static uint32_t g_93 = 1UL;
static uint32_t g_95 = 0UL;
static uint16_t g_100 = 0UL;
static uint8_t g_104 = 3UL;
static int16_t g_106 = (-4L);
static int8_t g_115[4][10][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
static uint32_t g_121 = 0x4A01C31EL;
static int32_t g_128 = 0L;
static uint16_t g_172 = 9UL;
static uint8_t *g_206 = &g_90;
static uint8_t **g_205 = &g_206;
static uint8_t **g_269 = &g_206;
static uint8_t ***g_268 = &g_269;
static int8_t g_292 = 9L;
static int16_t g_364 = 0xF1D1L;
static int32_t ***g_366 = &g_73;
static uint32_t *g_412[4][1] = {{&g_121}, {&g_121}, {&g_121}, {&g_121}};
static uint32_t **g_411[6][10] = {{&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}};
static uint32_t ***g_410 = &g_411[5][9];
static uint32_t *g_445 = &g_95;
static int8_t *g_481 = &g_292;
static int8_t g_482 = 0xA4L;
static uint32_t ****g_487[4][9][2] = {{{&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}}, {{&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}}, {{&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}}, {{&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}, {&g_410, &g_410}}};
static uint32_t *****g_486[1] = {&g_487[0][5][1]};
static uint32_t * const *g_509[10][2] = {{&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}, {&g_412[2][0], &g_412[0][0]}};
static uint32_t * const **g_508[2] = {&g_509[9][0], &g_509[9][0]};
static uint32_t * const ***g_507 = &g_508[0];
static uint32_t * const ****g_506 = &g_507;
static int32_t ****g_552 = &g_366;
static int8_t *g_599[3][3] = {{&g_482, &g_482, &g_482}, {&g_482, &g_482, &g_482}, {&g_482, &g_482, &g_482}};
static uint8_t ** const * const *g_652 = (void*)0;
static uint8_t ** const * const **g_651 = &g_652;
static uint8_t ****g_759 = (void*)0;
static uint8_t *****g_758[2] = {&g_759, &g_759};
static uint32_t **g_772[2] = {(void*)0, (void*)0};
static uint32_t ***g_771[2] = {&g_772[0], &g_772[0]};
static int16_t *g_792 = &g_106;
static int16_t **g_791 = &g_792;
static uint32_t g_858 = 0xB46FDF36L;
static int16_t g_945 = 0xC844L;
static uint8_t g_980 = 3UL;
static int32_t g_984 = 0L;
static int32_t g_1066 = 6L;
static uint8_t g_1067[3][7] = {{0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L}, {0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L}, {0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L}};
static int8_t g_1068 = 0x25L;
static uint32_t g_1075 = 1UL;
static uint8_t g_1100 = 9UL;
static const uint16_t g_1175 = 0xB3E2L;
inline static const uint16_t func_1(void);
static int32_t * func_2(uint8_t p_3, int32_t * p_4);
inline static uint8_t func_17(const int32_t * p_18);
inline static uint8_t func_23(uint32_t p_24, int8_t p_25, const int32_t * p_26, int32_t * p_27);
inline static int32_t func_31(int32_t * p_32, const uint32_t p_33, int16_t p_34);
static int32_t * const * func_35(int8_t p_36, int32_t * p_37);
static uint8_t func_43(int32_t * p_44, int32_t * p_45, uint32_t p_46, uint32_t p_47, int32_t p_48);
inline static int32_t * func_49(int32_t * p_50, int32_t p_51, int32_t ** p_52);
static int32_t ** func_53(const int32_t p_54, int32_t * p_55, int8_t p_56);
static int32_t * func_57(uint32_t p_58, const uint32_t p_59, uint32_t p_60, const int32_t p_61);
inline static const uint16_t func_1(void)
{
    int8_t l_16 = 1L;
    int32_t *l_921[2][8][7] = {{{&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}}, {{&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}}};
    int32_t *****l_942[4][2] = {{&g_552, (void*)0}, {&g_552, (void*)0}, {&g_552, (void*)0}, {&g_552, (void*)0}};
    uint32_t ***l_943[2][3] = {{&g_411[5][9], &g_411[5][9], &g_411[5][4]}, {&g_411[5][9], &g_411[5][9], &g_411[5][4]}};
    uint8_t l_946 = 0UL;
    int8_t l_1004 = 0L;
    int32_t *l_1010 = &g_20;
    uint32_t ***l_1024 = &g_411[5][0];
    int32_t l_1097[5][2][8] = {{{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}};
    uint32_t l_1098 = 0x879A852DL;
    const uint16_t *l_1174 = &g_1175;
    int8_t l_1180 = 0x38L;
    uint8_t l_1183 = 0xFEL;
    int i, j, k;
    (***g_552) = func_2(((**g_269) = (((*g_792) = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(g_11, (safe_rshift_func_uint16_t_u_s(0x020BL, 2)))) | (safe_add_func_uint8_t_u_u(l_16, (g_11 || func_17(g_19[0]))))), 2))) | (!(g_128 | l_16)))), l_921[1][1][6]);
    (***g_552) = (l_921[1][1][6] = l_921[1][1][6]);
    for (g_90 = 0; (g_90 >= 57); g_90++)
    {
        int32_t l_937 = (-7L);
        int32_t l_938 = 0x8C267EBAL;
        uint32_t *l_956 = (void*)0;
        int32_t ***l_976 = &g_73;
        const int8_t l_977 = 1L;
        uint32_t l_1016 = 0UL;
        uint32_t ***l_1023[8] = {(void*)0, &g_411[4][8], (void*)0, &g_411[4][8], (void*)0, &g_411[4][8], (void*)0, &g_411[4][8]};
        uint32_t *l_1142[3][8] = {{&g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}, {&g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}, {&g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}};
        uint32_t ****l_1146 = &g_771[0];
        int16_t *l_1162[7] = {(void*)0, &g_106, (void*)0, &g_106, (void*)0, &g_106, (void*)0};
        uint32_t l_1165[4] = {0xB28DED35L, 0xB598FF87L, 0xB28DED35L, 0xB598FF87L};
        const int32_t l_1182 = 0xA87564DFL;
        int i, j;
    }
    return g_984;
}
static int32_t * func_2(uint8_t p_3, int32_t * p_4)
{
    int32_t l_922 = 4L;
    int32_t *l_923 = &g_20;
    (*l_923) = l_922;
    return (*g_73);
}
inline static uint8_t func_17(const int32_t * p_18)
{
    uint16_t l_28 = 1UL;
    int32_t *l_611 = &g_20;
    const uint8_t l_735 = 0x48L;
    int16_t l_744 = 0x8E95L;
    int32_t ***l_778[3];
    int32_t l_807 = 1L;
    uint32_t l_874 = 0x384A7072L;
    uint32_t l_875 = 4294967295UL;
    uint8_t *l_886[7][5] = {{&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}};
    uint8_t *l_887[2][1][1];
    uint32_t ***l_915 = &g_772[0];
    uint8_t l_918 = 0x5FL;
    int32_t l_919 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_778[i] = &g_73;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_887[i][j][k] = (void*)0;
        }
    }
    return (*g_206);
}
inline static uint8_t func_23(uint32_t p_24, int8_t p_25, const int32_t * p_26, int32_t * p_27)
{
    uint8_t ***** const l_615 = (void*)0;
    int32_t l_623 = (-9L);
    int8_t *l_650 = &g_115[0][3][0];
    int32_t ****l_656[6] = {&g_366, &g_366, &g_366, &g_366, &g_366, &g_366};
    int32_t *****l_657 = &l_656[4];
    uint32_t *l_658 = &g_121;
    uint32_t * const *l_665 = (void*)0;
    uint16_t *l_666[2];
    uint32_t l_671 = 0x151A9C89L;
    uint32_t l_685 = 0xA09BEB76L;
    int i;
    for (i = 0; i < 2; i++)
        l_666[i] = &g_100;
    for (g_364 = 0; (g_364 <= 0); g_364 += 1)
    {
        int16_t *l_614 = &g_364;
        uint16_t *l_622 = &g_172;
        uint16_t *l_624 = &g_100;
        int32_t l_630 = 7L;
        int i;
        if ((safe_add_func_int16_t_s_s(((void*)0 != l_614), ((*l_624) = ((-2L) >= (((void*)0 != l_615) < ((safe_sub_func_int16_t_s_s((0x653DL == (safe_mul_func_int8_t_s_s(0L, (((0x0156L & (safe_mul_func_uint16_t_u_u(((*l_622) = (g_486[g_364] == g_486[g_364])), g_95))) == p_24) > (**g_205))))), l_623)) <= p_25)))))))
        {
            const int32_t **l_626 = &g_19[0];
            uint32_t *l_629 = &g_121;
            uint8_t **l_642 = &g_206;
            int32_t *l_643 = &l_623;
            int i;
            g_486[g_364] = (void*)0;
            for (g_128 = 0; (g_128 <= 0); g_128 += 1)
            {
                uint16_t l_625[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_625[i] = 0UL;
                l_625[3] = (l_623 = (-3L));
            }
            (*l_626) = p_26;
            (*l_643) = (safe_sub_func_uint32_t_u_u(((*l_629) = ((-8L) && 0x6F06L)), (l_630 & (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*g_481) = 0xC0L), (safe_sub_func_int16_t_s_s((0x82CC0347L && (safe_sub_func_uint32_t_u_u((((!p_25) & (*p_27)) ^ (p_24 < (safe_mod_func_int32_t_s_s(((void*)0 != l_642), 0xB526D370L)))), 0x0C7E112AL))), g_104)))), l_630)))));
        }
        else
        {
            for (g_106 = 0; (g_106 <= 0); g_106 += 1)
            {
                return p_24;
            }
        }
        for (g_482 = 0; (g_482 <= 1); g_482 += 1)
        {
            int16_t l_644 = 0xD15CL;
            l_644 = 0xD186D5F5L;
            for (g_100 = 0; (g_100 <= 1); g_100 += 1)
            {
                uint8_t ****l_645 = &g_268;
                int i;
                for (g_87 = 0; (g_87 >= 0); g_87 -= 1)
                {
                    l_630 = l_630;
                    if (g_364)
                        goto lbl_647;
                    for (g_106 = 2; (g_106 >= 0); g_106 -= 1)
                    {
                        return p_24;
                    }
                }
                if (l_644)
                    continue;
                (***g_506) = (void*)0;
                (*l_645) = &g_269;
            }
        }
    }
lbl_647:
    for (g_292 = 2; (g_292 >= 0); g_292 -= 1)
    {
        int32_t l_646 = 0x70329BCBL;
        return l_646;
    }
    if (((safe_lshift_func_int8_t_s_u(((*l_650) = ((*g_481) = l_623)), 4)) & ((*l_658) = ((p_25 == (0x43L || ((void*)0 != g_651))) && (((safe_lshift_func_int16_t_s_s(((!p_24) == 0x5D19D0CDL), (((*l_657) = l_656[4]) == (g_552 = &g_366)))) >= (**g_269)) && p_24)))))
    {
        uint16_t l_672 = 9UL;
        int32_t l_673 = 0L;
        g_87 = (safe_mul_func_uint8_t_u_u(((l_673 = (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((l_665 == l_665) & ((l_666[1] == l_666[1]) < (p_24 >= ((safe_add_func_uint32_t_u_u((g_100 | ((((((safe_add_func_int32_t_s_s((-1L), ((void*)0 != &g_292))) ^ 1UL) != l_671) & p_25) <= 0UL) & p_25)), l_672)) != 4294967287UL)))), (**g_269))), l_672))) || (-2L)), p_25));
        l_673 = (0xFCF73069L | (l_673 < (*g_481)));
    }
    else
    {
        uint8_t l_686[2];
        uint16_t l_687 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_686[i] = 0xDFL;
        for (g_77 = 0; (g_77 >= 6); g_77 = safe_add_func_int32_t_s_s(g_77, 8))
        {
            for (l_623 = 0; (l_623 <= 1); l_623 += 1)
            {
                uint32_t ** const * const l_679[1] = {&g_411[5][9]};
                uint32_t ** const * const * const l_678 = &l_679[0];
                uint32_t ** const * const * const *l_677 = &l_678;
                int8_t **l_680 = &l_650;
                int i;
                for (g_100 = 0; (g_100 <= 1); g_100 += 1)
                {
                    int16_t *l_676 = &g_106;
                    for (g_95 = 0; (g_95 <= 1); g_95 += 1)
                    {
                        (**g_366) = (void*)0;
                        return p_25;
                    }
                    p_26 = func_57((((((*l_676) = ((void*)0 == (**g_552))) & (l_677 != &g_487[0][5][1])) <= g_95) | (l_680 != (void*)0)), (((-2L) == (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_685, 0x96L)), l_686[0]))) != g_90), l_687, (*p_26));
                }
            }
        }
    }
    return p_25;
}
inline static int32_t func_31(int32_t * p_32, const uint32_t p_33, int16_t p_34)
{
    uint8_t l_42 = 0xB4L;
    int32_t *l_62 = (void*)0;
    int32_t **l_63 = &l_62;
    int32_t * const *l_586 = &g_74;
    const int8_t *l_595 = &g_482;
    int8_t **l_596 = (void*)0;
    int8_t *l_598 = &g_115[1][7][0];
    int8_t **l_597[3][6][10] = {{{&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}}, {{&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}}, {{&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}, {&l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481, &l_598, &g_481}}};
    uint16_t *l_608 = &g_172;
    uint8_t l_609 = 254UL;
    int32_t l_610[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_610[i] = (-6L);
    l_586 = func_35(((safe_mul_func_int16_t_s_s((((*g_481) = (safe_add_func_int32_t_s_s(((l_42 & ((func_43(func_49(p_32, l_42, func_53(l_42, func_57((((((*l_63) = l_62) == (void*)0) || (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((void*)0 != &g_19[0]), (safe_mul_func_int8_t_s_s(p_33, (-7L))))), p_33))) != 0xDAD8L), p_33, g_11, l_42), p_34)), p_32, g_20, p_34, p_34) | 0x59L) ^ 5L)) == (*p_32)), 0x23FD8002L))) <= p_33), 0xFCBBL)) | g_121), p_32);
    l_610[2] = (((*g_481) = p_34) != (g_115[1][7][0] = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(p_34, (*p_32))), 9)) <= (~(+(safe_sub_func_int16_t_s_s(((l_595 == (g_599[2][2] = &g_115[3][9][0])) >= (((*l_608) = (9L | ((safe_mod_func_uint8_t_u_u(((p_34 > (safe_lshift_func_uint8_t_u_s((*g_206), 7))) ^ (safe_mod_func_uint8_t_u_u((**g_205), p_34))), p_33)) == p_34))) > l_609)), 0x8043L)))))));
    return (*p_32);
}
static int32_t * const * func_35(int8_t p_36, int32_t * p_37)
{
    uint32_t l_517 = 18446744073709551615UL;
    uint32_t ***l_518 = &g_411[5][9];
    uint32_t ****l_519 = &l_518;
    uint32_t ***l_520 = &g_411[2][6];
    int32_t l_522[1];
    int32_t ****l_550[5];
    int i;
    for (i = 0; i < 1; i++)
        l_522[i] = 9L;
    for (i = 0; i < 5; i++)
        l_550[i] = &g_366;
    l_517 = (*p_37);
    l_520 = ((*l_519) = l_518);
    for (g_100 = 0; (g_100 <= 1); g_100 += 1)
    {
        int32_t *l_521[5] = {&g_85, (void*)0, &g_85, (void*)0, &g_85};
        int32_t *l_539 = (void*)0;
        int8_t *l_553 = &g_115[2][2][0];
        int16_t l_567 = 0x97FAL;
        int i;
        l_522[0] = (0x622B2B47L != p_36);
        for (g_87 = 1; (g_87 >= 0); g_87 -= 1)
        {
            int32_t l_538[5] = {(-1L), 0x5E075C8EL, (-1L), 0x5E075C8EL, (-1L)};
            int32_t *l_568 = &g_128;
            uint32_t **l_577 = &g_445;
            const uint8_t *l_583 = &g_90;
            const uint8_t **l_582 = &l_583;
            int i;
            for (g_172 = 0; (g_172 <= 0); g_172 += 1)
            {
                uint16_t l_536 = 65527UL;
                int32_t l_537 = (-2L);
                for (g_85 = 1; (g_85 >= 0); g_85 -= 1)
                {
                    int i;
                    g_19[g_172] = (void*)0;
                }
            }
        }
    }
    (***g_552) = (*g_73);
    return (*g_366);
}
static uint8_t func_43(int32_t * p_44, int32_t * p_45, uint32_t p_46, uint32_t p_47, int32_t p_48)
{
    uint8_t ***l_266 = &g_205;
    int32_t l_270 = 0x9F723797L;
    int32_t l_275 = (-1L);
    int32_t **l_284 = &g_74;
    uint32_t *l_334 = &g_121;
    uint32_t **l_333 = &l_334;
    uint16_t l_379[5];
    const int32_t *l_440 = (void*)0;
    int32_t l_483 = 0x4231C853L;
    uint32_t ****l_485 = &g_410;
    uint32_t *****l_484 = &l_485;
    int i;
    for (i = 0; i < 5; i++)
        l_379[i] = 0x71C9L;
    (*g_73) = p_44;
    for (g_85 = 0; (g_85 <= 0); g_85 += 1)
    {
        int32_t *l_257 = &g_87;
        uint8_t ****l_267[6][6][7] = {{{(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}}, {{(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}}, {{(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}}, {{(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}}, {{(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}}, {{(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}, {(void*)0, &l_266, &l_266, (void*)0, &l_266, &l_266, &l_266}}};
        int32_t *l_272 = &g_128;
        int8_t *l_276 = &g_115[2][5][0];
        int16_t l_351 = 0x30CCL;
        int16_t l_374[2][2] = {{0xB9E4L, 0x7314L}, {0xB9E4L, 0x7314L}};
        uint32_t ***l_380 = &l_333;
        int32_t ***l_428 = &l_284;
        int16_t * const l_494 = &l_374[1][0];
        int8_t l_496 = (-5L);
        int i, j, k;
        (*l_257) = 0x9CA1E323L;
        (*g_73) = (*g_73);
    }
    (**g_366) = (*l_284);
    return (*g_206);
}
inline static int32_t * func_49(int32_t * p_50, int32_t p_51, int32_t ** p_52)
{
    uint32_t *l_76 = &g_77;
    const int32_t l_78 = 0x74462D17L;
    uint32_t l_84 = 0UL;
    int32_t *l_86[5][9] = {{&g_20, &g_20, &g_20, (void*)0, &g_20, &g_20, &g_85, &g_85, &g_20}, {&g_20, &g_20, &g_20, (void*)0, &g_20, &g_20, &g_85, &g_85, &g_20}, {&g_20, &g_20, &g_20, (void*)0, &g_20, &g_20, &g_85, &g_85, &g_20}, {&g_20, &g_20, &g_20, (void*)0, &g_20, &g_20, &g_85, &g_85, &g_20}, {&g_20, &g_20, &g_20, (void*)0, &g_20, &g_20, &g_85, &g_85, &g_20}};
    const uint8_t *l_165 = (void*)0;
    uint32_t l_175 = 0xBF474991L;
    uint16_t l_176[6][1];
    uint8_t l_236 = 0x5EL;
    uint32_t *l_250 = &g_95;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_176[i][j] = 0xB455L;
    }
    (*g_73) = func_57(p_51, g_11, ((*l_76) = 4294967292UL), l_78);
    for (g_77 = 0; (g_77 == 39); g_77++)
    {
        uint8_t l_141 = 0xE7L;
        int16_t * const l_187 = &g_106;
        uint16_t l_240[1];
        int i;
        for (i = 0; i < 1; i++)
            l_240[i] = 0UL;
        for (p_51 = 15; (p_51 <= 13); --p_51)
        {
            const uint32_t l_83 = 0x881F6C98L;
            int32_t l_130[1];
            int32_t l_131 = (-1L);
            uint32_t l_245 = 9UL;
            uint16_t l_246 = 65530UL;
            int i;
            for (i = 0; i < 1; i++)
                l_130[i] = 0x1E7967B2L;
            l_84 = l_83;
            for (l_84 = 0; (l_84 <= 0); l_84 += 1)
            {
                int16_t l_107 = 0x67BEL;
                int32_t l_129 = 0xA677434CL;
                uint32_t *l_247 = &l_175;
                uint32_t *l_249[8][8] = {{(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}, {(void*)0, &g_95, (void*)0, (void*)0, &g_95, &l_84, &g_95, (void*)0}};
                uint32_t **l_248[1];
                uint8_t l_251[3][6][8] = {{{253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}}, {{253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}}, {{253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}, {253UL, 1UL, 0xA4L, 0xA0L, 0x85L, 0xE2L, 0x65L, 0x0DL}}};
                int8_t *l_252[3][10] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                int32_t l_253 = 0xD02848F1L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_248[i] = &l_249[6][1];
                for (g_85 = 0; (g_85 >= 0); g_85 -= 1)
                {
                    int32_t l_91 = 0x6996DCEBL;
                    uint32_t *l_92 = &g_93;
                    uint32_t *l_94 = &g_95;
                    int32_t **l_98 = &l_86[1][0];
                    uint16_t *l_99 = &g_100;
                    uint8_t *l_103 = &g_104;
                    int16_t *l_105[6] = {(void*)0, &g_106, (void*)0, &g_106, (void*)0, &g_106};
                    int8_t *l_114 = &g_115[1][7][0];
                    uint32_t *l_120 = &g_121;
                    int i;
                    g_87 = (((*p_52) = (*g_73)) != l_86[1][0]);
                    g_19[g_85] = func_57(p_51, l_83, (safe_unary_minus_func_uint8_t_u((+(l_91 = g_90)))), (*p_50));
                }
                for (g_100 = 24; (g_100 > 30); g_100++)
                {
                    int32_t *l_154[9][4][5] = {{{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}, {{&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}, {&g_128, &g_87, (void*)0, &g_128, &l_131}}};
                    int8_t *l_164 = &g_115[1][7][0];
                    int16_t *l_186[10] = {&g_106, &g_106, (void*)0, &g_106, &g_106, (void*)0, &g_106, &g_106, (void*)0, &g_106};
                    int i, j, k;
                }
                if ((*g_74))
                {
                    g_128 = (-3L);
                }
                else
                {
                    int8_t l_192 = 5L;
                    uint16_t *l_217[3][9][8] = {{{&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}}, {{&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}}, {{&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}, {&g_100, &l_176[4][0], &g_172, &l_176[1][0], &g_100, &l_176[5][0], (void*)0, &g_172}}};
                    int8_t *l_218[10][3] = {{&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}, {&g_115[1][7][0], &l_192, &g_115[2][9][0]}};
                    int i, j, k;
                    if (l_192)
                        break;
                    for (l_107 = 0; (l_107 != (-28)); l_107 = safe_sub_func_int32_t_s_s(l_107, 7))
                    {
                        return (*g_73);
                    }
                    (*g_73) = func_57(((safe_lshift_func_uint16_t_u_s((p_51 != (safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_51 < (safe_rshift_func_int8_t_s_s((g_115[1][7][0] = ((((void*)0 != g_205) ^ (safe_sub_func_uint8_t_u_u((((*l_187) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_115[1][7][0], 12)), ((g_172 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_51 >= ((void*)0 != &l_175)), 4)), 0x3018L))) & 7UL)))) || 0x4401L), p_51))) != l_192)), p_51))), 15)), p_51)) >= l_141) ^ l_83), l_192))), 1)) && p_51), g_100, g_87, l_141);
                }
                l_253 = ((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((1UL == (**g_73)), 0xC2L)) < (l_130[0] = ((safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((+4294967287UL) | (safe_lshift_func_int8_t_s_u(l_131, (l_129 = ((((l_236 <= l_130[0]) ^ (!(((((safe_add_func_int16_t_s_s(((l_250 = func_57(l_240[0], ((*l_247) = (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((0x7D5AL >= l_245), 9)), l_240[0])) >= (-6L)) > l_246)), p_51, (*p_50))) != &g_95), l_240[0])) != (-1L)) != (-9L)) <= 1UL) > p_51))) || l_251[1][3][0]) < (**g_205)))))), g_90)), l_130[0])) ^ l_240[0]) | l_240[0]) | p_51) <= (**g_73)), 7)) >= g_11))) == l_83), l_83)) && g_77) != l_107) > 0x6C25L), g_115[1][0][0])) & 3L);
            }
            (*g_73) = (*p_52);
            for (l_84 = 24; (l_84 >= 40); l_84++)
            {
                int32_t *l_256 = &l_130[0];
                return (*p_52);
            }
        }
    }
    return l_86[1][0];
}
static int32_t ** func_53(const int32_t p_54, int32_t * p_55, int8_t p_56)
{
    const uint32_t l_75 = 7UL;
    for (p_56 = 16; (p_56 < 28); ++p_56)
    {
        return g_73;
    }
    (*g_73) = func_57(g_11, l_75, p_54, (*p_55));
    return &g_74;
}
static int32_t * func_57(uint32_t p_58, const uint32_t p_59, uint32_t p_60, const int32_t p_61)
{
    const int32_t **l_70[3][9][1] = {{{&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}}, {{&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}}, {{&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}, {&g_19[0]}}};
    int i, j, k;
    g_19[0] = &p_61;
    return &g_20;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_115[i][j][k], "g_115[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1067[i][j], "g_1067[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_1068, "g_1068", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
