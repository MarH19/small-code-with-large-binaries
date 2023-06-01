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
struct S0 {
   const int32_t f0;
   int16_t f1;
   int32_t f2;
   unsigned f3 : 19;
   const int8_t f4;
   int32_t f5;
   int8_t f6;
   unsigned f7 : 24;
   int8_t f8;
};
struct S1 {
   int8_t f0;
   uint32_t f1;
};
struct S2 {
   signed f0 : 11;
   signed f1 : 20;
   unsigned f2 : 19;
   signed f3 : 18;
};
static int32_t g_8 = 0x31EB2391L;
static int32_t *g_7 = &g_8;
static struct S0 g_42 = {0x5C1F4ACAL,1L,-1L,404,0L,1L,0L,663,0xEFL};
static int32_t g_53[3] = {0xE0AD50A0L,0xE0AD50A0L,0xE0AD50A0L};
static uint8_t g_83[5] = {0x9FL,0x9FL,0x9FL,0x9FL,0x9FL};
static int32_t g_93 = 0L;
static uint32_t g_110 = 2UL;
static uint16_t g_112[7][2][8] = {{{0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L},{0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL}},{{0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL},{0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L}},{{0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0x6991L,0x6991L},{65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L}},{{0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL},{0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L}},{{65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L},{0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL}},{{0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L},{65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L}},{{0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL},{0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L}}};
static int32_t **g_117 = &g_7;
static int32_t ***g_116 = &g_117;
static int16_t *g_136 = &g_42.f1;
static int16_t **g_135 = &g_136;
static struct S2 g_144 = {37,263,432,-229};
static struct S1 g_147 = {0x33L,0UL};
static int32_t *g_151 = &g_93;
static int8_t g_169 = 2L;
static uint16_t *g_270[7] = {&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4]};
static int32_t **g_287 = (void*)0;
static struct S1 *g_299 = &g_147;
static struct S1 **g_298 = &g_299;
static struct S1 g_303 = {0x03L,4294967289UL};
static struct S0 *g_318 = &g_42;
static struct S0 **g_317[5][10][5] = {{{&g_318,&g_318,&g_318,(void*)0,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,(void*)0,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,(void*)0,(void*)0,(void*)0},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,(void*)0,(void*)0,(void*)0},{&g_318,&g_318,&g_318,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,(void*)0,&g_318,(void*)0},{(void*)0,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318,(void*)0},{(void*)0,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0,&g_318}},{{&g_318,&g_318,&g_318,&g_318,&g_318},{(void*)0,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0,&g_318}},{{&g_318,&g_318,&g_318,&g_318,(void*)0},{(void*)0,&g_318,(void*)0,&g_318,(void*)0},{(void*)0,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,(void*)0,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318}}};
static const int32_t *g_390[3][3] = {{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}};
static const int32_t **g_389 = &g_390[0][0];
static struct S2 g_452 = {38,949,229,504};
static int32_t g_459 = 0xB1D9F15AL;
static uint16_t **g_509 = &g_270[0];
static uint16_t ***g_508[10][7] = {{&g_509,&g_509,&g_509,&g_509,&g_509,(void*)0,&g_509},{(void*)0,(void*)0,&g_509,&g_509,(void*)0,(void*)0,&g_509},{&g_509,&g_509,&g_509,(void*)0,&g_509,&g_509,&g_509},{(void*)0,&g_509,(void*)0,&g_509,&g_509,&g_509,&g_509},{(void*)0,&g_509,&g_509,&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,&g_509,(void*)0,&g_509,&g_509,(void*)0},{&g_509,&g_509,&g_509,(void*)0,&g_509,&g_509,&g_509},{(void*)0,&g_509,&g_509,&g_509,(void*)0,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,&g_509,&g_509,&g_509,(void*)0,&g_509}};
static struct S2 *g_516 = &g_144;
static struct S2 **g_515 = &g_516;
static struct S2 ***g_514 = &g_515;
static struct S0 *g_730 = (void*)0;
static int16_t g_758 = 0xD6DFL;
static uint16_t g_774 = 0xE359L;
static uint32_t func_1(void);
static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12);
static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21);
static int32_t * func_24(uint16_t p_25);
static struct S0 * func_31(uint8_t p_32, int8_t p_33);
static int8_t func_45(struct S0 * p_46, int32_t p_47, int32_t *** p_48, struct S0 p_49, struct S0 * p_50);
static int32_t func_58(int32_t * p_59, int32_t p_60, int32_t * p_61, int32_t ** p_62);
static uint16_t func_86(int32_t * p_87, uint8_t p_88);
static uint32_t func_94(int32_t p_95, struct S0 * p_96);
static struct S0 * func_98(int32_t ** p_99, int32_t *** p_100, const struct S0 * p_101, const int32_t * p_102, int32_t p_103);
static uint32_t func_1(void)
{
    int32_t *l_16[4] = {&g_8,&g_8,&g_8,&g_8};
    int32_t **l_15 = &l_16[1];
    int32_t **l_23 = (void*)0;
    int32_t ***l_22 = &l_23;
    int32_t **l_26 = (void*)0;
    int32_t *l_27 = (void*)0;
    int32_t *l_772 = &g_42.f5;
    int32_t l_773 = 0xE1704A87L;
    int i;
    (*g_389) = (((*g_7) = (~(safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((void*)0 != g_7), (g_8 , func_9(((safe_add_func_int8_t_s_s((4UL != (((*l_15) = &g_8) != ((*g_389) = func_17(((*l_22) = (void*)0), func_24(((l_27 = &g_8) != &g_8)), g_8, g_8)))), 0xEEL)) | 0xC097L), l_772, (*g_117))))), g_452.f1)))) , (void*)0);
    ((void) sizeof ((l_27 == &g_8) ? 1 : 0), __extension__ ({ if (l_27 == &g_8) ; else __assert_fail ("l_27 == &g_8", "/tmp/tmpyf59mxed.c", 110, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_151 == 0) ? 1 : 0), __extension__ ({ if (g_151 == 0) ; else __assert_fail ("g_151 == 0", "/tmp/tmpyf59mxed.c", 111, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_318 == 0) ? 1 : 0), __extension__ ({ if (g_318 == 0) ; else __assert_fail ("g_318 == 0", "/tmp/tmpyf59mxed.c", 112, __extension__ __PRETTY_FUNCTION__); }));
    ++g_774;
    return (*l_27);
}
static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12)
{
    (**g_298) = (**g_298);
    return g_42.f5;
}
static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21)
{
    int32_t *l_30[5];
    int32_t **l_29 = &l_30[0];
    struct S0 **l_731 = &g_318;
    struct S0 l_732 = {1L,0xE2C8L,0xC1782CCBL,337,-4L,0x8438359BL,0xA2L,4010,-8L};
    int32_t *l_734[9][8][3] = {{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],(void*)0},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[1],&g_53[1],(void*)0},{&g_53[2],&g_53[0],&g_53[0]}},{{&g_53[1],&g_53[2],&g_53[2]},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[2],&g_53[0],&g_53[0]},{&g_53[0],&g_53[2],(void*)0},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[1],&g_53[1],(void*)0},{&g_53[2],&g_53[0],&g_53[0]}},{{&g_53[1],&g_53[2],&g_53[2]},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[2],&g_53[0],&g_53[0]},{&g_53[0],&g_53[2],(void*)0},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[1],&g_53[1],(void*)0},{&g_53[2],&g_53[0],&g_53[0]}}};
    int32_t **l_733 = &l_734[4][2][2];
    struct S2 l_737 = {29,-693,486,220};
    int16_t ** const l_743[1] = {&g_136};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_30[i] = &g_8;
    (*l_29) = (void*)0;
    (*l_731) = func_31(p_20, p_21);
    ((void) sizeof ((g_151 == 0) ? 1 : 0), __extension__ ({ if (g_151 == 0) ; else __assert_fail ("g_151 == 0", "/tmp/tmpyf59mxed.c", 154, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_318 == 0) ? 1 : 0), __extension__ ({ if (g_318 == 0) ; else __assert_fail ("g_318 == 0", "/tmp/tmpyf59mxed.c", 155, __extension__ __PRETTY_FUNCTION__); }));
    if (((l_732 , l_733) == &l_734[4][2][2]))
    {
        struct S2 ****l_736 = (void*)0;
        struct S2 *****l_735 = &l_736;
        int32_t l_738 = 0x517AA5F7L;
        int16_t **l_741 = &g_136;
        int16_t ***l_742 = &l_741;
        uint8_t l_757 = 0x71L;
        (*l_735) = &g_514;
        ((void) sizeof ((l_736 == &g_514) ? 1 : 0), __extension__ ({ if (l_736 == &g_514) ; else __assert_fail ("l_736 == &g_514", "/tmp/tmpyf59mxed.c", 166, __extension__ __PRETTY_FUNCTION__); }));
        if (((((l_737 , ((*g_136) = (l_738 <= ((safe_mul_func_uint16_t_u_u((((****l_736) , ((*l_742) = l_741)) == l_743[0]), (+(safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((g_758 ^= (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((p_20 <= 0x1799L) & ((safe_add_func_int16_t_s_s((*g_136), (**g_135))) == l_757)), l_757)) >= 0x05D60694L), 7L)), g_303.f1))), (**g_509))) & l_757), p_20))))) < p_21)))) >= 0x74BFL) != 1UL) || 0x5D469E68L))
        {
            struct S2 l_766 = {-34,844,422,-406};
            (***g_116) &= (-10L);
            l_738 |= ((p_20 == (safe_div_func_uint8_t_u_u((0x89FB88CFL & 0L), (((**g_135) , ((**g_117) == 1L)) | (~g_83[1]))))) == (safe_sub_func_int16_t_s_s((((p_21 < (l_766 , p_21)) , (***g_116)) && (**g_117)), p_21)));
        }
        else
        {
            (***g_116) ^= (l_757 < ((void*)0 == g_287));
        }
        for (g_42.f2 = 18; (g_42.f2 > (-30)); g_42.f2--)
        {
            if ((**g_389))
                break;
        }
    }
    else
    {
        uint8_t l_769 = 0UL;
        l_769++;
    }
    return (*g_117);
}
static int32_t * func_24(uint16_t p_25)
{
    int32_t *l_28 = (void*)0;
    return l_28;
}
static struct S0 * func_31(uint8_t p_32, int8_t p_33)
{
    uint8_t l_36[10][8][3] = {{{0x23L,0x7DL,0UL},{247UL,246UL,0x9BL},{255UL,9UL,0xD8L},{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{1UL,0x7DL,0x7DL},{250UL,0UL,255UL},{0xC8L,0UL,255UL}},{{255UL,255UL,0x7DL},{247UL,255UL,0x82L},{0x23L,255UL,255UL},{0x42L,0UL,0xD8L},{0x42L,0UL,0x9BL},{0x23L,0x7DL,0UL},{247UL,246UL,0x9BL},{255UL,9UL,0xD8L}},{{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{1UL,0x7DL,0x7DL},{250UL,0UL,255UL},{0xC8L,0UL,255UL},{255UL,255UL,0x7DL},{247UL,255UL,0x82L},{0x23L,255UL,255UL}},{{0x42L,0UL,0xD8L},{0x42L,0UL,0x9BL},{0x23L,0x7DL,0UL},{247UL,246UL,0x9BL},{255UL,9UL,0xD8L},{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{1UL,0x7DL,0x7DL}},{{250UL,0UL,255UL},{0xC8L,0UL,255UL},{255UL,255UL,0x7DL},{247UL,255UL,0x82L},{0x23L,255UL,255UL},{0x42L,0UL,0xD8L},{0x42L,0UL,0x9BL},{0x23L,0x7DL,0UL}},{{247UL,246UL,0x9BL},{255UL,9UL,0xD8L},{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{255UL,9UL,9UL},{0x35L,0xDBL,250UL},{0x9BL,0x63L,250UL},{9UL,250UL,9UL}},{{0UL,1UL,0x9CL},{255UL,250UL,1UL},{255UL,0x63L,0xD6L},{255UL,0xDBL,0xB9L},{255UL,9UL,0x63L},{0UL,0x32L,0xB9L},{9UL,0x7EL,0xD6L},{0x9BL,0x7EL,1UL}},{{0x35L,0x32L,0x9CL},{255UL,9UL,9UL},{0x35L,0xDBL,250UL},{0x9BL,0x63L,250UL},{9UL,250UL,9UL},{0UL,1UL,0x9CL},{255UL,250UL,1UL},{255UL,0x63L,0xD6L}},{{255UL,0xDBL,0xB9L},{255UL,9UL,0x63L},{0UL,0x32L,0xB9L},{9UL,0x7EL,0xD6L},{0x9BL,0x7EL,1UL},{0x35L,0x32L,0x9CL},{255UL,9UL,9UL},{0x35L,0xDBL,250UL}},{{0x9BL,0x63L,250UL},{9UL,250UL,9UL},{0UL,1UL,0x9CL},{255UL,250UL,1UL},{255UL,0x63L,0xD6L},{255UL,0xDBL,0xB9L},{255UL,9UL,0x63L},{0UL,0x32L,0xB9L}}};
    struct S0 *l_41 = &g_42;
    int32_t l_478 = 0x28B4CB26L;
    struct S0 l_479 = {0xB72D0E55L,0x4AF8L,0L,324,0x5CL,-4L,2L,1762,0xEFL};
    struct S2 *l_486 = &g_452;
    int16_t ***l_498 = &g_135;
    uint8_t *l_723 = (void*)0;
    uint8_t *l_724 = (void*)0;
    uint8_t *l_725 = &l_36[3][3][0];
    int8_t l_726[1][10][8] = {{{0x54L,(-1L),(-1L),0x54L,0xF8L,(-1L),0xF8L,0x54L},{(-1L),0xF8L,(-1L),0x34L,2L,2L,0x34L,(-1L)},{0xF8L,0xF8L,2L,(-1L),(-3L),(-1L),2L,0xF8L},{0xF8L,(-1L),0x34L,2L,2L,0x34L,(-1L),0xF8L},{(-1L),0x54L,0xF8L,(-1L),0xF8L,0x54L,(-1L),(-1L)},{0x54L,(-1L),0x34L,0x34L,(-1L),0x54L,2L,0x54L},{(-1L),0x54L,2L,0x54L,(-1L),0x34L,0x34L,(-1L)},{0x54L,(-1L),(-1L),0x54L,0xF8L,(-1L),0xF8L,0x54L},{(-1L),0xF8L,(-1L),0x34L,2L,2L,0x34L,(-1L)},{0xF8L,0xF8L,2L,(-1L),(-3L),(-1L),2L,0xF8L}}};
    int32_t *l_727 = &l_479.f5;
    int32_t **l_728 = &g_151;
    int32_t *l_729 = &l_479.f2;
    int i, j, k;
    for (g_8 = 0; (g_8 == 15); g_8 = safe_add_func_uint32_t_u_u(g_8, 6))
    {
        int16_t l_482[3];
        int32_t l_501 = 5L;
        struct S0 *l_503 = &g_42;
        struct S1 *l_504 = &g_303;
        const int32_t **l_525 = &g_390[0][0];
        struct S2 **l_545 = (void*)0;
        const uint16_t *l_564 = &g_112[1][1][4];
        struct S2 *l_569 = &g_452;
        int16_t *l_574 = &l_479.f1;
        int32_t l_601 = 0x656E0263L;
        const int32_t *l_632 = &g_53[0];
        int32_t l_633 = 0x1264244DL;
        int i;
        for (i = 0; i < 3; i++)
            l_482[i] = 0x62BAL;
    }
    (*l_727) &= ((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, p_32)), (safe_rshift_func_int16_t_s_s((((*l_41) , ((*l_41) , (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(8UL, (((((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(g_42.f2, (((***g_116) != (***g_116)) | (safe_rshift_func_uint8_t_u_s(((*l_725) = (+0UL)), 0))))) & l_726[0][3][3]), p_33)) > (*g_151)) & g_42.f2) ^ p_32) , p_32))) || (***g_116)), l_479.f8)) ^ p_32), p_33)), l_479.f4)))) & 0x9474L), l_726[0][3][3])))) || g_8);
    l_729 = (l_727 = ((*l_728) = func_24(((**g_509) = (*l_727)))));
    ((void) sizeof ((g_151 == 0) ? 1 : 0), __extension__ ({ if (g_151 == 0) ; else __assert_fail ("g_151 == 0", "/tmp/tmpyf59mxed.c", 250, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_727 == 0) ? 1 : 0), __extension__ ({ if (l_727 == 0) ; else __assert_fail ("l_727 == 0", "/tmp/tmpyf59mxed.c", 251, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_729 == 0) ? 1 : 0), __extension__ ({ if (l_729 == 0) ; else __assert_fail ("l_729 == 0", "/tmp/tmpyf59mxed.c", 252, __extension__ __PRETTY_FUNCTION__); }));
    return g_730;
}
static int8_t func_45(struct S0 * p_46, int32_t p_47, int32_t *** p_48, struct S0 p_49, struct S0 * p_50)
{
    int32_t *l_481 = &g_93;
    (*g_389) = l_481;
    return p_49.f3;
}
static int32_t func_58(int32_t * p_59, int32_t p_60, int32_t * p_61, int32_t ** p_62)
{
    uint32_t l_73 = 18446744073709551615UL;
    int32_t l_82 = 4L;
    struct S1 **l_463 = &g_299;
    int32_t l_465[4][8] = {{(-6L),0L,0L,0x8EE7C522L,1L,0xB7091DFAL,0xE886D392L,0xE886D392L},{0x346C9739L,0x8EE7C522L,0x5E4AB4E5L,0x5E4AB4E5L,0x8EE7C522L,0x346C9739L,0L,0x8EE7C522L},{0xE886D392L,0L,0x5E4AB4E5L,0xE886D392L,0x5E4AB4E5L,0L,0xE886D392L,0x346C9739L},{0x8EE7C522L,1L,0xB7091DFAL,0xE886D392L,0xE886D392L,0xB7091DFAL,1L,0x8EE7C522L}};
    int i, j;
lbl_468:
    g_42.f2 = (*g_7);
    for (g_42.f8 = 24; (g_42.f8 >= (-14)); g_42.f8--)
    {
        int32_t *l_69 = &g_42.f2;
        int32_t *l_70 = &g_42.f2;
        int32_t *l_71 = (void*)0;
        int32_t *l_72[3][8][9] = {{{(void*)0,&g_42.f2,&g_8,&g_42.f5,&g_8,&g_42.f2,&g_42.f2,&g_8,&g_42.f5},{&g_42.f2,&g_42.f5,(void*)0,&g_8,(void*)0,&g_42.f5,&g_42.f2,&g_42.f5,&g_42.f2},{&g_42.f5,&g_42.f2,&g_8,&g_42.f5,&g_42.f5,(void*)0,(void*)0,(void*)0,(void*)0},{&g_42.f5,(void*)0,&g_42.f2,(void*)0,&g_42.f5,(void*)0,&g_42.f5,&g_42.f5,(void*)0},{(void*)0,&g_42.f5,&g_8,(void*)0,(void*)0,&g_42.f5,&g_8,&g_42.f5,&g_42.f2},{(void*)0,&g_8,&g_42.f5,&g_42.f5,&g_8,(void*)0,&g_42.f2,(void*)0,&g_42.f2},{&g_8,&g_8,&g_42.f5,&g_42.f5,&g_42.f2,(void*)0,(void*)0,(void*)0,(void*)0},{&g_42.f5,&g_8,&g_8,&g_42.f2,&g_42.f5,&g_42.f5,&g_42.f2,&g_8,&g_8}},{{&g_42.f5,&g_8,(void*)0,(void*)0,(void*)0,&g_42.f2,&g_8,&g_8,&g_42.f5},{(void*)0,&g_42.f2,&g_42.f2,&g_42.f5,(void*)0,(void*)0,&g_8,&g_8,&g_8},{&g_42.f5,&g_8,&g_42.f5,(void*)0,(void*)0,&g_8,&g_8,&g_42.f2,&g_42.f5},{&g_42.f5,&g_8,&g_42.f5,(void*)0,&g_42.f2,&g_42.f5,&g_42.f2,&g_8,&g_42.f2},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,(void*)0,&g_8,&g_42.f2},{&g_42.f5,&g_8,(void*)0,&g_8,(void*)0,&g_8,&g_42.f5,(void*)0,(void*)0},{(void*)0,&g_42.f5,&g_42.f2,&g_42.f5,&g_42.f2,(void*)0,(void*)0,&g_42.f5,&g_42.f2},{&g_42.f2,(void*)0,&g_42.f5,(void*)0,&g_42.f2,&g_42.f2,&g_42.f2,&g_8,(void*)0}},{{&g_42.f2,&g_42.f2,&g_42.f2,&g_8,&g_8,&g_42.f2,&g_8,&g_8,&g_42.f2},{&g_42.f5,&g_42.f5,&g_42.f5,&g_42.f2,&g_42.f5,&g_42.f2,&g_8,&g_8,&g_42.f5},{&g_8,(void*)0,&g_8,&g_8,&g_42.f2,(void*)0,&g_8,&g_42.f2,&g_42.f5},{&g_42.f2,(void*)0,&g_42.f2,(void*)0,(void*)0,&g_8,(void*)0,&g_8,&g_42.f5},{&g_42.f2,&g_42.f2,(void*)0,&g_8,&g_8,&g_42.f5,&g_42.f5,(void*)0,(void*)0},{(void*)0,&g_42.f2,&g_42.f5,&g_8,&g_42.f5,&g_42.f2,(void*)0,&g_8,&g_8},{&g_8,&g_8,(void*)0,&g_8,&g_42.f2,&g_8,&g_42.f5,&g_42.f5,&g_8},{&g_8,&g_42.f5,(void*)0,(void*)0,&g_42.f2,(void*)0,(void*)0,&g_8,&g_8}}};
        struct S2 l_453[2] = {{38,-379,430,-455},{38,-379,430,-455}};
        int16_t l_457 = 0x2DBBL;
        struct S0 l_462 = {0x8651E5AFL,0L,0L,138,0xCCL,0x448BC1A6L,0L,153,0xA3L};
        uint8_t *l_475[2][9][3] = {{{&g_83[1],&g_83[1],&g_83[2]},{(void*)0,&g_83[1],&g_83[1]},{&g_83[1],(void*)0,&g_83[1]},{&g_83[1],(void*)0,&g_83[1]},{&g_83[2],&g_83[1],&g_83[2]},{&g_83[1],(void*)0,(void*)0},{&g_83[2],(void*)0,&g_83[1]},{&g_83[1],&g_83[1],&g_83[1]},{&g_83[2],&g_83[1],&g_83[1]}},{{&g_83[1],&g_83[1],(void*)0},{&g_83[1],&g_83[1],&g_83[2]},{(void*)0,&g_83[1],&g_83[1]},{&g_83[1],(void*)0,&g_83[1]},{&g_83[1],(void*)0,&g_83[1]},{&g_83[2],&g_83[1],&g_83[2]},{&g_83[1],(void*)0,(void*)0},{&g_83[2],(void*)0,&g_83[1]},{&g_83[1],&g_83[1],&g_83[1]}}};
        int i, j, k;
        l_73++;
        for (g_42.f5 = 7; (g_42.f5 <= (-14)); g_42.f5--)
        {
            const int32_t *l_454 = &l_82;
            uint16_t *l_458[4];
            int i;
            for (i = 0; i < 4; i++)
                l_458[i] = (void*)0;
            for (g_42.f6 = 0; (g_42.f6 >= 2); g_42.f6++)
            {
                for (g_42.f2 = 0; (g_42.f2 >= 3); g_42.f2 = safe_add_func_int8_t_s_s(g_42.f2, 6))
                {
                    for (p_60 = 0; (p_60 <= 2); p_60 += 1)
                    {
                        struct S2 l_448 = {-14,-948,64,417};
                        struct S2 *l_449 = &l_448;
                        struct S2 *l_450 = &g_144;
                        struct S2 *l_451 = &g_452;
                        int i, j, k;
                        g_83[1]--;
                        (*l_451) = (func_86(l_72[p_60][(p_60 + 1)][(p_60 + 5)], g_42.f3) , ((*l_450) = ((*l_449) = l_448)));
                        (*g_389) = (*p_62);
                    }
                }
            }
            l_454 = (l_453[1] , (*g_389));
            ((void) sizeof ((l_454 == &g_8) ? 1 : 0), __extension__ ({ if (l_454 == &g_8) ; else __assert_fail ("l_454 == &g_8", "/tmp/tmpyf59mxed.c", 326, __extension__ __PRETTY_FUNCTION__); }));
            if ((((p_60 < (safe_lshift_func_int8_t_s_s(0xBDL, 6))) ^ (g_459 = l_457)) , (safe_rshift_func_uint8_t_u_u(((-8L) != (l_462 , (*g_136))), 7))))
            {
                struct S1 ***l_464 = &g_298;
                (*l_70) = (((*l_464) = l_463) != (void*)0);
            }
            else
            {
                uint8_t l_469 = 3UL;
                if (l_465[0][6])
                {
                    (*l_70) |= (0x22E7L | (0xC8E73670L && ((**g_298) , g_303.f1)));
                }
                else
                {
                    uint8_t l_472[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_472[i] = 0x4CL;
                    for (g_147.f0 = 0; (g_147.f0 <= 19); g_147.f0++)
                    {
                        if (g_110)
                            goto lbl_468;
                        l_469--;
                    }
                    if (l_472[0])
                        break;
                    for (g_42.f6 = 0; (g_42.f6 >= (-27)); --g_42.f6)
                    {
                        (*g_389) = func_24(p_60);
                        return (***g_116);
                    }
                }
                return (***g_116);
            }
        }
        l_82 |= ((p_60 > (g_83[2]++)) | p_60);
    }
    return l_465[3][4];
}
static uint16_t func_86(int32_t * p_87, uint8_t p_88)
{
    uint16_t l_97[10][10] = {{0x5347L,0xD4D4L,0UL,0UL,0xD4D4L,0x5347L,0x4C7FL,0x7542L,0xD1C2L,0xE19BL},{0UL,0xE19BL,9UL,5UL,0x7542L,5UL,9UL,0xE19BL,0UL,0x5347L},{0UL,0UL,0x868DL,0x4C7FL,5UL,0x5347L,0x5347L,5UL,0x4C7FL,0x868DL},{0x5347L,0x5347L,5UL,0x4C7FL,0x868DL,0UL,0UL,0xB5CEL,0UL,0UL},{9UL,5UL,0x7542L,5UL,9UL,0xE19BL,0UL,0x5347L,0xD1C2L,0xD1C2L},{0x4C7FL,0x5347L,0xD4D4L,0UL,0UL,0xD4D4L,0x5347L,0x4C7FL,0x7542L,0xD1C2L},{0xB5CEL,0UL,0x5347L,0UL,9UL,0UL,9UL,0UL,0x5347L,0UL},{0xD4D4L,0xE19BL,0x5347L,9UL,0x868DL,0UL,0x4C7FL,0x4C7FL,0UL,0x868DL},{0x5347L,0xD1C2L,0xD1C2L,0x5347L,0UL,0xE19BL,9UL,5UL,0x7542L,5UL},{0xD1C2L,0x4C7FL,0xB5CEL,5UL,0xB5CEL,0x4C7FL,0xD1C2L,9UL,0x7542L,0x868DL}};
    int8_t l_114 = 0xFDL;
    const struct S2 l_115 = {19,-208,140,293};
    const struct S0 *l_118 = &g_42;
    int32_t l_137 = 1L;
    struct S2 l_145 = {-35,-55,599,78};
    struct S1 *l_146[5][3] = {{&g_147,&g_147,&g_147},{(void*)0,(void*)0,(void*)0},{&g_147,&g_147,&g_147},{(void*)0,(void*)0,(void*)0},{&g_147,&g_147,&g_147}};
    uint32_t *l_295[4][6][7] = {{{&g_110,&g_110,&g_147.f1,&g_110,&g_110,&g_110,&g_147.f1},{&g_110,(void*)0,&g_147.f1,&g_110,&g_147.f1,&g_110,&g_147.f1},{&g_147.f1,&g_147.f1,(void*)0,&g_110,&g_110,&g_110,&g_110},{&g_147.f1,&g_147.f1,&g_110,&g_147.f1,&g_147.f1,&g_147.f1,&g_110},{(void*)0,&g_110,&g_110,(void*)0,&g_110,&g_110,&g_147.f1},{&g_110,&g_110,&g_147.f1,&g_110,&g_147.f1,&g_147.f1,&g_110}},{{&g_147.f1,&g_110,&g_147.f1,&g_147.f1,&g_110,&g_110,(void*)0},{&g_147.f1,(void*)0,&g_110,&g_110,&g_147.f1,&g_147.f1,&g_147.f1},{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,&g_110},{(void*)0,&g_110,(void*)0,&g_147.f1,&g_110,&g_147.f1,&g_110},{&g_147.f1,&g_110,&g_110,&g_147.f1,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_147.f1,(void*)0,&g_110,&g_147.f1,&g_110}},{{&g_110,&g_147.f1,&g_147.f1,&g_110,&g_147.f1,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_147.f1,(void*)0,&g_110,&g_110},{&g_147.f1,&g_110,(void*)0,&g_110,&g_147.f1,&g_110,&g_110},{(void*)0,&g_110,&g_110,&g_147.f1,&g_147.f1,&g_110,&g_147.f1},{&g_110,&g_147.f1,&g_147.f1,&g_110,&g_147.f1,&g_147.f1,(void*)0},{(void*)0,&g_147.f1,&g_147.f1,&g_110,&g_147.f1,(void*)0,&g_110}},{{&g_147.f1,(void*)0,&g_147.f1,&g_147.f1,(void*)0,&g_147.f1,&g_147.f1},{&g_110,&g_147.f1,&g_110,&g_110,&g_147.f1,&g_147.f1,&g_110},{&g_110,&g_110,&g_110,&g_110,(void*)0,&g_147.f1,&g_110},{&g_110,&g_147.f1,(void*)0,&g_110,&g_110,&g_147.f1,&g_147.f1},{&g_147.f1,(void*)0,&g_110,&g_147.f1,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_147.f1,&g_147.f1,&g_147.f1,&g_110}}};
    int16_t **l_337 = &g_136;
    const uint16_t l_338 = 3UL;
    int32_t **l_348[1][7][6];
    uint32_t l_352 = 0xC209DBF3L;
    int32_t l_353[9] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    const int16_t *l_360 = &g_42.f1;
    const int16_t **l_359 = &l_360;
    const int16_t **l_366 = (void*)0;
    int32_t *l_372 = &l_353[0];
    int32_t **l_371 = &l_372;
    int8_t *l_443 = &g_147.f0;
    int8_t **l_442 = &l_443;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
                l_348[i][j][k] = (void*)0;
        }
    }
    for (g_42.f1 = 0; (g_42.f1 == 22); g_42.f1++)
    {
        int32_t *l_92[1][10];
        int16_t *l_108 = (void*)0;
        int16_t *l_109 = (void*)0;
        uint16_t *l_111 = &g_112[1][1][4];
        uint16_t *l_113 = (void*)0;
        const struct S2 l_142 = {22,799,134,-220};
        const int32_t l_176 = (-6L);
        struct S2 *l_184[4];
        uint16_t *l_269 = (void*)0;
        int32_t **l_285 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 10; j++)
                l_92[i][j] = &g_93;
        }
        for (i = 0; i < 4; i++)
            l_184[i] = (void*)0;
        g_93 = (!1L);
        if ((func_94(l_97[0][0], func_98(&g_7, ((((g_42.f3 | p_88) , ((safe_sub_func_int32_t_s_s((g_93 = (safe_mul_func_uint16_t_u_u(((*l_111) = ((p_88 || l_97[2][3]) <= (p_88 ^ (g_110 &= 0xBBA7L)))), (&l_97[0][0] != l_113)))), l_114)) || 255UL)) , l_115) , g_116), l_118, g_7, (*g_7))) != (*g_7)))
        {
            int32_t *l_138 = &g_8;
            int32_t **l_139 = &l_138;
            struct S0 *l_141 = &g_42;
            struct S0 **l_140 = &l_141;
            l_137 = (*g_7);
            (*l_139) = l_138;
            (*l_140) = &g_42;
        }
        else
        {
            struct S2 *l_143[1][1][8] = {{{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}}};
            int i, j, k;
            l_145 = l_142;
            l_146[3][1] = (void*)0;
            p_87 = (void*)0;
            ((void) sizeof ((p_87 == 0) ? 1 : 0), __extension__ ({ if (p_87 == 0) ; else __assert_fail ("p_87 == 0", "/tmp/tmpyf59mxed.c", 445, __extension__ __PRETTY_FUNCTION__); }));
        }
        for (g_147.f0 = (-30); (g_147.f0 > 4); ++g_147.f0)
        {
            int32_t **l_150[5][1][9] = {{{&l_92[0][8],(void*)0,(void*)0,&l_92[0][8],(void*)0,(void*)0,&l_92[0][8],(void*)0,(void*)0}},{{(void*)0,&l_92[0][5],&l_92[0][5],(void*)0,&l_92[0][5],&l_92[0][5],(void*)0,&l_92[0][5],&l_92[0][5]}},{{&l_92[0][8],(void*)0,(void*)0,&l_92[0][8],(void*)0,(void*)0,&l_92[0][8],(void*)0,(void*)0}},{{(void*)0,&l_92[0][5],&l_92[0][5],(void*)0,&l_92[0][5],&l_92[0][5],(void*)0,&l_92[0][5],&l_92[0][5]}},{{&l_92[0][8],(void*)0,(void*)0,&l_92[0][8],(void*)0,(void*)0,&l_92[0][8],(void*)0,(void*)0}}};
            uint16_t l_222 = 0x4AEAL;
            int32_t **l_227 = &l_92[0][1];
            const struct S0 *l_248[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_248[i] = &g_42;
            g_151 = p_87;
            ((void) sizeof ((g_151 == 0 || g_151 == &g_42.f5 || g_151 == &g_8 || g_151 == &g_42.f2) ? 1 : 0), __extension__ ({ if (g_151 == 0 || g_151 == &g_42.f5 || g_151 == &g_8 || g_151 == &g_42.f2) ; else __assert_fail ("g_151 == 0 || g_151 == &g_42.f5 || g_151 == &g_8 || g_151 == &g_42.f2", "/tmp/tmpyf59mxed.c", 460, __extension__ __PRETTY_FUNCTION__); }));
            for (l_114 = (-18); (l_114 == (-12)); l_114 = safe_add_func_int32_t_s_s(l_114, 2))
            {
                int32_t l_167 = 0x44E6105DL;
                int32_t l_172 = 9L;
                struct S1 l_178 = {1L,0x9919FE58L};
                uint16_t **l_268 = &l_113;
                struct S2 l_273 = {3,278,108,7};
                struct S1 **l_280[8] = {&l_146[3][1],&l_146[3][1],&l_146[3][1],&l_146[3][1],&l_146[3][1],&l_146[3][1],&l_146[3][1],&l_146[3][1]};
                int8_t l_284 = 0x84L;
                int32_t *l_289[4];
                int32_t **l_288[10][9][1] = {{{(void*)0},{(void*)0},{&l_289[3]},{&l_289[2]},{&l_289[0]},{&l_289[3]},{&l_289[3]},{&l_289[3]},{(void*)0}},{{&l_289[3]},{(void*)0},{&l_289[3]},{&l_289[3]},{&l_289[3]},{&l_289[0]},{&l_289[2]},{&l_289[3]},{(void*)0}},{{(void*)0},{&l_289[3]},{&l_289[2]},{&l_289[0]},{&l_289[3]},{&l_289[3]},{&l_289[3]},{(void*)0},{&l_289[3]}},{{(void*)0},{&l_289[3]},{&l_289[3]},{&l_289[3]},{&l_289[0]},{&l_289[2]},{&l_289[3]},{(void*)0},{(void*)0}},{{&l_289[3]},{&l_289[2]},{&l_289[0]},{&l_289[3]},{&l_289[3]},{&l_289[3]},{(void*)0},{&l_289[3]},{(void*)0}},{{&l_289[3]},{&l_289[3]},{&l_289[3]},{&l_289[0]},{&l_289[2]},{&l_289[3]},{(void*)0},{(void*)0},{&l_289[3]}},{{&l_289[2]},{&l_289[0]},{&l_289[3]},{&l_289[3]},{&l_289[3]},{(void*)0},{&l_289[3]},{(void*)0},{&l_289[3]}},{{&l_289[3]},{&l_289[3]},{&l_289[0]},{&l_289[2]},{&l_289[3]},{(void*)0},{(void*)0},{&l_289[3]},{&l_289[2]}},{{&l_289[0]},{&l_289[3]},{&l_289[3]},{&l_289[3]},{(void*)0},{&l_289[3]},{(void*)0},{&l_289[3]},{&l_289[3]}},{{&l_289[3]},{&l_289[0]},{&l_289[2]},{&l_289[3]},{(void*)0},{(void*)0},{&l_289[3]},{&l_289[2]},{&l_289[0]}}};
                int16_t l_301 = 0x87B8L;
                struct S0 l_314 = {0xC08282A2L,9L,-4L,590,6L,0L,0x62L,560,0x83L};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_289[i] = &l_167;
            }
        }
    }
    if (((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((*l_118) , (safe_div_func_uint16_t_u_u(((((l_145.f3 = (!(((((g_144 , (-1L)) | (safe_lshift_func_uint8_t_u_u((0x11AAL ^ 0xFB6EL), 2))) < p_88) != (safe_sub_func_int8_t_s_s((((safe_div_func_int32_t_s_s(((*l_118) , (l_145.f2 | (safe_rshift_func_int16_t_s_u((l_337 == (void*)0), l_115.f1)))), l_145.f3)) , l_145.f3) == l_97[0][0]), l_97[0][0]))) >= 0x3234L))) > (***g_116)) <= l_145.f0) < p_88), l_115.f2))), (*g_7))) > l_338), p_88)) == g_93))
    {
        int8_t l_340 = (-6L);
        int16_t *l_347 = &g_42.f1;
        int32_t l_351 = 0xBD37AEF0L;
        l_353[0] &= (((+(l_340 >= (safe_add_func_uint8_t_u_u(p_88, (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((*l_337) == l_347) >= (((((*g_116) = (*g_116)) == l_348[0][4][4]) > ((void*)0 != &g_298)) != ((safe_mod_func_uint8_t_u_u(((l_351 = 3UL) || (*g_7)), 0x74L)) ^ g_42.f0))), 0L)), l_352)))))) | l_340) && (*g_136));
    }
    else
    {
        const int16_t ***l_361 = (void*)0;
        const int16_t ***l_362 = &l_359;
        const int16_t ***l_363 = (void*)0;
        const int16_t **l_365 = &l_360;
        const int16_t ***l_364[2];
        int8_t *l_368 = (void*)0;
        int8_t *l_369[4];
        int32_t l_370 = (-4L);
        uint8_t *l_375[7] = {&g_83[2],&g_83[2],&g_83[0],&g_83[2],&g_83[2],&g_83[0],&g_83[2]};
        int32_t l_376[2];
        int32_t l_377 = 0x5F907354L;
        int8_t l_435 = 0xFDL;
        int32_t l_441[8] = {0x83D03F56L,(-1L),(-1L),0x83D03F56L,(-1L),(-1L),0x83D03F56L,(-1L)};
        int i;
        for (i = 0; i < 2; i++)
            l_364[i] = &l_365;
        for (i = 0; i < 4; i++)
            l_369[i] = &g_147.f0;
        for (i = 0; i < 2; i++)
            l_376[i] = 0x50DDC316L;
lbl_420:
        for (g_147.f0 = 0; (g_147.f0 < (-27)); --g_147.f0)
        {
            struct S2 l_356 = {13,-103,248,456};
            struct S2 *l_357[10][9] = {{(void*)0,&g_144,&g_144,&l_145,&l_145,&l_356,&l_145,&g_144,&l_145},{&g_144,&l_356,&l_356,&l_356,(void*)0,&l_145,&l_356,&l_145,(void*)0},{&l_145,(void*)0,&l_356,&l_356,&l_356,&g_144,&g_144,&g_144,&g_144},{&l_356,&l_145,&l_145,&l_145,&l_356,&l_145,&g_144,&l_145,&l_356},{(void*)0,&g_144,&l_356,(void*)0,&g_144,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,(void*)0,&l_356,&l_356,&l_145,&l_145,&l_356,&l_356},{&l_356,&g_144,&l_356,(void*)0,&l_356,&g_144,&g_144,&l_145,&l_145},{&l_145,(void*)0,&g_144,&l_356,&g_144,&l_145,&l_145,(void*)0,&g_144},{&g_144,&g_144,(void*)0,(void*)0,&l_356,&l_356,(void*)0,(void*)0,&g_144},{(void*)0,(void*)0,(void*)0,&l_356,&l_356,(void*)0,&g_144,(void*)0,&l_356}};
            struct S2 l_358 = {39,-991,85,434};
            int i, j;
            g_93 = (p_87 == (void*)0);
            l_358 = l_356;
        }
        if ((l_377 = ((*g_318) , ((g_303.f0 = (((((l_366 = ((*l_362) = l_359)) == (void*)0) >= (l_370 = (0x0D78L && (!g_147.f0)))) , l_371) == &l_372)) < (l_376[1] &= (safe_lshift_func_int8_t_s_u(p_88, 0)))))))
        {
            uint8_t l_414 = 0x57L;
            int32_t **l_415[10][4][3] = {{{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{(void*)0,&l_372,(void*)0},{&l_372,&l_372,&l_372}},{{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0}},{{(void*)0,&l_372,&l_372},{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{(void*)0,(void*)0,(void*)0}},{{&l_372,&l_372,(void*)0},{&l_372,&l_372,&l_372},{&l_372,(void*)0,(void*)0},{&l_372,&l_372,(void*)0}},{{&l_372,&l_372,(void*)0},{(void*)0,&l_372,(void*)0},{&l_372,&l_372,&l_372},{&l_372,&l_372,(void*)0}},{{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{(void*)0,&l_372,&l_372}},{{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_372,&l_372,(void*)0}},{{&l_372,&l_372,&l_372},{&l_372,(void*)0,(void*)0},{&l_372,&l_372,(void*)0},{&l_372,&l_372,(void*)0}},{{(void*)0,&l_372,(void*)0},{&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372},{&l_372,&l_372,(void*)0}},{{&l_372,&l_372,(void*)0},{&l_372,(void*)0,&l_372},{&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372}}};
            uint32_t l_424 = 0x557E145BL;
            const struct S0 l_436 = {0xDF6AB66CL,0L,0xBD326120L,547,-9L,0L,0L,1204,0x0FL};
            const uint8_t l_437 = 0UL;
            int32_t l_438 = 0x25D4755CL;
            int i, j, k;
            if (p_88)
            {
                int32_t l_413 = 1L;
                int32_t **l_416 = &l_372;
                int32_t l_417 = (-9L);
                (**g_298) = (**g_298);
                for (g_169 = 0; (g_169 == (-25)); g_169--)
                {
                    const int32_t ***l_391 = (void*)0;
                    const int32_t ***l_392 = &g_389;
                    for (l_114 = 23; (l_114 != (-15)); --l_114)
                    {
                        if ((***g_116))
                            break;
                    }
                    p_87 = func_24(((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((~(safe_sub_func_uint8_t_u_u((&p_87 != ((*l_392) = g_389)), ((p_88 , (l_417 &= ((safe_sub_func_uint8_t_u_u((++g_83[1]), (((l_376[1] && p_88) , (((((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(g_169, (safe_div_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_413 = (((g_112[1][1][4] , g_93) == p_88) ^ 0xA530B490L)), 7)), g_147.f1)) ^ 0L) < g_144.f3) | 0xE5L), 6)), (*g_136))), p_88)) , p_88) | 1UL) && 6L), p_88)))), p_88)) , p_88) ^ l_414) != p_88) , l_415[1][1][0])) != l_416))) , l_413))) < g_110)))), g_42.f0)), p_88)) ^ (***g_116)));
                    ((void) sizeof ((p_87 == 0) ? 1 : 0), __extension__ ({ if (p_87 == 0) ; else __assert_fail ("p_87 == 0", "/tmp/tmpyf59mxed.c", 545, __extension__ __PRETTY_FUNCTION__); }));
                    for (l_370 = 15; (l_370 == (-18)); l_370 = safe_sub_func_int8_t_s_s(l_370, 3))
                    {
                        return p_88;
                    }
                }
                if (g_144.f0)
                    goto lbl_420;
            }
            else
            {
                int32_t l_421 = (-1L);
                int32_t l_439 = 0L;
                l_439 &= (l_421 >= (l_414 < ((((safe_add_func_int16_t_s_s(l_424, l_370)) , (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_144.f2, (p_88 , ((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_376[1] && (safe_mod_func_int8_t_s_s(l_435, (g_303.f0 = ((((l_436 , 0x87F4L) && l_377) & l_437) | (*g_7)))))), p_88)) && l_438), 8)) , g_110)))), 0x3A843BA5L))) > p_88) , 0x89L)));
            }
        }
        else
        {
            int32_t l_440 = 0xD518D7FAL;
            int8_t ***l_444 = (void*)0;
            int8_t ***l_445 = &l_442;
            int8_t **l_447 = &l_443;
            int8_t ***l_446 = &l_447;
            l_441[1] |= l_440;
            (*l_446) = ((*l_445) = l_442);
            g_144.f3 = p_88;
        }
        ((void) sizeof ((l_366 == &l_360) ? 1 : 0), __extension__ ({ if (l_366 == &l_360) ; else __assert_fail ("l_366 == &l_360", "/tmp/tmpyf59mxed.c", 573, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((l_366 == &l_360 || l_366 == 0) ? 1 : 0), __extension__ ({ if (l_366 == &l_360 || l_366 == 0) ; else __assert_fail ("l_366 == &l_360 || l_366 == 0", "/tmp/tmpyf59mxed.c", 576, __extension__ __PRETTY_FUNCTION__); }));
    (*g_299) = (*g_299);
    return p_88;
}
static uint32_t func_94(int32_t p_95, struct S0 * p_96)
{
    int16_t *l_134 = &g_42.f1;
    int16_t **l_133 = &l_134;
    g_135 = l_133;
    ((void) sizeof ((g_135 == &l_134) ? 1 : 0), __extension__ ({ if (g_135 == &l_134) ; else __assert_fail ("g_135 == &l_134", "/tmp/tmpyf59mxed.c", 593, __extension__ __PRETTY_FUNCTION__); }));
    return g_42.f1;
}
static struct S0 * func_98(int32_t ** p_99, int32_t *** p_100, const struct S0 * p_101, const int32_t * p_102, int32_t p_103)
{
    int16_t l_121[10] = {7L,7L,7L,7L,7L,7L,7L,7L,7L,7L};
    int32_t *l_122 = &g_93;
    int32_t * const l_128[6] = {&g_8,&g_8,&g_8,&g_8,&g_8,&g_8};
    int32_t l_129 = 0xF7F33B7EL;
    struct S1 l_130 = {-1L,0xC08455DCL};
    struct S1 *l_131 = &l_130;
    struct S0 *l_132 = (void*)0;
    int i;
    l_129 = ((p_103 >= (safe_div_func_int32_t_s_s(((*l_122) = l_121[3]), (**p_99)))) , (safe_unary_minus_func_uint16_t_u((0x719D3565L && ((*p_101) , ((safe_lshift_func_int16_t_s_u(0x1400L, (safe_add_func_int32_t_s_s((p_103 = ((g_110 ^ ((((((l_122 = (**g_116)) == l_128[5]) != g_93) , g_42.f8) <= 0x786FL) > p_103)) >= 0x89D4L)), (**p_99))))) >= g_42.f2))))));
    ((void) sizeof ((l_122 == &g_93 || l_122 == &g_8) ? 1 : 0), __extension__ ({ if (l_122 == &g_93 || l_122 == &g_8) ; else __assert_fail ("l_122 == &g_93 || l_122 == &g_8", "/tmp/tmpyf59mxed.c", 617, __extension__ __PRETTY_FUNCTION__); }));
    (*l_131) = l_130;
    return l_132;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1, "g_42.f1", print_hash_value);
    transparent_crc(g_42.f2, "g_42.f2", print_hash_value);
    transparent_crc(g_42.f3, "g_42.f3", print_hash_value);
    transparent_crc(g_42.f4, "g_42.f4", print_hash_value);
    transparent_crc(g_42.f5, "g_42.f5", print_hash_value);
    transparent_crc(g_42.f6, "g_42.f6", print_hash_value);
    transparent_crc(g_42.f7, "g_42.f7", print_hash_value);
    transparent_crc(g_42.f8, "g_42.f8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_112[i][j][k], "g_112[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_144.f2, "g_144.f2", print_hash_value);
    transparent_crc(g_144.f3, "g_144.f3", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_303.f0, "g_303.f0", print_hash_value);
    transparent_crc(g_303.f1, "g_303.f1", print_hash_value);
    transparent_crc(g_452.f0, "g_452.f0", print_hash_value);
    transparent_crc(g_452.f1, "g_452.f1", print_hash_value);
    transparent_crc(g_452.f2, "g_452.f2", print_hash_value);
    transparent_crc(g_452.f3, "g_452.f3", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
