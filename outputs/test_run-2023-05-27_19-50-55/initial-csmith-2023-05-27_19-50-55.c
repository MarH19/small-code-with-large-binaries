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
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t f0;
};
#pragma pack(pop)
static int32_t g_2 = 0x90DA1152L;
static int32_t g_5 = 0xED23B618L;
static int32_t g_9[6][1][2] = {{{8L,0x08CCCDDDL}},{{0x08CCCDDDL,8L}},{{0x08CCCDDDL,0x08CCCDDDL}},{{8L,0x08CCCDDDL}},{{0x08CCCDDDL,8L}},{{0x08CCCDDDL,0x08CCCDDDL}}};
static int32_t g_12 = 5L;
static struct S0 g_15 = {7L};
static uint8_t g_54 = 0x39L;
static int16_t g_56[10] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
static int16_t g_65 = 0xBD5FL;
static int16_t *g_67 = &g_65;
static uint32_t g_84 = 1UL;
static uint8_t g_93 = 255UL;
static int8_t g_102 = 0xDDL;
static uint16_t g_104 = 65527UL;
static uint32_t g_122[4] = {0xAC9F79E4L,0xAC9F79E4L,0xAC9F79E4L,0xAC9F79E4L};
static uint8_t g_142 = 0x43L;
static struct S0 g_146[5][7][1] = {{{{0x6A910B13L}},{{0xB8760324L}},{{0x6A910B13L}},{{0x0BD6DA29L}},{{1L}},{{1L}},{{0x0BD6DA29L}}},{{{0x6A910B13L}},{{0xB8760324L}},{{0x6A910B13L}},{{0x0BD6DA29L}},{{1L}},{{1L}},{{0x0BD6DA29L}}},{{{0x6A910B13L}},{{0xB8760324L}},{{0x6A910B13L}},{{0x0BD6DA29L}},{{1L}},{{1L}},{{0xB8760324L}}},{{{0x0BD6DA29L}},{{0x0F57B567L}},{{0x0BD6DA29L}},{{0xB8760324L}},{{0x75C33281L}},{{0x75C33281L}},{{0xB8760324L}}},{{{0x0BD6DA29L}},{{0x0F57B567L}},{{0x0BD6DA29L}},{{0xB8760324L}},{{0x75C33281L}},{{0x75C33281L}},{{0xB8760324L}}}};
static int32_t *g_169 = &g_146[2][2][0].f0;
static uint32_t *g_175[1] = {(void*)0};
static uint32_t **g_174 = &g_175[0];
static int16_t **g_198[1] = {&g_67};
static int16_t ***g_197 = &g_198[0];
static int16_t * const *g_246 = (void*)0;
static int16_t * const **g_245[1][10][6] = {{{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246}}};
static uint32_t g_251 = 0xC5A20AEDL;
static int32_t **g_258 = &g_169;
static int32_t ***g_257 = &g_258;
static uint16_t *g_268[10][1][9] = {{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,(void*)0,&g_104,&g_104,(void*)0,&g_104,&g_104,&g_104}},{{&g_104,&g_104,(void*)0,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,(void*)0,&g_104,&g_104,(void*)0,&g_104,&g_104,&g_104}},{{&g_104,&g_104,(void*)0,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,(void*)0,&g_104,&g_104,(void*)0,&g_104,&g_104,&g_104}},{{&g_104,&g_104,(void*)0,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}}};
static uint16_t **g_267 = &g_268[3][0][8];
static int8_t *g_317 = &g_102;
static int8_t **g_316 = &g_317;
static int8_t ***g_372 = &g_316;
static int32_t ****g_386[10] = {&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257};
static int32_t *****g_385[8][9][3] = {{{&g_386[5],(void*)0,&g_386[8]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[5],&g_386[3]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[8]},{&g_386[8],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]}},{{&g_386[5],&g_386[8],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[3],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[3],&g_386[8]},{&g_386[5],&g_386[5],&g_386[5]}},{{&g_386[5],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[8]},{&g_386[8],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[8],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[5],&g_386[5]}},{{&g_386[5],&g_386[5],&g_386[5]},{&g_386[3],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[3],&g_386[8]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[8]},{&g_386[8],&g_386[5],&g_386[5]}},{{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[8],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[3],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[3],&g_386[8]}},{{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[8]},{&g_386[8],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[8],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]}},{{(void*)0,&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[3],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{(void*)0,&g_386[3],&g_386[8]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],(void*)0,&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[8]}},{{&g_386[8],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[8],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]},{&g_386[5],&g_386[3],&g_386[3]},{&g_386[5],&g_386[8],&g_386[5]},{&g_386[8],&g_386[5],&g_386[5]},{&g_386[5],&g_386[5],&g_386[5]}}};
static struct S0 **g_389 = (void*)0;
static uint8_t *g_397[7][6][1] = {{{&g_93},{&g_93},{&g_93},{(void*)0},{&g_142},{(void*)0}},{{(void*)0},{&g_93},{(void*)0},{(void*)0},{&g_93},{(void*)0}},{{(void*)0},{&g_142},{(void*)0},{&g_93},{&g_93},{&g_93}},{{&g_93},{&g_93},{(void*)0},{&g_142},{(void*)0},{(void*)0}},{{&g_93},{(void*)0},{(void*)0},{&g_93},{(void*)0},{(void*)0}},{{&g_142},{(void*)0},{&g_93},{&g_93},{&g_93},{&g_93}},{{&g_93},{(void*)0},{&g_142},{(void*)0},{(void*)0},{&g_93}}};
static uint8_t **g_396 = &g_397[2][4][0];
static const int32_t g_443 = 0x944CA479L;
static int8_t ** const *g_452 = &g_316;
static int8_t ** const **g_451 = &g_452;
static int8_t ** const ***g_450[6] = {&g_451,&g_451,&g_451,&g_451,&g_451,&g_451};
static uint16_t g_480 = 1UL;
static int16_t g_503 = 0L;
static struct S0 ***g_561 = (void*)0;
static uint32_t g_607 = 0x8271C945L;
static uint8_t *g_786 = (void*)0;
static int16_t func_1(void);
static struct S0 ** func_17(struct S0 * const p_18, uint32_t p_19, struct S0 * p_20, uint8_t p_21, struct S0 * p_22);
static uint8_t func_35(int32_t p_36, uint32_t p_37);
static struct S0 * func_38(uint16_t p_39, struct S0 * const * p_40);
static int32_t func_43(int32_t p_44, uint32_t p_45, int32_t p_46);
static uint16_t func_57(struct S0 * p_58, uint32_t p_59);
static struct S0 * func_60(int16_t p_61, int16_t * p_62, int16_t * const p_63);
static uint8_t ** func_69(struct S0 ** p_70, int32_t p_71, int32_t p_72, uint8_t p_73, uint32_t p_74);
static struct S0 ** func_75(int32_t p_76, uint16_t p_77, int8_t p_78, uint8_t * p_79);
static uint8_t * func_86(uint16_t p_87, struct S0 * p_88, const uint8_t * const p_89);
static int16_t func_1(void)
{
    int32_t l_34[7][6][5] = {{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),0xBF7C295AL,1L,1L,1L},{(-6L),(-6L),1L,(-6L),(-6L)},{1L,1L,1L,0xBF7C295AL,(-1L)},{(-6L),0xA3A7221EL,0xA3A7221EL,(-6L),0xA3A7221EL}},{{(-1L),1L,(-1L),1L,(-1L)},{0xA3A7221EL,(-6L),0xA3A7221EL,0xA3A7221EL,(-6L)},{(-1L),0xBF7C295AL,1L,1L,1L},{(-6L),(-6L),1L,(-6L),(-6L)},{1L,1L,1L,0xBF7C295AL,(-1L)},{(-6L),0xA3A7221EL,0xA3A7221EL,(-6L),0xA3A7221EL}},{{(-1L),1L,(-1L),1L,(-1L)},{0xA3A7221EL,(-6L),0xA3A7221EL,0xA3A7221EL,(-6L)},{(-1L),0xBF7C295AL,1L,1L,1L},{(-6L),(-6L),1L,(-6L),(-6L)},{1L,1L,1L,0xBF7C295AL,(-1L)},{(-6L),0xA3A7221EL,0xA3A7221EL,(-6L),0xA3A7221EL}}};
    int32_t l_66 = 5L;
    int16_t l_399 = 1L;
    struct S0 *l_656[4][1] = {{&g_146[2][2][0]},{&g_146[2][2][0]},{&g_146[2][2][0]},{&g_146[2][2][0]}};
    uint8_t l_683 = 0x8FL;
    int32_t ****l_684 = &g_257;
    uint16_t l_695[5][4] = {{65530UL,65535UL,65535UL,65530UL},{1UL,0x73D1L,65535UL,0UL},{65530UL,65526UL,1UL,65526UL},{65526UL,65535UL,1UL,65526UL},{1UL,65526UL,0UL,0UL}};
    uint8_t l_705[7][7] = {{0xA9L,0x88L,0xA5L,0x88L,0xA9L,0x3AL,0xA9L},{0UL,0x64L,0x64L,0UL,0x64L,0x64L,0UL},{0x84L,0x88L,0x84L,1UL,0xA9L,1UL,0x84L},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xA9L,1UL,0x84L,0x88L,0x84L,1UL,0xA9L},{0x64L,0UL,0x64L,0x64L,0UL,0x64L,0x64L},{0xA9L,0x88L,0xA5L,0x88L,0xA9L,0x3AL,0xA9L}};
    int32_t l_777 = 1L;
    struct S0 l_799[5] = {{1L},{1L},{1L},{1L},{1L}};
    struct S0 l_820 = {-6L};
    int32_t l_821 = 0xEEF8580BL;
    int i, j, k;
    for (g_2 = 24; (g_2 >= (-22)); g_2 = safe_sub_func_int8_t_s_s(g_2, 7))
    {
        uint32_t l_8[10];
        int32_t l_29[3][9] = {{0L,0x3423637BL,0x8F62C4DFL,0x8F62C4DFL,0x3423637BL,0L,0x3423637BL,0x8F62C4DFL,0x8F62C4DFL},{0x0477AE27L,0x0477AE27L,0x6C4779D4L,0x1FCC8AF9L,0x6C4779D4L,0x0477AE27L,0x0477AE27L,0x6C4779D4L,0x1FCC8AF9L},{0xF4CC511EL,0x3423637BL,0xF4CC511EL,0L,0L,0xF4CC511EL,0x3423637BL,0xF4CC511EL,0L}};
        int16_t * const l_68 = (void*)0;
        int8_t l_420 = (-1L);
        struct S0 *l_646[2][1];
        struct S0 **l_655[9][5][5] = {{{&l_646[0][0],(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[1][0]},{&l_646[1][0],(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[0][0],(void*)0,&l_646[0][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}},{{(void*)0,(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0},{&l_646[0][0],&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[1][0],(void*)0,&l_646[0][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0]},{(void*)0,&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0,&l_646[1][0]},{&l_646[0][0],&l_646[0][0],&l_646[1][0],(void*)0,(void*)0},{&l_646[0][0],(void*)0,&l_646[1][0],&l_646[0][0],&l_646[1][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,(void*)0,&l_646[1][0],&l_646[1][0],&l_646[0][0]},{(void*)0,&l_646[0][0],(void*)0,(void*)0,&l_646[1][0]},{&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,(void*)0,(void*)0,&l_646[1][0],&l_646[1][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[1][0]},{&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]},{(void*)0,&l_646[0][0],(void*)0,&l_646[1][0],&l_646[0][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0}},{{&l_646[0][0],&l_646[1][0],(void*)0,(void*)0,&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,&l_646[1][0],&l_646[1][0],(void*)0,(void*)0},{&l_646[1][0],&l_646[0][0],&l_646[1][0],(void*)0,&l_646[1][0]},{(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}},{{&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[0][0],(void*)0,&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0]},{&l_646[1][0],(void*)0,&l_646[1][0],(void*)0,&l_646[0][0]}},{{&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0],(void*)0},{(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0},{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]},{(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]},{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]},{&l_646[1][0],(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,&l_646[0][0],(void*)0,&l_646[1][0],&l_646[1][0]}}};
        const int32_t *l_682 = &g_9[2][0][0];
        int8_t ****l_691[6] = {&g_372,&g_372,&g_372,&g_372,&g_372,&g_372};
        int32_t l_710 = (-4L);
        int16_t ***l_715 = (void*)0;
        int16_t ****l_716[5][1];
        struct S0 * const *l_717 = &l_656[2][0];
        uint16_t *l_724 = &g_104;
        uint16_t *l_729 = &l_695[3][3];
        uint8_t l_733 = 0x58L;
        int32_t l_766 = 0x867B5445L;
        uint32_t **l_819 = &g_175[0];
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_8[i] = 4294967287UL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_646[i][j] = &g_15;
        }
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_716[i][j] = &g_197;
        }
        for (g_5 = (-8); (g_5 == (-4)); ++g_5)
        {
            for (g_9[1][0][0] = 0; g_9[1][0][0] < 10; g_9[1][0][0] += 1)
            {
                l_8[g_9[1][0][0]] = 3UL;
            }
            return g_9[4][0][1];
        }
        for (g_5 = 22; (g_5 < (-25)); g_5 = safe_sub_func_uint8_t_u_u(g_5, 7))
        {
            uint32_t l_52 = 0x54C3DC4DL;
            uint8_t *l_53 = &g_54;
            int16_t *l_55 = &g_56[4];
            int16_t *l_64[10] = {&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65};
            int32_t *l_458 = &l_66;
            struct S0 *l_611 = (void*)0;
            struct S0 **l_610 = &l_611;
            struct S0 *l_612 = &g_15;
            struct S0 ***l_654[2];
            int32_t *****l_685 = &l_684;
            int8_t ****l_692 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_654[i] = &l_610;
            if (g_2)
                break;
            for (g_12 = 0; (g_12 == (-13)); g_12 = safe_sub_func_int8_t_s_s(g_12, 1))
            {
                struct S0 *l_16[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_16[i] = (void*)0;
                g_15 = g_15;
            }
        }
    }
    return l_821;
}
static struct S0 ** func_17(struct S0 * const p_18, uint32_t p_19, struct S0 * p_20, uint8_t p_21, struct S0 * p_22)
{
    int32_t *l_650 = &g_15.f0;
    struct S0 l_651 = {0x140D6DFBL};
    struct S0 *l_653 = &g_15;
    struct S0 **l_652 = &l_653;
    for (p_21 = 14; (p_21 <= 2); p_21--)
    {
        int32_t * const l_649 = &g_15.f0;
        l_650 = l_649;
        (*p_20) = l_651;
    }
    return g_389;
}
static uint8_t func_35(int32_t p_36, uint32_t p_37)
{
    struct S0 l_613 = {0x2B8F4B44L};
    struct S0 *l_614 = &g_146[2][6][0];
    int8_t **l_619 = (void*)0;
    int8_t *l_628[6][7] = {{(void*)0,&g_102,(void*)0,&g_102,&g_102,(void*)0,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,&g_102,&g_102,(void*)0,&g_102,(void*)0,&g_102},{(void*)0,(void*)0,&g_102,&g_102,&g_102,(void*)0,(void*)0},{(void*)0,&g_102,&g_102,&g_102,(void*)0,(void*)0,&g_102},{(void*)0,&g_102,(void*)0,&g_102,&g_102,(void*)0,&g_102}};
    int32_t l_629 = (-3L);
    int32_t l_644 = 0L;
    int32_t *l_645 = &g_146[2][2][0].f0;
    int i, j;
    for (g_251 = 0; g_251 < 1; g_251 += 1)
    {
        g_175[g_251] = &g_84;
    }
    (*l_614) = l_613;
    (*l_645) = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_613.f0 = (((void*)0 == l_619) < l_613.f0)), (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((***g_452) != p_36), (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_629 = (*g_317)), (safe_rshift_func_int16_t_s_s(((4294967295UL < (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((*g_67), ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((-1L), l_644)) & l_644) < p_36), l_644)), 5)), p_36)) != 0UL))), p_37))) & l_644), 10)))), p_36)))), 0UL)))), 0UL));
    return (*l_645);
}
static struct S0 * func_38(uint16_t p_39, struct S0 * const * p_40)
{
    int16_t ***l_461[5][3][3] = {{{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]}},{{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]}},{{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]}},{{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]}},{{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]},{&g_198[0],&g_198[0],&g_198[0]}}};
    int32_t l_466 = 0L;
    struct S0 *l_476 = &g_146[2][2][0];
    int32_t ****l_485 = &g_257;
    uint32_t *l_521 = (void*)0;
    int32_t l_524 = 0xE0D3AE83L;
    const int32_t *l_533 = &g_443;
    const int32_t **l_532 = &l_533;
    const int32_t ***l_531[7][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t ****l_534 = &g_372;
    uint8_t *l_537 = (void*)0;
    uint32_t l_557 = 4294967295UL;
    int i, j, k;
    for (g_84 = 4; (g_84 >= 15); g_84++)
    {
        int16_t ****l_462 = &g_197;
        uint16_t *l_472 = &g_104;
        uint8_t *l_473 = &g_142;
        struct S0 *l_477 = &g_146[0][5][0];
        int32_t ****l_484 = (void*)0;
        int32_t l_488 = (-8L);
        uint8_t l_536 = 255UL;
        struct S0 *** const l_560 = &g_389;
        const int32_t *l_563 = (void*)0;
        if (p_39)
            break;
        (*l_462) = l_461[2][1][0];
    }
    ((void) sizeof ((g_197 == 0 || (g_197 >= &g_198[0] && g_197 <= &g_198[0])) ? 1 : 0), __extension__ ({ if (g_197 == 0 || (g_197 >= &g_198[0] && g_197 <= &g_198[0])) ; else __assert_fail ("g_197 == 0 || (g_197 >= &g_198[0] && g_197 <= &g_198[0])", "/tmp/tmp65g9fhkh.c", 262, __extension__ __PRETTY_FUNCTION__); }));
    return l_476;
}
static int32_t func_43(int32_t p_44, uint32_t p_45, int32_t p_46)
{
    int8_t ****l_422 = &g_372;
    int8_t *****l_421 = &l_422;
    int8_t *****l_423[10];
    int32_t *l_425[6][5] = {{&g_2,&g_2,&g_5,&g_2,&g_15.f0},{&g_9[1][0][0],&g_12,(void*)0,&g_146[2][2][0].f0,&g_15.f0},{&g_15.f0,&g_146[2][2][0].f0,(void*)0,&g_12,&g_9[1][0][0]},{&g_15.f0,&g_12,&g_9[3][0][0],&g_12,&g_15.f0},{&g_9[1][0][0],&g_12,(void*)0,&g_146[2][2][0].f0,&g_15.f0},{&g_15.f0,&g_146[2][2][0].f0,(void*)0,&g_12,&g_9[1][0][0]}};
    struct S0 l_457 = {0L};
    int i, j;
    for (i = 0; i < 10; i++)
        l_423[i] = &l_422;
    l_423[1] = (l_421 = l_421);
    if ((~0x9541L))
    {
        uint16_t l_426 = 0x7039L;
        int8_t *****l_453 = &l_422;
        (**g_257) = l_425[1][2];
        ((void) sizeof ((g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ? 1 : 0), __extension__ ({ if (g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ; else __assert_fail ("g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2", "/tmp/tmp65g9fhkh.c", 291, __extension__ __PRETTY_FUNCTION__); }));
        if ((p_44 = (p_46 && ((*****l_421) = l_426))))
        {
            struct S0 *l_427 = &g_146[1][3][0];
            (*l_427) = g_146[4][6][0];
        }
        else
        {
            struct S0 *l_436 = &g_146[2][2][0];
            int32_t *l_437 = &g_12;
            for (p_44 = (-29); (p_44 > 23); p_44 = safe_add_func_uint32_t_u_u(p_44, 2))
            {
                for (l_426 = 0; (l_426 <= 9); l_426 += 1)
                {
                    uint32_t l_454 = 4294967295UL;
                    for (g_142 = 0; (g_142 <= 0); g_142 += 1)
                    {
                        int16_t **l_430 = (void*)0;
                        int16_t **l_431 = &g_67;
                        struct S0 **l_432 = (void*)0;
                        struct S0 **l_433 = (void*)0;
                        struct S0 *l_435 = &g_146[0][3][0];
                        struct S0 **l_434[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_434[i] = &l_435;
                        l_436 = &g_146[(g_142 + 2)][(g_142 + 3)][g_142];
                        l_437 = ((*g_258) = &p_44);
                        ((void) sizeof ((g_169 == &p_44) ? 1 : 0), __extension__ ({ if (g_169 == &p_44) ; else __assert_fail ("g_169 == &p_44", "/tmp/tmp65g9fhkh.c", 320, __extension__ __PRETTY_FUNCTION__); }));
                        ((void) sizeof ((l_437 == &p_44) ? 1 : 0), __extension__ ({ if (l_437 == &p_44) ; else __assert_fail ("l_437 == &p_44", "/tmp/tmp65g9fhkh.c", 321, __extension__ __PRETTY_FUNCTION__); }));
                        if (g_56[(g_142 + 9)])
                            break;
                        (**g_257) = &p_44;
                    }
                    (*l_436) = (*l_436);
                    if (p_46)
                        break;
                    for (p_46 = 0; (p_46 <= 0); p_46 += 1)
                    {
                        const int32_t *l_442[4];
                        const int32_t **l_441[5][2];
                        const int32_t ***l_440 = &l_441[4][1];
                        const int32_t ***l_444 = (void*)0;
                        const int32_t **l_446[3];
                        const int32_t ***l_445 = &l_446[1];
                        int32_t l_447 = 0xFDA17503L;
                        int32_t l_455 = (-4L);
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_442[i] = &g_443;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_441[i][j] = &l_442[1];
                        }
                        for (i = 0; i < 3; i++)
                            l_446[i] = &l_442[1];
                        l_455 = (safe_rshift_func_uint16_t_u_s((l_447 = ((((*l_445) = ((*l_440) = (void*)0)) == &l_425[5][3]) ^ (0xF0L & (4294967293UL != p_46)))), ((*g_67) = (safe_mul_func_uint16_t_u_u(((g_450[5] != l_453) > (0x00L & (p_44 ^ l_454))), p_46)))));
                    }
                }
            }
            ((void) sizeof ((g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ? 1 : 0), __extension__ ({ if (g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ; else __assert_fail ("g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2", "/tmp/tmp65g9fhkh.c", 357, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_437 == &p_44 || l_437 == &g_12) ? 1 : 0), __extension__ ({ if (l_437 == &p_44 || l_437 == &g_12) ; else __assert_fail ("l_437 == &p_44 || l_437 == &g_12", "/tmp/tmp65g9fhkh.c", 358, __extension__ __PRETTY_FUNCTION__); }));
            (*l_436) = g_15;
            p_44 = p_45;
        }
        ((void) sizeof ((g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ? 1 : 0), __extension__ ({ if (g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ; else __assert_fail ("g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2", "/tmp/tmp65g9fhkh.c", 363, __extension__ __PRETTY_FUNCTION__); }));
        (*g_258) = l_425[0][4];
        ((void) sizeof ((g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ? 1 : 0), __extension__ ({ if (g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ; else __assert_fail ("g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2", "/tmp/tmp65g9fhkh.c", 366, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t l_456 = (-5L);
        (**g_258) = l_456;
        (**g_257) = &p_44;
        ((void) sizeof ((g_169 == &p_44) ? 1 : 0), __extension__ ({ if (g_169 == &p_44) ; else __assert_fail ("g_169 == &p_44", "/tmp/tmp65g9fhkh.c", 374, __extension__ __PRETTY_FUNCTION__); }));
        (***g_257) = l_456;
    }
    ((void) sizeof ((g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ? 1 : 0), __extension__ ({ if (g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2) ; else __assert_fail ("g_169 == &p_44 || g_169 == &g_5 || g_169 == &g_15.f0 || (g_169 >= &g_146[0][0][0].f0 && g_169 <= &g_146[4][6][0].f0) || g_169 == 0 || g_169 == &g_12 || (g_169 >= &g_9[0][0][0] && g_169 <= &g_9[5][0][1]) || g_169 == &g_2", "/tmp/tmp65g9fhkh.c", 378, __extension__ __PRETTY_FUNCTION__); }));
    p_44 = p_44;
    l_457 = l_457;
    return p_46;
}
static uint16_t func_57(struct S0 * p_58, uint32_t p_59)
{
    uint16_t l_402[1][3][10] = {{{0UL,0xD351L,0xD351L,0UL,0UL,0xD351L,0xD351L,0UL,0UL,0xD351L},{0UL,0UL,0xD351L,0xD351L,0UL,0UL,0xD351L,0xD351L,0UL,0UL},{0UL,0xD351L,0xD351L,0UL,0UL,0xD351L,0xD351L,0UL,0UL,0xD351L}}};
    int32_t l_415 = (-7L);
    int32_t l_416 = 1L;
    uint8_t *l_417 = &g_142;
    struct S0 *l_418 = (void*)0;
    struct S0 *l_419[8][5][6] = {{{&g_146[2][2][0],(void*)0,(void*)0,&g_15,&g_146[2][6][0],&g_146[2][2][0]},{&g_146[2][2][0],&g_146[4][0][0],&g_146[4][4][0],&g_146[4][0][0],&g_146[2][2][0],&g_146[4][0][0]},{(void*)0,(void*)0,(void*)0,&g_146[0][4][0],&g_15,&g_15},{(void*)0,&g_146[2][2][0],&g_146[2][2][0],(void*)0,&g_146[2][0][0],(void*)0},{&g_15,&g_146[2][2][0],&g_146[2][2][0],(void*)0,&g_146[2][2][0],&g_146[0][4][0]}},{{(void*)0,&g_146[2][4][0],(void*)0,&g_146[0][4][0],&g_146[2][2][0],(void*)0},{(void*)0,(void*)0,&g_15,&g_146[4][0][0],(void*)0,&g_15},{&g_146[2][2][0],&g_146[4][3][0],(void*)0,&g_15,(void*)0,&g_15},{&g_146[2][2][0],&g_146[0][2][0],(void*)0,&g_146[2][2][0],(void*)0,(void*)0},{(void*)0,&g_15,&g_146[2][2][0],&g_146[4][0][0],&g_15,(void*)0}},{{&g_146[2][0][0],(void*)0,&g_146[2][5][0],&g_15,&g_15,&g_146[2][5][0]},{&g_15,&g_15,&g_146[2][6][0],&g_146[2][2][0],&g_146[2][2][0],(void*)0},{(void*)0,&g_146[2][2][0],&g_15,(void*)0,&g_146[0][4][0],&g_146[2][6][0]},{&g_15,(void*)0,&g_15,(void*)0,&g_15,(void*)0},{(void*)0,(void*)0,&g_146[2][6][0],&g_146[0][2][0],&g_15,&g_146[2][5][0]}},{{&g_146[0][2][0],&g_15,&g_146[2][5][0],&g_146[2][2][0],&g_146[1][4][0],(void*)0},{&g_15,(void*)0,&g_146[2][2][0],(void*)0,&g_15,(void*)0},{&g_15,&g_146[2][2][0],(void*)0,&g_15,(void*)0,&g_15},{&g_146[2][2][0],(void*)0,(void*)0,&g_146[2][2][0],(void*)0,&g_15},{&g_146[0][4][0],(void*)0,&g_15,&g_146[2][0][0],&g_15,(void*)0}},{{&g_146[2][0][0],(void*)0,(void*)0,(void*)0,&g_146[2][0][0],&g_146[0][4][0]},{&g_15,&g_15,&g_146[2][2][0],&g_146[2][4][0],&g_15,(void*)0},{&g_146[2][5][0],&g_15,&g_146[2][2][0],(void*)0,&g_146[2][2][0],&g_146[2][0][0]},{&g_146[2][2][0],&g_146[2][2][0],(void*)0,&g_15,&g_146[2][2][0],&g_146[1][2][0]},{&g_146[2][2][0],&g_146[4][0][0],&g_146[2][2][0],(void*)0,&g_146[2][2][0],(void*)0}},{{&g_146[1][2][0],(void*)0,&g_146[2][2][0],&g_146[2][0][0],&g_146[2][0][0],&g_146[2][6][0]},{(void*)0,&g_146[2][6][0],&g_146[0][4][0],(void*)0,&g_15,&g_146[2][2][0]},{&g_15,&g_146[2][2][0],&g_146[4][0][0],&g_15,(void*)0,(void*)0},{&g_146[2][0][0],&g_15,(void*)0,(void*)0,&g_15,&g_146[2][0][0]},{&g_146[2][2][0],&g_15,(void*)0,&g_146[0][2][0],&g_146[2][0][0],&g_146[2][2][0]}},{{(void*)0,(void*)0,&g_146[2][2][0],&g_146[2][2][0],(void*)0,(void*)0},{(void*)0,&g_146[2][2][0],&g_146[2][2][0],&g_146[0][2][0],(void*)0,&g_15},{&g_146[2][2][0],&g_146[2][0][0],&g_146[2][4][0],(void*)0,&g_146[4][3][0],&g_146[1][4][0]},{&g_146[2][0][0],(void*)0,&g_146[2][0][0],&g_15,&g_146[0][4][0],&g_146[2][2][0]},{&g_15,&g_146[2][2][0],&g_15,(void*)0,&g_15,&g_146[2][4][0]}},{{(void*)0,(void*)0,&g_146[2][2][0],&g_146[2][0][0],&g_146[2][2][0],&g_146[2][0][0]},{&g_146[1][2][0],&g_146[2][2][0],&g_146[2][2][0],(void*)0,&g_146[4][0][0],&g_15},{&g_146[2][2][0],&g_15,&g_146[1][2][0],&g_15,&g_146[2][2][0],&g_15},{&g_146[2][2][0],&g_15,(void*)0,(void*)0,&g_146[2][4][0],&g_146[2][2][0]},{&g_15,&g_15,(void*)0,&g_15,&g_15,&g_146[2][2][0]}}};
    int i, j, k;
    (*g_169) = (safe_add_func_uint8_t_u_u(l_402[0][0][3], (p_59 || (((*l_417) = (safe_sub_func_int32_t_s_s(p_59, (l_416 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_402[0][0][1], (p_59 >= ((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(((p_59 <= ((safe_add_func_int16_t_s_s(0x2825L, (l_415 = ((void*)0 == &g_396)))) < 1L)) ^ l_402[0][0][3]), 4UL)), p_59)) ^ p_59)))), p_59)) != l_402[0][1][9]))))) <= l_402[0][2][5]))));
    g_146[3][4][0] = g_146[2][2][0];
    return l_402[0][2][4];
}
static struct S0 * func_60(int16_t p_61, int16_t * p_62, int16_t * const p_63)
{
    struct S0 *l_81[2];
    uint32_t *l_83 = &g_84;
    int32_t l_85 = 0xC76BF08EL;
    const uint8_t * const l_92 = &g_93;
    uint32_t l_390 = 18446744073709551607UL;
    uint8_t ***l_398[2];
    int i;
    for (i = 0; i < 2; i++)
        l_81[i] = &g_15;
    for (i = 0; i < 2; i++)
        l_398[i] = &g_396;
    g_396 = func_69(func_75((+1L), g_2, ((((*l_83) = ((l_81[0] != l_81[0]) ^ (+0x1CA2AE39L))) && p_61) || l_85), func_86(((l_85 >= (safe_div_func_uint32_t_u_u(l_85, p_61))) && l_85), l_81[0], l_92)), l_85, p_61, p_61, l_390);
    return l_81[0];
}
static uint8_t ** func_69(struct S0 ** p_70, int32_t p_71, int32_t p_72, uint8_t p_73, uint32_t p_74)
{
    int32_t *l_391 = &g_146[2][2][0].f0;
    struct S0 *l_392 = &g_146[1][0][0];
    struct S0 **l_393 = &l_392;
    uint8_t *l_395 = &g_93;
    uint8_t **l_394[5][6][4] = {{{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395}},{{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395}},{{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395}},{{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395}},{{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395},{(void*)0,(void*)0,(void*)0,&l_395},{&l_395,(void*)0,&l_395,&l_395}}};
    int i, j, k;
    (**g_257) = l_391;
    l_392 = l_392;
    (*l_393) = l_392;
    (**g_258) = p_72;
    return g_396;
}
static struct S0 ** func_75(int32_t p_76, uint16_t p_77, int8_t p_78, uint8_t * p_79)
{
    int32_t *l_388[1];
    int i;
    for (i = 0; i < 1; i++)
        l_388[i] = &g_5;
    l_388[0] = l_388[0];
    return g_389;
}
static uint8_t * func_86(uint16_t p_87, struct S0 * p_88, const uint8_t * const p_89)
{
    uint32_t l_125 = 0xDFED4114L;
    struct S0 l_143[1] = {{0x9577EE7EL}};
    int32_t *l_153 = &g_2;
    int16_t **l_172 = &g_67;
    uint8_t l_235 = 0x34L;
    uint32_t l_236 = 18446744073709551615UL;
    int8_t *l_283[4][5] = {{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,(void*)0,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102}};
    int8_t *l_284 = &g_102;
    uint32_t l_287 = 18446744073709551610UL;
    uint32_t l_298[6][2][8] = {{{4294967295UL,0UL,1UL,0UL,0UL,1UL,0UL,4294967295UL},{0x3F4EF0FFL,1UL,1UL,1UL,0xBE4DEC8AL,0x67F97CADL,0UL,4294967290UL}},{{0UL,0x157E574CL,0UL,0xE36DBBD3L,1UL,0x67F97CADL,3UL,0x5BFBD02EL},{1UL,1UL,4294967295UL,1UL,0UL,1UL,0UL,7UL}},{{0x5BFBD02EL,0UL,1UL,0x3750E86CL,4294967295UL,4294967291UL,1UL,3UL},{0UL,1UL,0xE09D7709L,0xB0ADA181L,1UL,0xB0ADA181L,0xE09D7709L,1UL}},{{0x67F97CADL,0x5BFBD02EL,0xE63D993AL,0UL,0x21AC2331L,1UL,1UL,4294967295UL},{0UL,4294967295UL,1UL,4294967290UL,0x67F97CADL,1UL,1UL,0x21AC2331L}},{{0UL,4294967290UL,0xE63D993AL,1UL,0xE36DBBD3L,0x5DB38199L,0xE09D7709L,0x172DE909L},{0xE36DBBD3L,0x5DB38199L,0xE09D7709L,0x172DE909L,0x1D9F5035L,4294967287UL,1UL,1UL}},{{4294967291UL,3UL,1UL,0UL,4294967295UL,4294967295UL,0UL,1UL},{0xBE4DEC8AL,0xBE4DEC8AL,4294967295UL,0x1D9F5035L,4294967295UL,0UL,3UL,0x5DB38199L}}};
    uint16_t *l_327 = &g_104;
    int32_t *l_384 = &l_143[0].f0;
    int i, j, k;
    for (g_93 = 29; (g_93 >= 50); g_93++)
    {
        int8_t *l_99 = (void*)0;
        int8_t *l_100 = (void*)0;
        int8_t *l_101[7];
        uint16_t *l_103 = &g_104;
        struct S0 *l_105[3][7] = {{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15}};
        int32_t l_128 = (-1L);
        int32_t l_140 = 0xCBD99A0AL;
        int32_t l_165[4][10][6] = {{{0x2C33A66AL,0x948D72D2L,(-1L),0xEF6F4DFAL,(-2L),0xEE733D09L},{6L,0xF3C5D46AL,0L,(-3L),(-5L),0x7B992054L},{0x9DADA64CL,(-7L),0x7ADE520EL,0x35583E1BL,1L,1L},{0L,(-7L),(-1L),0x9DADA64CL,(-1L),6L},{0xF6C78DD8L,0x1CAA3E21L,1L,0xD9115465L,0x355718CBL,0x548CD50EL},{0xC7D366BAL,5L,1L,0xDD084137L,0x0ABA6552L,(-5L)},{(-7L),0x8BA31763L,(-7L),(-6L),1L,(-2L)},{1L,0xF6C78DD8L,5L,0L,(-1L),(-7L)},{0L,4L,1L,0xC2CC2217L,0xBC662609L,0xF6C78DD8L},{(-2L),0xCE40C687L,0L,0L,(-1L),0x7B992054L}},{{0x355718CBL,(-7L),0x9DADA64CL,0x0ABA6552L,5L,0L},{7L,0L,0xDD084137L,0x4CA3D13AL,0x9DADA64CL,(-6L)},{5L,0xD9115465L,0x175D022AL,1L,1L,(-1L)},{0x4A3FD71FL,1L,5L,0xEF6F4DFAL,0x8BA31763L,0xEF6F4DFAL},{(-5L),1L,(-5L),0x2C33A66AL,0xF3C5D46AL,0x8D33B60DL},{1L,0x523DBDA4L,1L,0x8BA31763L,0x175D022AL,0L},{0x7DB9AC06L,1L,0xF6C78DD8L,0x8BA31763L,0xCEA876B1L,0x2C33A66AL},{1L,(-3L),(-6L),0x2C33A66AL,0xEE733D09L,(-1L)},{(-5L),(-1L),0x6E956520L,0xEF6F4DFAL,(-5L),(-4L)},{0x4A3FD71FL,0xC2CC2217L,0L,1L,0x6319732EL,0x355718CBL}},{{5L,0xF99661A1L,0x8BA31763L,0x4CA3D13AL,0x93E8F6EEL,0x4A3FD71FL},{7L,0L,1L,0x0ABA6552L,0x0C07BB3EL,(-4L)},{0x355718CBL,0xBC662609L,0xCE40C687L,0L,(-7L),0x10542879L},{(-2L),6L,0xEDAF9C58L,0xC2CC2217L,0x17702E8EL,0x948D72D2L},{0L,1L,(-1L),0L,8L,0x6319732EL},{1L,5L,4L,(-6L),1L,0x0C07BB3EL},{(-7L),6L,1L,0xDD084137L,0L,(-3L)},{0xC7D366BAL,0L,0x8D33B60DL,0xD9115465L,1L,(-7L)},{0xF6C78DD8L,0x7DB9AC06L,(-1L),0x9DADA64CL,0x10542879L,(-10L)},{0L,0x7ADE520EL,0x93E8F6EEL,0x7B992054L,0xDD084137L,0x1BE7324BL}},{{(-5L),4L,0L,5L,(-2L),0xDEF21EC4L},{0x0C07BB3EL,(-1L),1L,6L,6L,1L},{(-9L),(-9L),8L,0x6E956520L,0x7B5E453FL,0xEDAF9C58L},{0x35583E1BL,(-5L),0xF3C5D46AL,5L,0xCE40C687L,8L},{(-6L),0x35583E1BL,0xF3C5D46AL,8L,(-9L),0x35583E1BL},{1L,0x7ADE520EL,1L,0x1CAA3E21L,(-3L),0x6E956520L},{0x1CAA3E21L,(-3L),0x6E956520L,1L,1L,0x6355D27DL},{0x34055586L,0L,(-1L),1L,0xC2CC2217L,(-7L)},{0xC2CC2217L,0x6E956520L,0L,0x0C07BB3EL,(-2L),0x1CAA3E21L},{0xC7D366BAL,0xF3C5D46AL,0xD83A0D72L,0L,(-1L),(-6L)}}};
        int16_t l_166 = 0x5638L;
        uint8_t l_192 = 1UL;
        uint8_t l_211[4][9] = {{0x04L,1UL,255UL,0UL,0x41L,0x41L,0UL,255UL,1UL},{0x41L,5UL,1UL,0xB0L,0x8EL,255UL,0UL,0x9EL,1UL},{9UL,0x04L,0x9EL,1UL,248UL,1UL,0x9EL,0x04L,9UL},{0x8EL,5UL,0xF7L,248UL,0UL,1UL,0xF6L,1UL,0x04L}};
        int16_t ***l_253 = &g_198[0];
        int32_t *l_288 = &g_9[4][0][0];
        uint32_t l_349 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_101[i] = &g_102;
    }
    (*l_384) = (g_12 = (+(p_87 >= ((((*g_169) = 0x366C35C3L) & (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((*l_327) = ((void*)0 == (*l_172))) ^ (~(*l_153))), (safe_lshift_func_uint16_t_u_u(65535UL, 1)))) ^ (*l_153)), (1L | (safe_rshift_func_uint8_t_u_s(((((*g_267) == (*g_267)) >= (*l_153)) <= 0x2CEDL), (*l_153))))))) && (**g_316)))));
    g_385[7][5][0] = g_385[1][7][2];
    (**g_258) = ((!(*p_89)) > 1UL);
    return &g_142;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_56[i], "g_56[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_146[i][j][k].f0, "g_146[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
