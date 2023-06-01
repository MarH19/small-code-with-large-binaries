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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
static int32_t g_12 = 0x53E58BFCL;
static uint32_t g_48 = 0x440E708BL;
static uint32_t g_63[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static uint32_t g_71 = 4294967295UL;
static uint32_t g_74 = 0x7FAE0CD5L;
static uint32_t g_76 = 4294967295UL;
static int32_t g_83 = 0xCD3C6E85L;
static uint32_t g_91 = 0x90166331L;
static uint64_t g_97 = 18446744073709551607UL;
static int32_t **g_105 = (void*)0;
static uint16_t g_110[3] = {0xF411L,0xF411L,0xF411L};
static int16_t g_132 = 4L;
static int32_t g_146[4] = {0xDAE1B46CL,0xDAE1B46CL,0xDAE1B46CL,0xDAE1B46CL};
static uint8_t g_147 = 9UL;
static uint64_t g_175 = 0UL;
static int64_t g_183 = (-9L);
static const uint32_t *g_193 = (void*)0;
static const uint32_t **g_192 = &g_193;
static int32_t g_250 = 4L;
static int8_t g_251 = (-1L);
static uint32_t g_252 = 18446744073709551607UL;
static uint8_t g_259 = 251UL;
static int32_t g_292[3] = {0xA347EEFFL,0xA347EEFFL,0xA347EEFFL};
static int64_t *g_319 = &g_183;
static int64_t **g_318[8] = {&g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319};
static int64_t ***g_317 = &g_318[1];
static uint64_t **g_427 = (void*)0;
static int32_t g_477 = 0x404CEC71L;
static int32_t g_480 = (-4L);
static int16_t g_481 = 0L;
static int8_t g_494[2] = {(-1L),(-1L)};
static int64_t g_509[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
static uint32_t g_514 = 1UL;
static uint16_t *g_520 = (void*)0;
static int32_t ***g_558 = (void*)0;
static int32_t ****g_557 = &g_558;
static uint8_t g_580[1][2] = {{2UL,2UL}};
static uint8_t g_618 = 9UL;
static uint64_t g_629 = 0x94FB473489620DFALL;
static uint32_t g_686 = 7UL;
static int64_t g_698 = 0xE4AB4271F2A85D83LL;
static uint16_t *g_722 = &g_110[0];
static uint16_t g_750 = 65535UL;
static uint8_t *g_779[6] = {&g_580[0][1],&g_147,&g_580[0][1],&g_580[0][1],&g_147,&g_580[0][1]};
static uint32_t g_791[5] = {0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L};
static int16_t g_846 = 0L;
static int8_t g_870 = (-1L);
static int32_t g_927 = 0xF37DFAF7L;
static uint32_t g_930[10] = {0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL,0xE4A74CBDL};
static uint16_t g_938 = 0x7EFEL;
static uint8_t *g_1093[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
static uint64_t func_1(void);
static int64_t func_4(int64_t p_5, uint32_t p_6);
static uint32_t func_8(uint32_t p_9);
static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17);
inline static int16_t func_19(int8_t p_20);
static uint16_t func_27(int32_t p_28, int64_t p_29);
static int32_t func_30(int32_t p_31, int64_t p_32);
static uint32_t func_35(int8_t p_36);
inline static int8_t func_37(int32_t p_38, uint32_t p_39);
inline static int16_t func_42(int16_t p_43, uint8_t p_44, const int32_t p_45, uint32_t p_46);
static uint64_t func_1(void)
{
    int32_t l_7[1][4][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
    int32_t l_18[4][1] = {{0xECF4A416L},{1L},{0xECF4A416L},{1L}};
    int32_t l_268 = 0xADBD7DA9L;
    uint32_t *l_491[5][8][6] = {{{&g_71,(void*)0,&g_74,(void*)0,&g_74,&g_91},{(void*)0,&g_74,&g_91,&g_71,&g_71,(void*)0},{&g_71,&g_48,&g_76,&g_71,&g_91,(void*)0},{(void*)0,&g_71,&g_91,&g_71,&g_71,&g_91},{&g_48,&g_48,&g_74,(void*)0,&g_48,&g_76},{&g_71,(void*)0,&g_74,&g_91,(void*)0,&g_74},{&g_48,&g_71,&g_74,(void*)0,&g_48,&g_76},{&g_74,(void*)0,&g_74,(void*)0,&g_71,&g_91}},{{(void*)0,&g_71,&g_91,&g_91,(void*)0,(void*)0},{&g_74,(void*)0,&g_76,&g_74,&g_48,(void*)0},{&g_48,&g_74,&g_91,(void*)0,&g_71,&g_91},{&g_91,(void*)0,&g_74,&g_71,(void*)0,&g_76},{&g_74,&g_91,&g_74,&g_74,&g_71,&g_74},{(void*)0,&g_74,&g_74,(void*)0,(void*)0,&g_76},{(void*)0,&g_48,&g_74,&g_48,(void*)0,&g_91},{&g_48,(void*)0,&g_91,&g_74,&g_74,(void*)0}},{{&g_74,(void*)0,&g_76,(void*)0,(void*)0,(void*)0},{&g_91,&g_74,&g_91,&g_71,(void*)0,&g_91},{(void*)0,&g_91,&g_74,&g_74,&g_48,&g_76},{&g_74,&g_48,&g_74,&g_71,&g_71,&g_74},{(void*)0,&g_74,&g_74,&g_48,&g_91,&g_76},{&g_71,(void*)0,&g_74,(void*)0,&g_74,&g_91},{(void*)0,&g_74,&g_91,&g_71,&g_71,(void*)0},{&g_71,&g_48,&g_76,&g_71,&g_91,(void*)0}},{{(void*)0,&g_71,&g_91,&g_71,&g_71,&g_91},{&g_48,&g_48,&g_74,(void*)0,&g_48,&g_76},{&g_71,(void*)0,&g_74,&g_91,(void*)0,&g_48},{&g_76,&g_91,&g_74,&g_76,&g_48,&g_74},{&g_91,&g_76,&g_48,&g_71,&g_48,&g_71},{&g_71,&g_48,&g_71,&g_71,&g_91,&g_74},{&g_91,&g_71,&g_48,&g_91,&g_48,&g_74},{&g_48,&g_48,&g_71,&g_71,&g_48,&g_71}},{{&g_76,&g_91,&g_48,&g_48,(void*)0,&g_74},{&g_91,&g_76,&g_74,&g_71,&g_48,&g_48},{&g_76,&g_48,&g_74,&g_71,&g_91,&g_74},{&g_91,&g_76,&g_48,&g_76,&g_91,&g_71},{&g_76,&g_91,&g_71,&g_71,&g_91,&g_74},{&g_48,&g_76,&g_48,&g_91,&g_91,&g_74},{&g_76,&g_91,&g_71,&g_48,&g_71,&g_71},{&g_91,&g_76,&g_48,&g_91,(void*)0,&g_74}}};
    int8_t *l_492 = (void*)0;
    int8_t *l_493 = &g_494[1];
    const uint8_t l_542[4][4][8] = {{{0x23L,2UL,0x1BL,0x24L,0x84L,1UL,0xD7L,0x23L},{0xE6L,2UL,1UL,0xFEL,1UL,0x65L,1UL,0xE6L},{0xE6L,0x1BL,0xD7L,0x84L,0x84L,0xD7L,0x1BL,0xE6L},{0x23L,0UL,2UL,0xFEL,0xE6L,0UL,0x1BL,0x23L}},{{6UL,0x65L,0xD7L,0x24L,0xFEL,0UL,1UL,6UL},{0xFEL,0UL,1UL,6UL,0xFEL,0xD7L,0xD7L,0xFEL},{6UL,0x1BL,0x1BL,6UL,0xE6L,0x65L,2UL,6UL},{0x23L,2UL,0x1BL,0x24L,0x84L,1UL,0xD7L,0x23L}},{{0xE6L,2UL,1UL,0xFEL,1UL,0x65L,1UL,0xE6L},{0xE6L,0x1BL,0xD7L,0x84L,0x84L,0xD7L,0x1BL,0xE6L},{0x23L,0UL,2UL,0xFEL,0xE6L,0UL,0x1BL,0x23L},{6UL,0x65L,0xD7L,0x24L,0xFEL,0UL,1UL,6UL}},{{0xFEL,0UL,1UL,6UL,0xFEL,0xD7L,0xD7L,0xFEL},{6UL,0x1BL,0x1BL,6UL,0xE6L,0x65L,2UL,0x23L},{0xFEL,5UL,0x65L,0x84L,0xE6L,2UL,1UL,0xFEL},{1UL,5UL,2UL,0x24L,6UL,0xD7L,2UL,1UL}}};
    int32_t ***l_556 = &g_105;
    int32_t ****l_555 = &l_556;
    uint32_t l_575 = 0x066975D1L;
    int16_t l_581 = 8L;
    uint16_t l_656 = 0x0048L;
    uint32_t l_711 = 0xF9D7DB10L;
    int32_t *l_737 = (void*)0;
    int64_t l_773 = 1L;
    int32_t * const **l_811[3];
    int32_t * const ***l_810 = &l_811[0];
    int32_t l_857 = (-9L);
    int8_t l_865 = 0x3AL;
    const int64_t **l_875 = (void*)0;
    const int64_t *** const l_874 = &l_875;
    uint64_t l_902 = 0x562EE43921DC7B67LL;
    const uint32_t l_1035[7] = {0x8FEF6249L,0x8FEF6249L,0x8FEF6249L,0x8FEF6249L,0x8FEF6249L,0x8FEF6249L,0x8FEF6249L};
    uint16_t l_1070 = 4UL;
    uint8_t l_1119 = 0xBDL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_811[i] = (void*)0;
    l_18[3][0] = (safe_add_func_int8_t_s_s((func_4(l_7[0][3][0], func_8(((safe_mod_func_int32_t_s_s(0L, g_12)) | ((*l_493) |= (((l_18[3][0] = func_13(l_7[0][3][0], (l_18[3][0] = 0xD4L), (func_19(((g_12 | l_7[0][3][0]) && (safe_mod_func_uint32_t_u_u((l_268 &= (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(func_27(func_30(l_7[0][3][0], g_12), g_250), (-1L))), g_250))), 0x54E90A01L)))) & l_7[0][0][1]), g_97)) ^ l_7[0][3][0]) == l_7[0][1][0]))))) < g_251), l_7[0][1][1]));
    ((void) sizeof ((g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])) ? 1 : 0), __extension__ ({ if (g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])) ; else __assert_fail ("g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])", "/tmp/tmpusnnar3w.c", 122, __extension__ __PRETTY_FUNCTION__); }));
    return g_686;
}
static int64_t func_4(int64_t p_5, uint32_t p_6)
{
    int32_t *l_531[8][10][3] = {{{&g_292[0],&g_83,(void*)0},{&g_292[0],&g_292[0],&g_480},{&g_83,&g_292[0],&g_292[1]},{&g_292[0],(void*)0,(void*)0},{&g_292[2],&g_292[0],(void*)0},{&g_480,&g_292[0],&g_477},{&g_292[2],&g_83,&g_292[0]},{&g_477,&g_477,(void*)0},{&g_292[2],(void*)0,(void*)0},{&g_477,&g_477,&g_480}},{{&g_292[2],&g_480,&g_477},{(void*)0,&g_477,&g_477},{&g_292[2],(void*)0,&g_292[0]},{&g_477,(void*)0,&g_477},{&g_83,&g_83,&g_477},{&g_292[0],&g_477,&g_480},{&g_292[0],&g_480,(void*)0},{&g_292[0],&g_292[0],(void*)0},{&g_292[0],&g_292[0],&g_292[0]},{(void*)0,&g_477,&g_477}},{{&g_477,&g_292[1],(void*)0},{&g_477,(void*)0,(void*)0},{&g_480,(void*)0,&g_292[1]},{&g_477,&g_477,&g_480},{&g_477,&g_292[0],(void*)0},{(void*)0,&g_477,&g_292[0]},{&g_292[0],(void*)0,&g_83},{&g_292[0],&g_477,&g_477},{&g_292[0],&g_292[1],(void*)0},{&g_292[0],&g_292[0],&g_292[0]}},{{&g_83,&g_480,&g_292[1]},{&g_477,(void*)0,(void*)0},{&g_292[2],&g_480,(void*)0},{(void*)0,&g_292[0],&g_83},{&g_292[2],&g_292[1],&g_292[0]},{&g_477,&g_477,(void*)0},{&g_292[2],(void*)0,(void*)0},{&g_477,&g_477,&g_292[0]},{&g_292[2],&g_292[0],&g_477},{&g_480,&g_477,&g_292[0]}},{{&g_292[2],(void*)0,&g_292[0]},{&g_292[0],(void*)0,&g_292[0]},{&g_83,&g_292[1],&g_477},{&g_292[0],&g_477,&g_292[0]},{&g_292[0],&g_292[0],(void*)0},{&g_477,&g_292[0],(void*)0},{&g_292[0],&g_480,&g_292[0]},{&g_480,&g_477,&g_83},{&g_477,&g_83,(void*)0},{&g_477,(void*)0,(void*)0}},{{&g_480,(void*)0,&g_292[1]},{&g_477,&g_477,&g_292[0]},{&g_477,&g_480,(void*)0},{&g_480,&g_477,&g_477},{&g_292[0],(void*)0,&g_83},{&g_477,&g_477,&g_292[1]},{(void*)0,&g_292[0],(void*)0},{&g_83,(void*)0,&g_83},{&g_83,&g_292[0],&g_83},{(void*)0,(void*)0,&g_292[0]}},{{&g_292[2],&g_292[0],&g_480},{&g_292[0],(void*)0,&g_292[0]},{&g_292[0],&g_292[0],&g_480},{(void*)0,(void*)0,&g_480},{&g_480,&g_83,&g_292[0]},{(void*)0,(void*)0,&g_83},{&g_292[0],&g_477,&g_292[1]},{&g_292[0],&g_292[0],(void*)0},{&g_292[2],&g_292[1],&g_480},{&g_480,&g_292[0],(void*)0}},{{&g_83,&g_292[0],&g_292[1]},{&g_292[0],&g_477,&g_83},{(void*)0,&g_292[2],&g_292[0]},{(void*)0,&g_83,&g_480},{&g_480,&g_292[0],&g_480},{&g_292[0],&g_477,&g_292[0]},{&g_292[2],&g_480,&g_480},{(void*)0,&g_292[0],&g_292[0]},{&g_477,&g_83,&g_83},{(void*)0,&g_292[0],&g_83}}};
    uint8_t l_532[4];
    int8_t l_535 = (-2L);
    int64_t ***l_538 = &g_318[5];
    int32_t l_539 = 0xC584C86EL;
    uint32_t *l_540 = &g_76;
    int32_t l_541 = (-6L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_532[i] = 0xAAL;
    --l_532[1];
    g_83 = (0x6A3E920A235C69AFLL != l_535);
    g_477 = ((g_477 , ((g_110[0] != (safe_div_func_int64_t_s_s((((((p_5 ^ ((((void*)0 != l_538) || ((*l_540) = ((l_539 <= p_6) == 0x9F1086A4L))) || (0UL & p_5))) || p_5) == g_110[1]) < g_74) & l_541), 0xA6D93444D775665ALL))) != p_6)) , p_6);
    return p_6;
}
static uint32_t func_8(uint32_t p_9)
{
    uint32_t l_499 = 0UL;
    uint16_t *l_521 = &g_110[0];
    int32_t *l_528 = &g_83;
    for (g_480 = 0; (g_480 < 25); g_480 = safe_add_func_uint64_t_u_u(g_480, 9))
    {
        int32_t *l_497 = &g_292[0];
        int32_t *l_498[5][5][3] = {{{&g_83,&g_480,&g_480},{&g_83,&g_83,&g_480},{&g_83,&g_83,(void*)0},{&g_83,(void*)0,&g_292[0]},{&g_83,&g_292[2],&g_477}},{{&g_83,&g_83,&g_292[0]},{(void*)0,&g_477,(void*)0},{&g_480,&g_292[0],&g_480},{&g_83,&g_477,&g_480},{&g_83,&g_83,&g_292[1]}},{{&g_83,&g_292[2],(void*)0},{&g_83,(void*)0,(void*)0},{&g_83,&g_83,&g_477},{&g_480,&g_83,(void*)0},{(void*)0,&g_480,(void*)0}},{{&g_83,&g_292[0],&g_292[1]},{&g_83,&g_480,&g_480},{&g_83,&g_83,&g_480},{&g_83,&g_83,(void*)0},{&g_83,(void*)0,&g_292[0]}},{{&g_83,&g_292[2],&g_477},{&g_83,&g_83,&g_292[0]},{(void*)0,&g_477,(void*)0},{&g_480,&g_292[0],&g_480},{&g_83,&g_477,&g_480}}};
        int i, j, k;
        --l_499;
    }
    for (g_183 = 0; (g_183 == 12); g_183 = safe_add_func_int32_t_s_s(g_183, 3))
    {
        uint32_t l_508 = 1UL;
        uint16_t *l_519[7][4] = {{&g_110[0],&g_110[2],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0],&g_110[2]},{&g_110[2],&g_110[0],&g_110[2],&g_110[2]},{&g_110[0],&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[2],&g_110[0],&g_110[0]},{(void*)0,(void*)0,&g_110[0],&g_110[2]},{&g_110[0],&g_110[2],&g_110[0],&g_110[2]}};
        int32_t *l_526 = &g_292[0];
        int32_t ***l_527 = &g_105;
        int i, j;
        (*l_526) ^= ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(253UL, (p_9 , l_508))), g_509[6])) | (((safe_rshift_func_int16_t_s_u(((g_514 & (((safe_sub_func_int64_t_s_s((p_9 | ((g_520 = l_519[5][3]) != l_521)), (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((g_146[1] && g_48) && p_9), 15)) ^ g_110[0]), g_480)))) , p_9) != g_63[8])) >= 0xE8L), l_499)) || 18446744073709551615UL) , 0x4E9D2E339661B2EFLL));
        l_527 = l_527;
    }
    l_528 = l_528;
    for (g_12 = 7; (g_12 >= 0); g_12 -= 1)
    {
        uint8_t l_530[9] = {0x12L,0x5EL,0x5EL,0x12L,0x5EL,0x5EL,0x12L,0x5EL,0x5EL};
        int i;
        l_530[3] = (safe_unary_minus_func_int32_t_s(g_509[6]));
        if (l_530[3])
            break;
    }
    return (*l_528);
}
static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17)
{
    uint64_t l_445 = 0xDEF7B2CD55914FFCLL;
    uint16_t *l_459 = (void*)0;
    uint16_t *l_460 = &g_110[0];
    int32_t *l_463 = &g_83;
    int32_t *l_474 = (void*)0;
    int32_t *l_475 = &g_292[2];
    int32_t *l_476[3];
    int16_t *l_478[10] = {&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132};
    const uint8_t l_479 = 0x2BL;
    uint32_t l_482 = 1UL;
    int16_t l_487 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_476[i] = &g_477;
    g_481 = (g_480 = (l_445 == ((((((*g_319) ^= p_14) < ((p_14 || (safe_mod_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_12, p_17)), ((safe_unary_minus_func_uint8_t_u(0x4EL)) ^ ((((((safe_add_func_uint16_t_u_u((--(*l_460)), 1UL)) >= ((*l_463) = l_445)) != (g_132 = ((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_477 = ((*l_475) = (g_71 , 0xFAD3105DL))) & g_76), g_175)), p_16)) != (-4L)), 2)) ^ 0xF7FDEC59L), 0x7AB6L)), g_132)) != p_15))) , (void*)0) != (void*)0) >= g_175)))) < g_252) , g_252) , 0xE2L), 0xA7L))) <= p_15)) , g_146[3]) || p_15) & l_479)));
    g_480 &= (l_482 ^ (((void*)0 == &g_105) & ((*l_475) == (g_175 == ((((*l_460)++) > l_487) , (safe_unary_minus_func_uint8_t_u(((p_15 , (safe_lshift_func_int8_t_s_u(g_292[2], 4))) || (((g_97 = (g_146[3] && 0L)) < (*l_475)) > g_292[2])))))))));
    return p_17;
}
inline static int16_t func_19(int8_t p_20)
{
    int16_t l_273 = (-1L);
    int32_t l_282 = (-8L);
    int32_t l_293[3];
    int8_t l_326 = (-9L);
    int16_t l_328 = 0xA923L;
    int32_t l_333[9] = {0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L};
    uint32_t *l_344 = &g_71;
    uint32_t **l_343 = &l_344;
    int8_t l_366 = 0L;
    const uint16_t l_367 = 8UL;
    int32_t *l_372 = &l_282;
    int32_t *l_373 = &l_293[0];
    int32_t *l_374 = (void*)0;
    int32_t *l_375 = &l_293[0];
    int32_t *l_376 = &g_292[1];
    int32_t *l_377 = &g_292[2];
    int32_t *l_378 = &g_292[1];
    int32_t *l_379[6] = {&g_292[0],&g_292[0],&g_292[0],&g_292[0],&g_292[0],&g_292[0]};
    int32_t l_380 = (-10L);
    int8_t l_381 = 0xFCL;
    int8_t l_382 = 0xE6L;
    int64_t l_383 = 8L;
    int16_t l_384 = 0x2228L;
    int8_t l_385[3];
    uint32_t l_386[9][9][2] = {{{4294967294UL,0x838E69A5L},{2UL,8UL},{0x0BAEF3A4L,4294967286UL},{4294967289UL,1UL},{0xC05A39AEL,0UL},{0UL,4294967295UL},{0x064D76B6L,0x0BAEF3A4L},{4294967287UL,4294967291UL},{0x0D83EEDDL,0x01E2FD99L}},{{0x0EFFC479L,0UL},{1UL,0x0D83EEDDL},{4294967286UL,0x2AAAEA85L},{0x838E69A5L,0UL},{0UL,0UL},{4294967291UL,0xF5D9F585L},{0UL,4294967294UL},{0x4072B97FL,4294967287UL},{0x671A5FC1L,0x4072B97FL}},{{0UL,0xC05A39AEL},{0UL,0x4072B97FL},{0x671A5FC1L,4294967287UL},{0x4072B97FL,4294967294UL},{0UL,0xF5D9F585L},{4294967291UL,0UL},{0UL,0UL},{0x838E69A5L,0x2AAAEA85L},{4294967286UL,0x0D83EEDDL}},{{1UL,0UL},{0x0EFFC479L,0x01E2FD99L},{0x0D83EEDDL,4294967291UL},{4294967287UL,0x0BAEF3A4L},{0x064D76B6L,4294967295UL},{0UL,0UL},{0xC05A39AEL,1UL},{4294967289UL,4294967286UL},{0x0BAEF3A4L,8UL}},{{2UL,0x838E69A5L},{4294967294UL,4294967295UL},{1UL,0UL},{4294967295UL,0UL},{1UL,4294967295UL},{4294967294UL,0x838E69A5L},{2UL,8UL},{0x0BAEF3A4L,4294967286UL},{4294967289UL,1UL}},{{0xC05A39AEL,0UL},{0UL,4294967295UL},{0x064D76B6L,0x0BAEF3A4L},{4294967287UL,4294967291UL},{0x0D83EEDDL,0x01E2FD99L},{0x0EFFC479L,0UL},{1UL,0x0D83EEDDL},{4294967286UL,0x2AAAEA85L},{0x838E69A5L,0UL}},{{0UL,0UL},{4294967291UL,0xF5D9F585L},{0UL,4294967294UL},{0x4072B97FL,4294967287UL},{0x671A5FC1L,0x4072B97FL},{0UL,0xC05A39AEL},{0UL,0x4072B97FL},{0x671A5FC1L,4294967287UL},{0x4072B97FL,4294967294UL}},{{0UL,0xF5D9F585L},{4294967291UL,0UL},{0UL,0UL},{0x838E69A5L,0x2AAAEA85L},{4294967286UL,0x0D83EEDDL},{1UL,0UL},{0x0EFFC479L,0x01E2FD99L},{0x0D83EEDDL,4294967291UL},{4294967287UL,0x0BAEF3A4L}},{{0x064D76B6L,4294967295UL},{0UL,0UL},{0xC05A39AEL,1UL},{4294967289UL,4294967286UL},{0x0BAEF3A4L,8UL},{2UL,0x838E69A5L},{4294967294UL,4294967295UL},{1UL,0UL},{4294967295UL,0UL}}};
    uint32_t l_393 = 0UL;
    int32_t ***l_396 = &g_105;
    int32_t ****l_397 = &l_396;
    int32_t * const *l_399 = &l_376;
    int32_t * const **l_398 = &l_399;
    int32_t * const ***l_400 = &l_398;
    int32_t l_401 = 0x8068C0A9L;
    uint8_t *l_408 = &g_259;
    uint32_t l_409 = 4294967286UL;
    int32_t *l_412 = &g_83;
    const uint64_t *l_426[1][5][1];
    const uint64_t **l_425 = &l_426[0][4][0];
    int64_t l_430 = 0xD76EC6D6B9109006LL;
    uint32_t l_431 = 3UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_293[i] = (-2L);
    for (i = 0; i < 3; i++)
        l_385[i] = 0x8CL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_426[i][j][k] = &g_97;
        }
    }
    for (g_175 = 8; (g_175 != 42); g_175 = safe_add_func_uint16_t_u_u(g_175, 2))
    {
        uint16_t *l_274[3];
        int32_t l_277 = 0x97967E35L;
        int32_t l_294 = 0xEAB198FBL;
        int32_t l_295 = (-1L);
        int32_t l_296 = (-9L);
        int32_t l_297 = 3L;
        int32_t l_298 = 0xC7C4E01AL;
        int32_t l_299[2][8][2] = {{{1L,0xDAA81220L},{0x0F0B6039L,1L},{0xAFCF270AL,0xAFCF270AL},{0xAFCF270AL,1L},{0x0F0B6039L,0xDAA81220L},{0x0F0B6039L,0xAFCF270AL},{0x28ED58A8L,0x0F0B6039L},{1L,1L}},{{1L,0x0F0B6039L},{0x28ED58A8L,0xAFCF270AL},{0x0F0B6039L,0xAFCF270AL},{0x28ED58A8L,0x0F0B6039L},{1L,1L},{1L,0x0F0B6039L},{0x28ED58A8L,0xAFCF270AL},{0x0F0B6039L,0xAFCF270AL}}};
        uint32_t l_300 = 18446744073709551615UL;
        uint16_t l_334 = 0x2114L;
        int64_t ***l_365[2];
        const int16_t l_371 = 9L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_274[i] = &g_110[1];
        for (i = 0; i < 2; i++)
            l_365[i] = &g_318[7];
        l_282 |= ((((safe_rshift_func_int16_t_s_s(0x8C57L, 11)) , g_71) , ((p_20 & 0xA467L) < p_20)) & ((((g_110[0] = l_273) & (safe_add_func_uint8_t_u_u((((((g_12 , l_277) < ((safe_add_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(p_20, p_20)) != g_76), g_97)) >= g_74)) <= p_20) > p_20) >= 0x22DAL), g_175))) <= l_273) > g_83));
        for (g_91 = 0; g_91 < 3; g_91 += 1)
        {
            g_110[g_91] = 0x470EL;
        }
        for (g_250 = (-10); (g_250 >= 21); ++g_250)
        {
            int32_t *l_285 = &l_282;
            int32_t *l_286 = &l_282;
            int32_t *l_287 = &g_83;
            int32_t l_288 = (-1L);
            int32_t *l_289 = &l_288;
            int32_t *l_290 = &l_282;
            int32_t *l_291[1];
            uint32_t *l_341 = &g_91;
            uint32_t **l_340 = &l_341;
            int i;
            for (i = 0; i < 1; i++)
                l_291[i] = &l_277;
            l_300--;
            if (((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(0xF2L, 3)), 0x02L)) , (safe_mod_func_int16_t_s_s(((((*l_287) != 0x24L) , (safe_rshift_func_int16_t_s_s((*l_287), (safe_add_func_int16_t_s_s(((((void*)0 != g_317) , ((safe_div_func_uint8_t_u_u(p_20, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((p_20 || l_300) || 1L) < l_298), p_20)), 0x14L)))) , p_20)) || g_183), p_20))))) & p_20), g_251))) && l_299[0][1][1]), l_273)), l_282)) , 0x04123013L))
            {
                if (l_326)
                    break;
            }
            else
            {
                int16_t l_327 = 0xC2F6L;
                int32_t l_329 = 0L;
                int32_t l_330 = 1L;
                int32_t l_331 = 0x13205A4EL;
                int32_t l_332[10] = {1L,3L,3L,1L,3L,3L,1L,3L,3L,1L};
                uint16_t l_337 = 0x4B47L;
                uint32_t ***l_342 = (void*)0;
                int16_t *l_368 = (void*)0;
                int16_t *l_369 = (void*)0;
                int16_t *l_370[5][10] = {{(void*)0,&l_273,&l_273,(void*)0,&g_132,(void*)0,&l_273,&l_273,(void*)0,&g_132},{(void*)0,&l_273,&l_273,(void*)0,&g_132,(void*)0,&l_273,&l_273,(void*)0,&g_132},{(void*)0,&l_273,&l_273,(void*)0,&g_132,(void*)0,&l_273,&l_273,(void*)0,&g_132},{(void*)0,&l_273,&l_273,(void*)0,&g_132,(void*)0,&l_273,&l_273,(void*)0,&g_132},{(void*)0,&l_273,&l_273,(void*)0,&g_132,(void*)0,&l_273,&l_273,(void*)0,&g_132}};
                int i, j;
                l_334++;
                ++l_337;
                (*l_289) = (l_330 ^= (g_292[0] , (((((l_343 = l_340) == &l_344) < (-4L)) & ((((((!(safe_lshift_func_int16_t_s_s((g_132 = ((((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(252UL, (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(1L, (safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int8_t_s_s(((-8L) != ((0x1716L <= 0x7324L) < l_333[3])), 0)) , l_365[1]) == l_365[1]))), g_132)) , (void*)0) == (void*)0), (-1L))) || 65535UL), l_300)))), l_366)))) || (-5L)), l_367)) , (void*)0) == (*g_192)) , (*l_287))), g_147))) && (*l_285)) , 0x80L) , l_334) , l_371) , 0x33AF7378L)) , (-1L))));
                ((void) sizeof ((l_343 == &l_341) ? 1 : 0), __extension__ ({ if (l_343 == &l_341) ; else __assert_fail ("l_343 == &l_341", "/tmp/tmpusnnar3w.c", 338, __extension__ __PRETTY_FUNCTION__); }));
                (*l_286) |= ((*l_289) = l_327);
            }
        }
    }
    l_386[2][0][0]--;
    (*l_376) &= (*l_375);
    if ((((*l_344) = (safe_mod_func_int32_t_s_s((0x45L < ((*l_408) = ((safe_mul_func_uint16_t_u_u(l_393, ((safe_div_func_int8_t_s_s((((((*l_397) = l_396) == ((*l_400) = l_398)) || ((l_401 != g_252) | (safe_mul_func_uint8_t_u_u((&g_292[0] == (((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((((void*)0 != &l_344) != (**l_399)), g_250)), (*l_375))) ^ g_71) , (**l_398))), p_20)))) == p_20), 1L)) , g_74))) != 0x03L))), l_409))) != (*l_373)))
    {
        int32_t *l_410 = &g_292[0];
        int32_t **l_411[8] = {&l_372,&l_375,&l_375,&l_372,&l_375,&l_375,&l_372,&l_375};
        int16_t *l_428 = (void*)0;
        int16_t *l_429 = &g_132;
        int i;
        l_412 = (l_375 = (l_376 = l_410));
        ((void) sizeof (((l_375 >= &g_292[0] && l_375 <= &g_292[2])) ? 1 : 0), __extension__ ({ if ((l_375 >= &g_292[0] && l_375 <= &g_292[2])) ; else __assert_fail ("(l_375 >= &g_292[0] && l_375 <= &g_292[2])", "/tmp/tmpusnnar3w.c", 358, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof (((l_412 >= &g_292[0] && l_412 <= &g_292[2])) ? 1 : 0), __extension__ ({ if ((l_412 >= &g_292[0] && l_412 <= &g_292[2])) ; else __assert_fail ("(l_412 >= &g_292[0] && l_412 <= &g_292[2])", "/tmp/tmpusnnar3w.c", 359, __extension__ __PRETTY_FUNCTION__); }));
        (*l_378) = (safe_mul_func_uint8_t_u_u(((*l_408) |= (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u(((+((1UL ^ ((safe_div_func_uint32_t_u_u(0x1FC9181AL, 0x71D1EE99L)) | ((*l_429) = ((safe_lshift_func_int8_t_s_u((!((((void*)0 == &g_97) != ((*l_372) |= (((l_425 != g_427) & (*l_376)) || (*l_378)))) , g_110[1])), 2)) <= 0x4698ECC281D45485LL)))) ^ (-4L))) , p_20), (*g_319))) ^ l_430), 0))), (*l_410)));
        ++l_431;
    }
    else
    {
        uint8_t l_442 = 251UL;
        for (g_183 = (-8); (g_183 < 5); g_183 = safe_add_func_uint64_t_u_u(g_183, 1))
        {
            int32_t *l_441 = (void*)0;
            for (l_409 = 0; (l_409 == 15); l_409++)
            {
                int32_t **l_438[5];
                int32_t **l_439 = (void*)0;
                int32_t **l_440[4][6] = {{(void*)0,&l_377,&l_374,&l_374,&l_377,(void*)0},{&l_379[4],(void*)0,&l_374,(void*)0,&l_379[4],&l_379[4]},{&l_375,(void*)0,(void*)0,&l_375,&l_377,&l_375},{&l_375,&l_377,&l_375,(void*)0,(void*)0,&l_375}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_438[i] = &l_374;
                l_441 = (*l_399);
                ((void) sizeof (((l_441 >= &g_292[0] && l_441 <= &g_292[2])) ? 1 : 0), __extension__ ({ if ((l_441 >= &g_292[0] && l_441 <= &g_292[2])) ; else __assert_fail ("(l_441 >= &g_292[0] && l_441 <= &g_292[2])", "/tmp/tmpusnnar3w.c", 379, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof (((l_441 >= &g_292[0] && l_441 <= &g_292[2]) || l_441 == 0) ? 1 : 0), __extension__ ({ if ((l_441 >= &g_292[0] && l_441 <= &g_292[2]) || l_441 == 0) ; else __assert_fail ("(l_441 >= &g_292[0] && l_441 <= &g_292[2]) || l_441 == 0", "/tmp/tmpusnnar3w.c", 382, __extension__ __PRETTY_FUNCTION__); }));
        }
        l_442--;
    }
    ((void) sizeof (((l_375 >= &l_293[0] && l_375 <= &l_293[2]) || (l_375 >= &g_292[0] && l_375 <= &g_292[2])) ? 1 : 0), __extension__ ({ if ((l_375 >= &l_293[0] && l_375 <= &l_293[2]) || (l_375 >= &g_292[0] && l_375 <= &g_292[2])) ; else __assert_fail ("(l_375 >= &l_293[0] && l_375 <= &l_293[2]) || (l_375 >= &g_292[0] && l_375 <= &g_292[2])", "/tmp/tmpusnnar3w.c", 387, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_412 == &g_83 || (l_412 >= &g_292[0] && l_412 <= &g_292[2])) ? 1 : 0), __extension__ ({ if (l_412 == &g_83 || (l_412 >= &g_292[0] && l_412 <= &g_292[2])) ; else __assert_fail ("l_412 == &g_83 || (l_412 >= &g_292[0] && l_412 <= &g_292[2])", "/tmp/tmpusnnar3w.c", 388, __extension__ __PRETTY_FUNCTION__); }));
    return g_74;
}
static uint16_t func_27(int32_t p_28, int64_t p_29)
{
    int32_t l_267 = (-1L);
    return l_267;
}
static int32_t func_30(int32_t p_31, int64_t p_32)
{
    int32_t l_51[9];
    int32_t l_62[4][5] = {{3L,3L,0x879A2734L,1L,0x879A2734L},{3L,3L,0x879A2734L,1L,0x879A2734L},{3L,3L,0x879A2734L,1L,0x879A2734L},{3L,3L,0x879A2734L,1L,0x879A2734L}};
    uint32_t *l_70 = &g_71;
    uint32_t *l_72 = (void*)0;
    uint32_t *l_73 = &g_74;
    uint32_t *l_75[3][9] = {{(void*)0,&g_76,&g_76,&g_76,&g_76,(void*)0,&g_76,(void*)0,(void*)0},{&g_76,&g_76,(void*)0,&g_76,&g_76,(void*)0,&g_76,&g_76,&g_76},{(void*)0,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76}};
    const int64_t l_77 = 0xE6F96354D1843AD3LL;
    uint8_t *l_258 = &g_259;
    uint8_t *l_260 = &g_147;
    int32_t *l_261 = &g_83;
    int32_t *l_262[10] = {&l_62[0][2],&l_62[0][3],&l_62[0][2],&l_62[0][3],&l_62[0][2],&l_62[0][3],&l_62[0][2],&l_62[0][3],&l_62[0][2],&l_62[0][3]};
    int16_t l_263 = 0x10CCL;
    uint32_t l_264 = 0UL;
    int i, j;
    for (i = 0; i < 9; i++)
        l_51[i] = 0L;
    (*l_261) = (l_62[3][4] = (g_12 == ((*l_260) = ((*l_258) ^= (safe_add_func_uint32_t_u_u(func_35(func_37((safe_lshift_func_int16_t_s_u((func_42((0UL >= (l_51[8] = (safe_unary_minus_func_int64_t_s(((--g_48) , g_12))))), g_12, ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((0x68L != (safe_sub_func_uint64_t_u_u(((p_31 && (safe_div_func_uint16_t_u_u(l_62[1][1], (p_32 | ((++g_63[8]) && ((g_76 = ((*l_73) &= (safe_add_func_int8_t_s_s((((*l_70) = (safe_add_func_int32_t_s_s(l_62[0][0], 0x278539AEL))) , g_63[8]), 0x39L)))) >= l_77)))))) & 0x28BF2FEA27655505LL), p_32))) , p_32) || l_77), g_12)), g_12)), g_12)) , l_62[1][1]), g_12) && g_110[0]), l_62[3][3])), l_62[2][4])), l_62[0][2]))))));
    ++l_264;
    return p_32;
}
static uint32_t func_35(int8_t p_36)
{
    int64_t *l_256 = &g_183;
    int64_t **l_255[9];
    int64_t ***l_257 = &l_255[7];
    int i;
    for (i = 0; i < 9; i++)
        l_255[i] = &l_256;
    (*l_257) = l_255[7];
    return p_36;
}
inline static int8_t func_37(int32_t p_38, uint32_t p_39)
{
    uint64_t l_177[7][4][8] = {{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}},{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}},{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}},{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}},{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}},{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}},{{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL},{0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL,0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{0xC18B0400E0B9DA25LL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0xC18B0400E0B9DA25LL,0x1390277B54E5BA69LL,18446744073709551613UL,0x1390277B54E5BA69LL}}};
    int32_t *l_212 = &g_83;
    const int32_t *l_214 = &g_83;
    int32_t l_244[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_244[i] = (-1L);
    g_83 |= (0x3401L || l_177[2][3][7]);
    for (g_71 = 0; (g_71 <= 3); g_71 += 1)
    {
        uint32_t *l_195[2];
        uint32_t **l_194 = &l_195[0];
        int32_t l_239 = 0x681FB4F1L;
        int i;
        for (i = 0; i < 2; i++)
            l_195[i] = &g_74;
        for (g_74 = 0; (g_74 <= 3); g_74 += 1)
        {
            uint64_t *l_191 = (void*)0;
            uint64_t **l_190 = &l_191;
            int32_t l_210 = 0x3B609C62L;
            for (g_91 = 0; (g_91 <= 3); g_91 += 1)
            {
                int32_t l_249 = 0L;
                int i, j, k;
                if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])
                {
                    uint32_t *l_189[1][1];
                    int32_t *l_211 = &l_210;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_189[i][j] = &g_48;
                    }
                    for (g_147 = 1; (g_147 <= 8); g_147 += 1)
                    {
                        int32_t *l_179[4] = {&g_83,&g_83,&g_83,&g_83};
                        int32_t **l_178 = &l_179[2];
                        int64_t *l_182 = &g_183;
                        uint32_t **l_186 = (void*)0;
                        uint32_t *l_188 = &g_48;
                        uint32_t **l_187[9] = {&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188};
                        int i;
                        (*l_178) = &g_83;
                        if (g_63[(g_74 + 2)])
                            continue;
                        (**l_178) = (g_146[g_71] || ((safe_rshift_func_int8_t_s_u(l_177[(g_71 + 2)][g_91][(g_71 + 3)], (p_39 , ((((*l_182) = 0x54C0D22BE5E263D6LL) < l_177[(g_71 + 2)][g_91][(g_71 + 3)]) , (safe_rshift_func_uint8_t_u_s(((l_189[0][0] = l_179[1]) != ((((void*)0 != l_190) & g_91) , &g_91)), 0)))))) , 0x6DL));
                        (**l_178) &= ((((g_146[3] > p_38) , g_192) == l_194) == (~((((safe_lshift_func_int16_t_s_s((+(safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_38, (l_189[0][0] != (*g_192)))), (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((p_38 | ((g_183 , p_39) > 0L)), 4)) , g_63[8]), l_210)), g_132))))), p_38)) || p_38) , (void*)0) != l_211)));
                    }
                    (*l_211) = 0x740FBDBEL;
                    if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])
                        continue;
                    if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])
                    {
                        int32_t **l_213 = &l_211;
                        (*l_213) = l_212;
                        ((void) sizeof ((l_211 == &g_83) ? 1 : 0), __extension__ ({ if (l_211 == &g_83) ; else __assert_fail ("l_211 == &g_83", "/tmp/tmpusnnar3w.c", 519, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    else
                    {
                        (*l_211) ^= g_146[2];
                    }
                    ((void) sizeof ((l_211 == &l_210 || l_211 == &g_83) ? 1 : 0), __extension__ ({ if (l_211 == &l_210 || l_211 == &g_83) ; else __assert_fail ("l_211 == &l_210 || l_211 == &g_83", "/tmp/tmpusnnar3w.c", 526, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    const int32_t **l_215 = &l_214;
                    uint32_t l_222 = 0x690AA636L;
                    uint32_t l_238 = 0x22127DE2L;
                    int32_t l_240 = (-1L);
                    int32_t l_241 = (-9L);
                    (*l_215) = l_214;
                    for (g_132 = 0; (g_132 >= 20); ++g_132)
                    {
                        int64_t *l_220 = &g_183;
                        int32_t l_221 = 6L;
                        int32_t *l_237 = &l_210;
                        int32_t *l_242 = &l_210;
                        int32_t *l_243 = &l_239;
                        int32_t *l_245 = &l_240;
                        int32_t *l_246 = &l_241;
                        int32_t *l_247 = (void*)0;
                        int32_t *l_248[7] = {&g_83,&g_83,&g_83,&g_83,&g_83,&g_83,&g_83};
                        int i;
                        (*l_212) = (((safe_mod_func_uint32_t_u_u(p_39, (**l_215))) , ((*l_220) = p_39)) < (((l_221 || l_222) != (l_221 & (g_175 , ((((((safe_sub_func_int8_t_s_s(p_38, ((l_239 = ((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((*l_237) &= ((safe_add_func_int32_t_s_s(g_71, g_97)) > g_71)), l_238)) && 0x7661964D51499A76LL), 1)), g_71)) | l_239), (**l_215))), g_132)) ^ p_39)) == (*l_212)))) , 0x67L) <= p_39) > g_175) < g_74) , 0xDBE4L)))) | (**l_215)));
                        g_83 &= 0xD957ECFBL;
                        g_252++;
                    }
                }
            }
            return p_39;
        }
    }
    return g_110[0];
}
inline static int16_t func_42(int16_t p_43, uint8_t p_44, const int32_t p_45, uint32_t p_46)
{
    int32_t *l_88 = &g_83;
    int32_t *l_89 = &g_83;
    const int32_t *l_104 = &g_83;
    const int32_t **l_103 = &l_104;
    const int32_t ***l_102 = &l_103;
    int32_t l_143 = 0xA2875F20L;
    return (*l_104);
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_12;
    csmith_sink_ = g_48;
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_63[i];
    }
    csmith_sink_ = g_71;
    csmith_sink_ = g_74;
    csmith_sink_ = g_76;
    csmith_sink_ = g_83;
    csmith_sink_ = g_91;
    csmith_sink_ = g_97;
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_110[i];
    }
    csmith_sink_ = g_132;
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_146[i];
    }
    csmith_sink_ = g_147;
    csmith_sink_ = g_175;
    csmith_sink_ = g_183;
    csmith_sink_ = g_250;
    csmith_sink_ = g_251;
    csmith_sink_ = g_252;
    csmith_sink_ = g_259;
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_292[i];
    }
    csmith_sink_ = g_477;
    csmith_sink_ = g_480;
    csmith_sink_ = g_481;
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_494[i];
    }
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_509[i];
    }
    csmith_sink_ = g_514;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            csmith_sink_ = g_580[i][j];
        }
    }
    csmith_sink_ = g_618;
    csmith_sink_ = g_629;
    csmith_sink_ = g_686;
    csmith_sink_ = g_698;
    csmith_sink_ = g_750;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_791[i];
    }
    csmith_sink_ = g_846;
    csmith_sink_ = g_870;
    csmith_sink_ = g_927;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_930[i];
    }
    csmith_sink_ = g_938;
    platform_main_end(0,0);
    return 0;
}
