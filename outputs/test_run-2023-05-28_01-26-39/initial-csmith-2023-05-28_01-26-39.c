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
   unsigned f0 : 11;
   unsigned f1 : 20;
   unsigned f2 : 6;
   unsigned f3 : 26;
};
#pragma pack(pop)
struct S1 {
   unsigned f0 : 27;
};
#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint32_t f0;
   uint32_t f1;
   struct S0 f2;
   uint8_t f3;
   uint16_t f4;
   int32_t f5;
   struct S1 f6;
   const int32_t f7;
};
#pragma pack(pop)
static int32_t g_5 = 0xB4837182L;
static int32_t **g_30 = (void*)0;
static const int32_t *g_74 = &g_5;
static const int32_t **g_73 = &g_74;
static int32_t g_76 = (-8L);
static int32_t *g_84 = (void*)0;
static int32_t **g_83 = &g_84;
static int32_t g_85 = 0L;
static int32_t g_91 = 0x98E57B79L;
static struct S0 g_106 = {24,302,0,519};
static int32_t g_190 = 1L;
static int16_t g_264 = 0L;
static uint16_t g_269 = 0x3EACL;
static const uint8_t g_326 = 5UL;
static struct S1 g_355 = {11118};
static struct S1 **g_398 = (void*)0;
static struct S1 ***g_397 = &g_398;
static struct S1 ****g_396 = &g_397;
static int16_t g_473 = 0x3EC0L;
static uint16_t g_474 = 0x66E2L;
static struct S1 *g_489 = &g_355;
static struct S2 g_509 = {9UL,0x03B8C538L,{4,316,0,4285},0x04L,65530UL,0x662457B2L,{1187},0xCD0642E4L};
static struct S2 *g_508 = &g_509;
static int8_t g_621 = 0x24L;
static int32_t g_638 = 0x8E35BE2CL;
static uint16_t g_646 = 0x91DAL;
static int32_t g_846 = 0L;
static uint32_t g_857 = 0x37BF34A8L;
static int32_t *g_870 = &g_190;
static int32_t g_927 = 0xC10BF9DDL;
static uint16_t g_955 = 65527UL;
static int32_t func_1(void);
static int32_t * func_8(int32_t * p_9, int32_t ** p_10, int32_t ** p_11, int32_t ** p_12);
static int32_t * func_13(uint32_t p_14, int32_t ** const p_15);
static uint8_t func_18(int16_t p_19, uint32_t p_20, uint32_t p_21, int32_t * p_22, int8_t p_23);
static uint32_t func_24(int32_t ** p_25, int16_t p_26, int32_t p_27, int32_t p_28, uint32_t p_29);
static const uint8_t func_31(int32_t * p_32, uint32_t p_33, int32_t * p_34, int32_t * const * p_35);
static uint32_t func_40(const struct S1 p_41, uint32_t p_42, int32_t * const * p_43, const struct S0 p_44, int32_t ** p_45);
static struct S0 func_48(const uint8_t p_49, int16_t p_50, int32_t * p_51);
static uint16_t func_56(uint32_t p_57, int32_t * const p_58, uint32_t p_59, int8_t p_60, int32_t * p_61);
static const uint8_t func_71(const int32_t ** p_72);
static int32_t func_1(void)
{
    const int32_t **l_2 = (void*)0;
    int32_t *l_4 = (void*)0;
    int32_t **l_3 = &l_4;
    int16_t l_47 = (-10L);
    uint32_t l_504 = 0x69259B8EL;
    struct S1 l_694 = {2980};
    int32_t l_712 = (-8L);
    struct S1 **l_726 = &g_489;
    struct S0 *l_727 = &g_509.f2;
    int32_t l_855 = (-5L);
    int32_t l_905 = 0xF5122942L;
    int32_t l_915 = 0x5E78ADEBL;
    int32_t l_920 = 5L;
    int8_t l_966 = 0xF3L;
    (*l_3) = (void*)0;
    for (g_5 = 17; (g_5 <= (-11)); g_5--)
    {
        const struct S1 l_46 = {8919};
        int32_t **l_384 = &l_4;
        uint16_t l_711 = 0x9E3BL;
        struct S2 **l_713 = &g_508;
        struct S0 *l_728 = &g_106;
        uint32_t l_744 = 0xB111E0D6L;
        int32_t l_795 = (-2L);
        int32_t l_833 = 0L;
        int32_t l_937 = 0x5681CDB2L;
        int32_t l_938 = 0xE12D3C66L;
        struct S1 *l_967 = &l_694;
        (*l_3) = func_8(func_13((safe_mod_func_uint8_t_u_u(func_18(g_5, func_24(g_30, ((func_31(&g_5, ((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((func_40(l_46, l_47, g_30, func_48((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_5, func_56(g_5, (*l_3), g_5, g_5, (*l_3)))), g_264)), g_355.f0, (*l_3)), l_384) | g_473) || g_474), 0xA4L)), l_46.f0)) || g_76), &g_5, &g_84) & l_504) != 0x2121L), l_46.f0, l_47, g_326), g_473, &g_5, g_326), 0x07L)), l_3), &g_84, &g_84, &g_84);
        ((void) sizeof ((l_4 == &g_85) ? 1 : 0), __extension__ ({ if (l_4 == &g_85) ; else __assert_fail ("l_4 == &g_85", "/tmp/tmpk4p4sgy_.c", 129, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_489 == 0) ? 1 : 0), __extension__ ({ if (g_489 == 0) ; else __assert_fail ("g_489 == 0", "/tmp/tmpk4p4sgy_.c", 130, __extension__ __PRETTY_FUNCTION__); }));
        for (g_509.f4 = 2; (g_509.f4 <= 15); g_509.f4 = safe_add_func_uint16_t_u_u(g_509.f4, 6))
        {
            return g_76;
        }
        for (l_47 = 0; (l_47 < 3); l_47 = safe_add_func_uint32_t_u_u(l_47, 5))
        {
            int32_t ***l_710 = &l_384;
            int32_t l_761 = 0xCA7A246BL;
            int32_t l_839 = 0x2EF022C1L;
            int32_t l_862 = (-3L);
            const struct S1 *l_863 = &g_509.f6;
            struct S0 *l_864 = &g_509.f2;
            int32_t *l_880 = &l_855;
            int32_t *l_881 = &g_846;
            int32_t *l_882 = &g_846;
            int32_t *l_883 = (void*)0;
            int32_t *l_884 = &l_761;
            int32_t *l_885 = &g_638;
            int32_t *l_886 = &l_833;
            int32_t *l_887 = &g_85;
            int32_t *l_888 = (void*)0;
            int32_t *l_889 = &l_761;
            int32_t *l_890 = &g_638;
            int32_t *l_891 = &g_76;
            int32_t *l_892 = (void*)0;
            int32_t *l_893 = &l_761;
            int32_t *l_894 = &l_761;
            int32_t *l_895 = (void*)0;
            int32_t *l_896 = (void*)0;
            int32_t *l_897 = &l_795;
            int32_t *l_898 = &l_862;
            int32_t *l_899 = &l_795;
            int32_t *l_900 = &l_833;
            int32_t *l_901 = &g_846;
            int32_t *l_902 = (void*)0;
            int32_t *l_903 = &l_855;
            int32_t *l_904 = (void*)0;
            int32_t *l_906 = (void*)0;
            int32_t *l_907 = &l_855;
            int32_t *l_908 = &l_905;
            int32_t *l_909 = &g_76;
            int32_t *l_910 = (void*)0;
            int32_t *l_911 = (void*)0;
            int32_t *l_912 = &l_905;
            int32_t *l_913 = (void*)0;
            int32_t *l_914 = (void*)0;
            int32_t *l_916 = (void*)0;
            int32_t *l_917 = &g_190;
            int32_t *l_918 = &l_915;
            int32_t *l_919 = &l_839;
            int32_t *l_921 = &g_846;
            int32_t *l_922 = (void*)0;
            int32_t *l_923 = &g_85;
            int32_t *l_924 = (void*)0;
            int32_t *l_925 = &g_509.f5;
            int32_t *l_926 = &l_833;
            int32_t *l_928 = &l_905;
            int32_t *l_929 = &l_862;
            int32_t *l_930 = (void*)0;
            int32_t *l_931 = &l_920;
            int32_t *l_932 = &g_509.f5;
            int32_t *l_933 = &l_905;
            int32_t *l_934 = (void*)0;
            int32_t *l_935 = &g_509.f5;
            int32_t *l_936 = &l_855;
            int32_t *l_939 = &l_862;
            int32_t *l_940 = (void*)0;
            int32_t *l_941 = &l_761;
            int32_t *l_942 = (void*)0;
            int32_t *l_943 = &g_846;
            int32_t *l_944 = &g_76;
            int32_t *l_945 = &l_937;
            int32_t *l_946 = &l_761;
            int32_t *l_947 = &g_91;
            int32_t *l_948 = (void*)0;
            int32_t *l_949 = &l_795;
            int32_t *l_950 = &g_509.f5;
            int32_t *l_951 = &l_795;
            int32_t *l_952 = &g_85;
            int32_t *l_953 = &l_915;
            int32_t *l_954 = &l_915;
        }
        (*l_967) = l_46;
    }
    ((void) sizeof ((l_4 == &g_85 || l_4 == 0) ? 1 : 0), __extension__ ({ if (l_4 == &g_85 || l_4 == 0) ; else __assert_fail ("l_4 == &g_85 || l_4 == 0", "/tmp/tmpk4p4sgy_.c", 216, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_489 == 0 || g_489 == &g_355) ? 1 : 0), __extension__ ({ if (g_489 == 0 || g_489 == &g_355) ; else __assert_fail ("g_489 == 0 || g_489 == &g_355", "/tmp/tmpk4p4sgy_.c", 218, __extension__ __PRETTY_FUNCTION__); }));
    for (g_638 = 0; (g_638 < (-12)); g_638--)
    {
        uint8_t l_970 = 1UL;
        (*g_870) = l_970;
        (*g_870) |= (-1L);
    }
    return g_955;
}
static int32_t * func_8(int32_t * p_9, int32_t ** p_10, int32_t ** p_11, int32_t ** p_12)
{
    int32_t *l_685 = &g_85;
    return l_685;
}
static int32_t * func_13(uint32_t p_14, int32_t ** const p_15)
{
    struct S2 *l_522 = &g_509;
    struct S1 * const * const **l_525 = (void*)0;
    int32_t *l_526 = (void*)0;
    int32_t *l_527 = &g_509.f5;
    int32_t *l_528 = &g_76;
    int32_t *l_529 = &g_190;
    int32_t *l_530 = &g_91;
    int32_t *l_531 = &g_509.f5;
    int32_t *l_532 = (void*)0;
    int32_t *l_533 = (void*)0;
    int32_t *l_534 = &g_85;
    int32_t *l_535 = (void*)0;
    int32_t l_536 = (-9L);
    int32_t *l_537 = &g_76;
    int32_t l_538 = 0x049AD811L;
    int32_t *l_539 = (void*)0;
    int32_t *l_540 = (void*)0;
    int32_t l_541 = 5L;
    int32_t l_542 = 0x61DBAFE0L;
    int32_t *l_543 = (void*)0;
    int32_t *l_544 = (void*)0;
    int32_t l_545 = (-1L);
    int32_t *l_546 = &g_509.f5;
    int32_t *l_547 = &g_91;
    int32_t *l_548 = &l_536;
    int32_t *l_549 = (void*)0;
    int32_t *l_550 = (void*)0;
    int32_t *l_551 = (void*)0;
    int32_t *l_552 = (void*)0;
    int32_t *l_553 = &l_538;
    int32_t *l_554 = (void*)0;
    int32_t *l_555 = &g_190;
    int32_t *l_556 = &g_76;
    int32_t *l_557 = &g_190;
    int32_t *l_558 = &g_509.f5;
    int32_t *l_559 = &l_536;
    int32_t *l_560 = &l_545;
    int32_t *l_561 = &l_545;
    int32_t l_562 = 6L;
    int32_t *l_563 = &g_190;
    int32_t *l_564 = &l_542;
    int32_t *l_565 = &l_542;
    int32_t *l_566 = (void*)0;
    int32_t *l_567 = &g_76;
    int32_t *l_568 = (void*)0;
    int32_t *l_569 = &l_541;
    int32_t *l_570 = &g_91;
    int32_t *l_571 = (void*)0;
    int32_t *l_572 = &g_509.f5;
    int32_t *l_573 = &g_85;
    int32_t *l_574 = &l_545;
    int32_t *l_575 = &g_85;
    int32_t *l_576 = (void*)0;
    int32_t *l_577 = (void*)0;
    int32_t l_578 = (-1L);
    int32_t *l_579 = &l_538;
    int32_t *l_580 = &l_562;
    int32_t l_581 = 1L;
    int32_t l_582 = 0x9036414AL;
    int32_t *l_583 = &g_85;
    int32_t *l_584 = &l_542;
    int32_t *l_585 = &g_85;
    int32_t l_586 = 0L;
    int32_t *l_587 = (void*)0;
    int32_t *l_588 = &g_76;
    int32_t *l_589 = &l_542;
    int32_t *l_590 = &g_91;
    int32_t l_591 = 1L;
    int32_t *l_592 = &l_581;
    int32_t l_593 = 0L;
    int32_t *l_594 = (void*)0;
    int32_t *l_595 = &l_591;
    int32_t l_596 = 0x3A0CFA0CL;
    int32_t l_597 = 0x80D7D409L;
    int32_t *l_598 = &l_586;
    int32_t *l_599 = &l_538;
    int32_t l_600 = 0x9A014F11L;
    int32_t *l_601 = &l_600;
    int32_t *l_602 = &l_562;
    int32_t *l_603 = &l_562;
    int32_t *l_604 = &l_597;
    int32_t *l_605 = (void*)0;
    int32_t *l_606 = &l_597;
    int32_t *l_607 = (void*)0;
    int32_t *l_608 = (void*)0;
    int32_t *l_609 = &g_85;
    int32_t *l_610 = &g_190;
    int32_t *l_611 = &l_581;
    int32_t *l_612 = &l_600;
    int32_t *l_613 = &g_509.f5;
    int32_t *l_614 = &l_562;
    int32_t *l_615 = &l_593;
    int32_t *l_616 = &l_581;
    int32_t *l_617 = (void*)0;
    int32_t *l_618 = &l_538;
    int32_t *l_619 = &l_542;
    int32_t *l_620 = &g_91;
    int32_t *l_622 = &g_509.f5;
    int32_t *l_623 = &l_593;
    int32_t *l_624 = &l_600;
    int32_t *l_625 = &l_586;
    int32_t l_626 = 0x0D92E2E4L;
    int32_t *l_627 = &l_586;
    int32_t *l_628 = &l_626;
    int32_t *l_629 = &l_538;
    int32_t *l_630 = &l_597;
    int32_t l_631 = 0xBC4FCC52L;
    int32_t *l_632 = &l_591;
    int32_t *l_633 = &l_542;
    int32_t *l_634 = &l_582;
    int32_t *l_635 = &l_538;
    int32_t *l_636 = &g_85;
    int32_t *l_637 = &g_76;
    int32_t *l_639 = &g_85;
    int32_t *l_640 = &l_591;
    int32_t *l_641 = &l_536;
    int32_t *l_642 = (void*)0;
    int32_t *l_643 = &g_638;
    int32_t *l_644 = (void*)0;
    int32_t l_645 = (-4L);
    uint32_t l_660 = 0xF8BFF30CL;
    int32_t *l_681 = (void*)0;
    uint32_t l_682 = 0xCD41C993L;
    (*l_527) = ((-1L) && (((**g_73) == ((-9L) || ((g_509.f1 <= ((safe_rshift_func_uint16_t_u_s((&g_509 == (void*)0), 6)) >= (((l_522 == l_522) != (safe_lshift_func_int16_t_s_u((&g_397 != l_525), g_509.f7))) <= p_14))) >= g_106.f3))) || 4294967295UL));
    ++g_646;
    for (g_509.f3 = 0; (g_509.f3 < 4); g_509.f3 = safe_add_func_uint32_t_u_u(g_509.f3, 2))
    {
        int32_t *l_653 = &l_591;
        struct S1 *l_669 = &g_355;
        int32_t * const **l_672 = (void*)0;
        struct S1 l_676 = {9458};
        struct S1 ***l_677 = (void*)0;
        if (((safe_sub_func_int8_t_s_s((g_474 | ((l_653 != (void*)0) == 8UL)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((l_660 >= (safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((l_669 == l_669), (safe_rshift_func_int8_t_s_s((l_672 != (void*)0), 3)))) || 1L), 0x38993056L)) == 1UL), (*l_639))) < (-1L)), g_509.f1))), 6)) | g_509.f6.f0), (*l_653))), 10)))) >= 0xED059261L))
        {
            uint8_t l_673 = 0xEAL;
            ++l_673;
            (*l_669) = l_676;
        }
        else
        {
            (*l_573) &= ((p_14 > ((-1L) || ((&g_84 != &g_74) != (l_677 != l_677)))) >= ((g_474 & (&g_73 == (void*)0)) <= 4294967286UL));
        }
        for (g_621 = 0; (g_621 < 19); g_621 = safe_add_func_int32_t_s_s(g_621, 2))
        {
            int32_t *l_680 = &l_593;
            return l_681;
        }
        return &g_638;
    }
    l_682++;
    return &g_5;
}
static uint8_t func_18(int16_t p_19, uint32_t p_20, uint32_t p_21, int32_t * p_22, int8_t p_23)
{
    uint16_t l_513 = 65526UL;
    struct S2 **l_514 = (void*)0;
    int32_t l_517 = 0L;
    int32_t *l_518 = (void*)0;
    int32_t *l_519 = &g_190;
    for (g_76 = 0; (g_76 <= 29); g_76++)
    {
        struct S2 **l_510 = (void*)0;
        struct S2 **l_511 = &g_508;
        int32_t l_512 = 7L;
        (*l_511) = g_508;
        l_513 = l_512;
    }
    l_517 = ((l_514 != l_514) > (safe_lshift_func_uint16_t_u_s(g_76, 10)));
    (*l_519) = 1L;
    return g_264;
}
static uint32_t func_24(int32_t ** p_25, int16_t p_26, int32_t p_27, int32_t p_28, uint32_t p_29)
{
    int32_t *l_505 = &g_190;
    (*l_505) = 0x6697B58EL;
    return g_5;
}
static const uint8_t func_31(int32_t * p_32, uint32_t p_33, int32_t * p_34, int32_t * const * p_35)
{
    struct S1 *l_496 = &g_355;
    int32_t l_501 = 0xF62F70D8L;
    int32_t *l_502 = &g_85;
    const int8_t l_503 = 0L;
    p_34 = (*p_35);
    ((void) sizeof ((p_34 == 0) ? 1 : 0), __extension__ ({ if (p_34 == 0) ; else __assert_fail ("p_34 == 0", "/tmp/tmpk4p4sgy_.c", 462, __extension__ __PRETTY_FUNCTION__); }));
    l_501 = (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_269 == (safe_add_func_uint8_t_u_u((g_106.f3 != 0xC1789064L), ((0x99416B48L ^ (l_496 == l_496)) && p_33)))), (safe_div_func_uint8_t_u_u((0L || (safe_lshift_func_int16_t_s_u(p_33, 3))), l_501)))), l_501));
    l_502 = (*p_35);
    ((void) sizeof ((l_502 == 0) ? 1 : 0), __extension__ ({ if (l_502 == 0) ; else __assert_fail ("l_502 == 0", "/tmp/tmpk4p4sgy_.c", 466, __extension__ __PRETTY_FUNCTION__); }));
    return l_503;
}
static uint32_t func_40(const struct S1 p_41, uint32_t p_42, int32_t * const * p_43, const struct S0 p_44, int32_t ** p_45)
{
    uint32_t l_395 = 0xA9EEEF5EL;
    struct S1 ****l_477 = &g_397;
    int32_t l_487 = 0x868B9053L;
    struct S1 *l_488 = (void*)0;
    if (((((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(1L, (((safe_div_func_int8_t_s_s((&p_41 == &g_355), l_395)) == (((g_269 ^ ((((void*)0 == g_396) != ((*g_73) != (*g_73))) && g_91)) == 0xCAB2A87EL) <= 4294967289UL)) < 0xDBL))) || p_42), l_395)), p_42)) != 4294967295UL) & (-3L)) < (**g_73)))
    {
        uint16_t l_455 = 0UL;
        uint8_t l_458 = 255UL;
        int32_t l_463 = 0L;
        int32_t l_468 = 1L;
        for (g_76 = (-3); (g_76 < (-3)); g_76 = safe_add_func_int8_t_s_s(g_76, 2))
        {
            int8_t l_407 = (-1L);
            int32_t l_413 = 0xFC97EF01L;
            int32_t *l_461 = (void*)0;
            int32_t *l_462 = &g_190;
            int32_t *l_464 = &l_463;
            int32_t *l_465 = (void*)0;
            int32_t *l_466 = &g_85;
            int32_t *l_467 = &g_190;
            int32_t *l_469 = &g_91;
            int32_t *l_470 = &g_91;
            int32_t *l_471 = &g_190;
            int32_t *l_472 = &g_190;
            for (l_395 = 0; (l_395 > 4); l_395 = safe_add_func_uint8_t_u_u(l_395, 4))
            {
                int32_t *l_403 = &g_85;
                int32_t *l_404 = (void*)0;
                int32_t *l_405 = &g_85;
                int32_t *l_406 = (void*)0;
                int32_t *l_408 = &g_91;
                int32_t *l_409 = (void*)0;
                int32_t *l_410 = (void*)0;
                int32_t *l_411 = &g_190;
                int32_t *l_412 = &g_91;
                int32_t *l_414 = &l_413;
                int32_t *l_415 = &g_190;
                int32_t *l_416 = &l_413;
                int32_t *l_417 = (void*)0;
                int32_t *l_418 = &g_190;
                int32_t *l_419 = &l_413;
                int32_t *l_420 = &g_190;
                int32_t *l_421 = &g_91;
                int32_t *l_422 = &g_190;
                int32_t *l_423 = &g_91;
                int32_t *l_424 = &g_190;
                int32_t *l_425 = &l_413;
                int32_t *l_426 = &l_413;
                int32_t *l_427 = &g_190;
                int32_t *l_428 = &l_413;
                int32_t *l_429 = &l_413;
                int32_t *l_430 = &l_413;
                int32_t *l_431 = &g_190;
                int32_t *l_432 = &g_190;
                int32_t *l_433 = &g_91;
                int32_t *l_434 = &l_413;
                int32_t *l_435 = &l_413;
                int32_t *l_436 = (void*)0;
                int32_t *l_437 = (void*)0;
                int32_t *l_438 = &g_85;
                int32_t *l_439 = &g_91;
                int32_t *l_440 = &g_85;
                int32_t *l_441 = (void*)0;
                int32_t *l_442 = (void*)0;
                int32_t *l_443 = (void*)0;
                int32_t *l_444 = (void*)0;
                int32_t *l_445 = &g_85;
                int32_t *l_446 = (void*)0;
                int32_t *l_447 = &g_85;
                int32_t *l_448 = &g_85;
                int32_t *l_449 = &g_91;
                int32_t *l_450 = &g_190;
                int32_t *l_451 = &g_190;
                int32_t *l_452 = &g_85;
                int32_t *l_453 = &g_85;
                int32_t *l_454 = (void*)0;
                l_455--;
                l_458++;
            }
            g_474--;
            (*l_470) ^= (&g_397 == l_477);
        }
    }
    else
    {
        const struct S1 *l_479 = &g_355;
        const struct S1 **l_478 = &l_479;
        const uint16_t l_484 = 1UL;
        int32_t *l_485 = &g_190;
        int32_t ***l_486 = (void*)0;
        (*l_478) = &p_41;
        ((void) sizeof ((l_479 == &p_41) ? 1 : 0), __extension__ ({ if (l_479 == &p_41) ; else __assert_fail ("l_479 == &p_41", "/tmp/tmpk4p4sgy_.c", 570, __extension__ __PRETTY_FUNCTION__); }));
        (*l_485) &= (((0x7DD3L && ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((void*)0 == &p_41), l_484)), ((0UL >= ((&p_44 == &g_106) & l_484)) > p_44.f3))) < (*g_74))) < 6L) || p_44.f0);
        l_487 ^= (&g_30 == l_486);
    }
    g_489 = l_488;
    ((void) sizeof ((g_489 == 0) ? 1 : 0), __extension__ ({ if (g_489 == 0) ; else __assert_fail ("g_489 == 0", "/tmp/tmpk4p4sgy_.c", 576, __extension__ __PRETTY_FUNCTION__); }));
    (*p_45) = &l_487;
    return g_106.f2;
}
static struct S0 func_48(const uint8_t p_49, int16_t p_50, int32_t * p_51)
{
    struct S1 *l_380 = &g_355;
    struct S1 **l_379 = &l_380;
    struct S1 ** const *l_378 = &l_379;
    struct S0 l_382 = {11,115,7,2527};
    struct S0 *l_383 = &g_106;
    for (g_264 = 0; (g_264 != (-11)); g_264--)
    {
        for (g_76 = (-18); (g_76 >= 25); g_76 = safe_add_func_int8_t_s_s(g_76, 8))
        {
            struct S1 ** const **l_381 = &l_378;
            (*l_381) = l_378;
        }
    }
    (*l_383) = l_382;
    return (*l_383);
}
static uint16_t func_56(uint32_t p_57, int32_t * const p_58, uint32_t p_59, int8_t p_60, int32_t * p_61)
{
    uint8_t l_68 = 0xFAL;
    struct S1 * const l_366 = &g_355;
    struct S1 * const *l_365 = &l_366;
    int32_t l_373 = 0x4CAD2613L;
    for (p_59 = 5; (p_59 < 44); p_59 = safe_add_func_uint32_t_u_u(p_59, 1))
    {
        uint8_t l_369 = 0UL;
        int32_t *l_370 = &g_85;
        (*l_370) = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_68 <= 249UL), (safe_add_func_uint32_t_u_u(0x75F98A97L, (func_71(g_73) ^ ((((safe_unary_minus_func_uint32_t_u(((void*)0 == l_365))) ^ 0xA7F5FDC5L) > (safe_mod_func_int16_t_s_s(g_264, l_68))) != 0UL)))))) & l_369), 2));
    }
    for (g_76 = (-3); (g_76 > 24); g_76 = safe_add_func_uint16_t_u_u(g_76, 4))
    {
        l_373 = l_68;
        return g_190;
    }
    return g_85;
}
static const uint8_t func_71(const int32_t ** p_72)
{
    int32_t *l_75 = &g_76;
    int16_t l_149 = (-1L);
    int32_t l_233 = 0x8925B6B4L;
    int32_t l_260 = 0x1E56C3BAL;
    (*l_75) &= ((void*)0 != &g_74);
    if ((safe_sub_func_int16_t_s_s((*l_75), (!0x38D6L))))
    {
        int32_t l_105 = (-3L);
        int16_t l_117 = 0x1368L;
        for (g_76 = (-3); (g_76 < 8); g_76 = safe_add_func_uint16_t_u_u(g_76, 4))
        {
            const int32_t ***l_82 = &g_73;
            (*l_82) = p_72;
            if ((**p_72))
                continue;
            g_83 = &l_75;
            ((void) sizeof ((g_83 == &l_75) ? 1 : 0), __extension__ ({ if (g_83 == &l_75) ; else __assert_fail ("g_83 == &l_75", "/tmp/tmpk4p4sgy_.c", 661, __extension__ __PRETTY_FUNCTION__); }));
            for (g_85 = 0; (g_85 >= (-9)); g_85 = safe_sub_func_int8_t_s_s(g_85, 9))
            {
                uint16_t l_88 = 0xDF27L;
                int32_t *l_89 = (void*)0;
                int32_t *l_90 = &g_91;
                (*l_90) = l_88;
                l_105 = (safe_add_func_uint32_t_u_u(((!(safe_mul_func_int16_t_s_s(g_91, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_72 == p_72), 7)), (safe_mod_func_uint32_t_u_u(((*l_75) != (safe_sub_func_int32_t_s_s(((l_90 == l_89) || (***l_82)), (-1L)))), (**g_83)))))))) & (*l_75)), (**p_72)));
                g_106 = g_106;
            }
        }
        for (g_85 = (-14); (g_85 >= (-14)); g_85 = safe_add_func_int32_t_s_s(g_85, 2))
        {
            const int32_t l_113 = 0xFF2B3A76L;
            int32_t **l_115 = &l_75;
            int32_t *l_116 = &g_91;
            (*l_75) ^= 0L;
            (*l_116) ^= (safe_sub_func_int32_t_s_s((*l_75), (safe_mul_func_uint16_t_u_u(l_113, (!(l_115 != (void*)0))))));
        }
        (*l_75) = l_117;
    }
    else
    {
        int16_t l_134 = 0L;
        int32_t l_267 = (-8L);
        struct S1 *l_272 = (void*)0;
        const int16_t l_276 = 0x3A1BL;
        const int32_t *l_281 = (void*)0;
        int8_t l_306 = 7L;
        int32_t *l_307 = &g_91;
        if (((*p_72) != (void*)0))
        {
            uint16_t l_118 = 65530UL;
            uint32_t l_157 = 0x173B194EL;
            int32_t *l_189 = &g_190;
            int32_t l_211 = 0xD26D99E8L;
            int8_t l_223 = (-1L);
            int32_t l_262 = 1L;
            ++l_118;
            if (((safe_mod_func_int16_t_s_s((g_5 != (safe_mod_func_int16_t_s_s(g_85, (1L ^ (((0x9B86L || (-1L)) || (safe_lshift_func_uint16_t_u_s((0UL || (*l_75)), (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((!(safe_mul_func_uint8_t_u_u(0xA7L, ((**p_72) || (**p_72))))) <= l_134), 0L)), (*l_75)))))) == l_118))))), l_118)) != (*l_75)))
            {
                int16_t l_144 = 0L;
                l_149 ^= (safe_mul_func_uint16_t_u_u((*l_75), ((((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0x184AL, (((safe_rshift_func_int8_t_s_u((+((((&l_75 == &l_75) || (l_144 <= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((&p_72 != &g_30), 14)), (*l_75))) & g_5))) & (*l_75)) == (*l_75))), 3)) <= 7L) == 0x4D9CL))) & l_118), (*l_75))) || g_91) | 0xCAF2BF2FL) == g_85)));
                for (g_91 = 27; (g_91 > 4); g_91--)
                {
                    for (l_118 = 0; (l_118 >= 7); l_118 = safe_add_func_uint32_t_u_u(l_118, 3))
                    {
                        (*l_75) = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(0x1BC3L)), g_85));
                    }
                    if (l_157)
                        continue;
                }
            }
            else
            {
                int32_t *l_160 = &g_91;
                (*l_160) = ((safe_lshift_func_uint16_t_u_u((l_160 != (*p_72)), ((safe_rshift_func_uint8_t_u_u((((((g_106.f3 == ((safe_rshift_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((0x104BL ^ 0x6B6AL) | ((~7L) > ((p_72 == &g_74) && (*g_74)))) >= (*l_75)) > l_157), g_106.f2)), (*l_75))) < 0x278DB3D8L) == (*l_75)) == g_76) != 0x7C33L), g_106.f1)) < g_76)) & (**p_72)) && l_134) & (*l_75)) != (*l_75)), 7)) && g_5))) ^ l_118);
            }
            (*l_189) ^= ((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_134 ^ ((safe_rshift_func_int8_t_s_s(7L, ((safe_lshift_func_uint16_t_u_u((*l_75), 7)) ^ (safe_lshift_func_uint16_t_u_u((0x7CL != (+(((safe_mul_func_uint8_t_u_u(l_157, (((g_85 > (*l_75)) == (((safe_add_func_int16_t_s_s((g_76 & (l_134 <= 0UL)), g_76)) > l_157) && 0L)) != 0xB27AD419L))) < l_134) | l_118))), g_91))))) || l_134)), g_106.f2)), 0xEC58L)) == (**p_72)) || l_134) ^ g_85), 5L)) >= 0xB8CCF781L), l_118)) ^ g_106.f3);
            if (((*l_189) != (safe_sub_func_uint8_t_u_u(g_106.f1, ((**p_72) != l_134)))))
            {
                int32_t *l_193 = &g_190;
                int32_t *l_194 = (void*)0;
                int32_t *l_195 = &g_190;
                int32_t *l_196 = &g_91;
                int32_t *l_197 = &g_85;
                int32_t *l_198 = &g_76;
                int32_t *l_199 = &g_190;
                int32_t *l_200 = (void*)0;
                int32_t *l_201 = &g_190;
                int32_t *l_202 = &g_85;
                int32_t *l_203 = &g_91;
                int32_t *l_204 = &g_85;
                int32_t *l_205 = &g_91;
                int32_t *l_206 = (void*)0;
                int32_t *l_207 = &g_190;
                int32_t *l_208 = &g_85;
                int32_t *l_209 = &g_91;
                int32_t *l_210 = &g_91;
                int32_t *l_212 = &g_190;
                int32_t *l_213 = &g_91;
                int32_t *l_214 = (void*)0;
                int32_t *l_215 = &l_211;
                int32_t *l_216 = (void*)0;
                int32_t *l_217 = &g_190;
                int32_t *l_218 = &g_190;
                int32_t *l_219 = &g_85;
                int32_t *l_220 = (void*)0;
                int32_t *l_221 = &l_211;
                int32_t *l_222 = &g_91;
                int32_t *l_224 = &g_76;
                int32_t *l_225 = &g_85;
                int32_t *l_226 = &g_91;
                int32_t *l_227 = &g_190;
                int32_t *l_228 = &g_190;
                int32_t *l_229 = &g_190;
                int32_t *l_230 = &g_85;
                int32_t *l_231 = &l_211;
                int32_t *l_232 = &g_190;
                int32_t *l_234 = &l_211;
                int32_t *l_235 = &g_85;
                int32_t *l_236 = &g_190;
                int32_t *l_237 = (void*)0;
                int32_t *l_238 = &g_190;
                int32_t *l_239 = &g_190;
                int32_t *l_240 = &g_85;
                int32_t *l_241 = &g_91;
                int32_t *l_242 = &l_233;
                int32_t *l_243 = (void*)0;
                int32_t *l_244 = &l_211;
                int32_t *l_245 = (void*)0;
                int32_t *l_246 = (void*)0;
                int32_t *l_247 = (void*)0;
                int32_t *l_248 = &g_85;
                int32_t *l_249 = &g_85;
                int32_t *l_250 = &g_91;
                int32_t *l_251 = (void*)0;
                int32_t *l_252 = &g_190;
                int32_t *l_253 = &g_91;
                int32_t *l_254 = &l_233;
                int32_t *l_255 = &g_85;
                int32_t *l_256 = &g_91;
                int32_t *l_257 = &l_233;
                int32_t *l_258 = &g_85;
                int32_t *l_259 = (void*)0;
                int32_t *l_261 = &l_260;
                int32_t *l_263 = &l_233;
                int32_t *l_265 = &l_262;
                int32_t *l_266 = &g_85;
                int32_t *l_268 = (void*)0;
                (*l_189) &= (*g_74);
                --g_269;
            }
            else
            {
                struct S1 **l_273 = &l_272;
                (*l_273) = l_272;
                return g_5;
            }
        }
        else
        {
            int32_t l_280 = 4L;
            l_280 = (safe_mul_func_int16_t_s_s((((**p_72) > 1L) == (l_276 | g_269)), ((0x3BL < (*l_75)) < (((!((safe_rshift_func_int16_t_s_u(((l_280 <= (((void*)0 != &l_272) | (**p_72))) ^ g_85), 8)) & 0x9F7BL)) != 2UL) && l_267))));
        }
        l_281 = (*p_72);
        ((void) sizeof ((l_281 == &g_5) ? 1 : 0), __extension__ ({ if (l_281 == &g_5) ; else __assert_fail ("l_281 == &g_5", "/tmp/tmpk4p4sgy_.c", 810, __extension__ __PRETTY_FUNCTION__); }));
        (*l_307) |= ((((**p_72) >= (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(((void*)0 != &l_272), g_106.f2)) | (1L >= 0L)) && (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((+((*l_281) || ((safe_lshift_func_int16_t_s_s((g_5 | (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_uint16_t_u((*l_75))) ^ 0x9A02L) && (*l_75)), (*l_281))), (*l_281))) == (*l_281)), g_76)), 0x5402L)), 6))), 7)) & g_106.f0))) > (*l_75)), (*l_75))), l_306))) ^ 8UL), 3L)) <= (**g_73)), (*l_281)))) == (*l_75)) != g_85);
        (*l_75) &= (*l_281);
    }
    if ((250UL & (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((**p_72), 0L)), (safe_div_func_int32_t_s_s(((((&g_74 == (void*)0) <= (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((*l_75), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((*l_75), 10)), 0x0F00L)))), g_85)) == g_264), (*l_75))), g_326))) <= (-1L)) == 0xFD32L), g_5))))))
    {
        int32_t *l_327 = &l_233;
        l_327 = (void*)0;
        ((void) sizeof ((l_327 == 0) ? 1 : 0), __extension__ ({ if (l_327 == 0) ; else __assert_fail ("l_327 == 0", "/tmp/tmpk4p4sgy_.c", 821, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_328 = &g_76;
        int32_t *l_329 = &g_76;
        int32_t *l_330 = &l_260;
        int32_t *l_331 = &g_91;
        int32_t l_332 = 0x9E22B5BEL;
        int32_t *l_333 = &g_76;
        int32_t *l_334 = &l_233;
        int32_t *l_335 = &l_233;
        int32_t *l_336 = &l_233;
        int32_t *l_337 = &l_260;
        int32_t *l_338 = (void*)0;
        int32_t *l_339 = &g_85;
        int32_t *l_340 = (void*)0;
        int32_t *l_341 = &g_85;
        int32_t *l_342 = &g_91;
        int32_t *l_343 = &g_85;
        int32_t *l_344 = &l_332;
        uint8_t l_345 = 0x5AL;
        struct S1 *l_354 = &g_355;
        struct S1 **l_353 = &l_354;
        l_345++;
        if ((*l_333))
        {
            const struct S1 **l_352 = (void*)0;
            int32_t l_356 = 0x9E49857DL;
            int32_t l_363 = (-7L);
            l_363 ^= (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((*l_331), (l_352 == l_353))) == (((**g_73) != (((l_356 != (safe_rshift_func_int16_t_s_s(l_356, 11))) >= (safe_mod_func_int16_t_s_s(l_356, g_326))) == (safe_lshift_func_int8_t_s_s(l_356, 7)))) & (*l_75))), 0x455AL));
        }
        else
        {
            (*g_73) = (*p_72);
        }
        (*l_341) ^= (*l_75);
    }
    return g_269;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_355.f0, "g_355.f0", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_509.f0, "g_509.f0", print_hash_value);
    transparent_crc(g_509.f1, "g_509.f1", print_hash_value);
    transparent_crc(g_509.f2.f0, "g_509.f2.f0", print_hash_value);
    transparent_crc(g_509.f2.f1, "g_509.f2.f1", print_hash_value);
    transparent_crc(g_509.f2.f2, "g_509.f2.f2", print_hash_value);
    transparent_crc(g_509.f2.f3, "g_509.f2.f3", print_hash_value);
    transparent_crc(g_509.f3, "g_509.f3", print_hash_value);
    transparent_crc(g_509.f4, "g_509.f4", print_hash_value);
    transparent_crc(g_509.f5, "g_509.f5", print_hash_value);
    transparent_crc(g_509.f6.f0, "g_509.f6.f0", print_hash_value);
    transparent_crc(g_509.f7, "g_509.f7", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
