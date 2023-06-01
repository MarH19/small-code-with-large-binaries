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
static int32_t g_3 = 0x01C08901L;
static int32_t g_18 = 0xB6BC3EC3L;
static int32_t g_26[9] = {0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L};
static int32_t g_30 = 0xEDFC3E8CL;
static int16_t g_49 = 0x00C0L;
static int32_t *g_75[10] = {&g_3, &g_26[7], &g_3, &g_26[7], &g_3, &g_26[7], &g_3, &g_26[7], &g_3, &g_26[7]};
static int32_t ** const g_74[10] = {&g_75[9], &g_75[9], &g_75[4], &g_75[9], &g_75[9], &g_75[4], &g_75[9], &g_75[9], &g_75[4], &g_75[9]};
static int32_t g_116 = 0x69094389L;
static int32_t *g_136 = &g_26[6];
static uint32_t g_140 = 0x46C4C103L;
static uint32_t *g_139 = &g_140;
static uint32_t **g_138 = &g_139;
static uint32_t ***g_137[5] = {&g_138, (void*)0, &g_138, (void*)0, &g_138};
static uint16_t g_157 = 0x8E43L;
static uint64_t g_165 = 0UL;
static uint8_t g_174 = 0x8EL;
static uint8_t g_178 = 0xE9L;
static uint16_t g_199 = 0x70E5L;
static int16_t g_202 = (-3L);
static uint16_t g_204 = 65535UL;
static int16_t g_239 = 1L;
static int64_t g_242 = (-8L);
static uint8_t *g_245[8] = {(void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178};
static uint32_t g_288 = 0x937974BFL;
static int32_t **g_292 = &g_75[4];
static int8_t g_347[5] = {2L, 1L, 2L, 1L, 2L};
static uint64_t g_365 = 0UL;
static uint32_t g_368 = 4294967295UL;
static const int32_t *g_380 = (void*)0;
static int8_t *g_397 = (void*)0;
static int64_t g_403 = 0xB7706F351F476ADCLL;
static int32_t g_406 = 0L;
static int32_t ***g_435 = &g_292;
static int32_t ****g_434 = &g_435;
static int16_t g_483 = 0x0035L;
static int32_t g_498 = 6L;
static int32_t * const *g_546 = &g_136;
static int32_t * const * const *g_545 = &g_546;
static int32_t * const * const **g_544 = &g_545;
static int32_t * const * const ***g_543 = &g_544;
static int16_t *g_606[5][5] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
static int16_t **g_605 = &g_606[0][0];
static int16_t **g_609 = (void*)0;
static int64_t *g_675 = &g_242;
static int64_t ** const g_674 = &g_675;
static const uint32_t *g_763 = &g_288;
static const uint32_t ** const g_762 = &g_763;
static const uint32_t ** const *g_761[9] = {&g_762, &g_762, &g_762, &g_762, &g_762, &g_762, &g_762, &g_762, &g_762};
static int32_t g_817 = (-7L);
static const uint32_t func_1(void);
static uint16_t func_10(const int32_t * p_11, int64_t p_12, uint16_t p_13);
static int32_t func_14(int64_t p_15, const uint16_t p_16, const uint8_t p_17);
static int32_t ** func_58(int8_t p_59, int32_t p_60, int32_t ** p_61, int8_t p_62, int8_t p_63);
static int16_t func_66(int32_t * p_67);
static int32_t * func_68(int32_t ** const p_69, int32_t p_70, int32_t p_71, int32_t ** p_72, int32_t p_73);
static int32_t ** func_76(int32_t ** p_77, int32_t * p_78, uint32_t p_79);
static int32_t ** func_80(int32_t ** p_81, int32_t ** p_82, int32_t * p_83, int32_t p_84, int32_t * p_85);
static int32_t * func_86(int32_t ** p_87);
static int32_t func_96(uint16_t p_97, uint32_t p_98);
static const uint32_t func_1(void)
{
    int32_t *l_2 = &g_3;
    uint16_t *l_768[6];
    uint32_t l_779[5] = {0x6E30241EL, 0xE6720170L, 0x6E30241EL, 0xE6720170L, 0x6E30241EL};
    uint8_t l_780 = 247UL;
    int8_t l_797 = 1L;
    int32_t l_804 = 0L;
    int32_t l_806 = (-4L);
    int32_t l_811 = 0x808D6099L;
    int32_t l_813 = 1L;
    int32_t l_816 = 9L;
    int32_t l_819 = 7L;
    int32_t l_822[1];
    uint16_t l_826 = 4UL;
    uint8_t **l_831 = &g_245[3];
    int16_t l_851[6][9][4] = {{{1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}}, {{1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}}, {{1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}}, {{1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}}, {{1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}}, {{1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}, {1L, 0x1929L, 0x995CL, 0x1929L}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_768[i] = &g_199;
    for (i = 0; i < 1; i++)
        l_822[i] = 0x5D3D0B6EL;
lbl_782:
    (*l_2) ^= (-3L);
    if (((g_204 = (((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((*l_2), (*l_2))), (((*****g_543) = (func_10(&g_3, ((*l_2) == func_14(g_18, (*l_2), g_18)), ((*l_2) , 0xD2D1L)) , (*l_2))) & g_347[0]))), 13)) , (*l_2)) , g_140)) , (***g_435)))
    {
        uint8_t l_773 = 0UL;
        int16_t *l_781 = &g_202;
        (*g_292) = ((safe_rshift_func_uint8_t_u_s((((((safe_sub_func_uint16_t_u_u((l_773 || (*l_2)), (*l_2))) <= (((+(**g_546)) || 4294967294UL) < (((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((((*l_2) , (void*)0) != ((*g_434) = (((l_779[2] || ((((*l_781) = ((g_18 || 3L) >= l_780)) <= 0x3803L) != g_365)) >= g_403) , (*g_434)))), (**g_674))), 5)) != 0xB2B8L) || 0x57L))) | (*l_2)) && g_26[4]) || g_165), 0)) , l_2);
    }
    else
    {
        uint8_t l_783 = 253UL;
        int32_t l_798 = (-4L);
        int32_t l_799 = 0x6D617326L;
        int32_t l_800 = 0x00D4AD0CL;
        int32_t l_803 = 4L;
        int32_t l_805 = 0x9094F1F6L;
        int32_t l_807 = 0x18D548CFL;
        int32_t l_808 = 0x7ACCCC8EL;
        int32_t l_809 = 0x10DFCA4FL;
        int32_t l_812 = 0x0C20502CL;
        int32_t l_814[4] = {(-1L), (-1L), (-1L), (-1L)};
        int i;
        if (g_403)
            goto lbl_782;
        (**g_292) ^= l_783;
        for (g_157 = 15; (g_157 > 22); g_157 = safe_add_func_int32_t_s_s(g_157, 1))
        {
            uint32_t l_794 = 0x96C16DBDL;
            int32_t l_801[4] = {0xEA2510EEL, 0x336D3944L, 0xEA2510EEL, 0x336D3944L};
            int i;
            (*g_136) ^= 1L;
            for (g_30 = (-7); (g_30 <= 10); g_30 = safe_add_func_uint32_t_u_u(g_30, 9))
            {
                int32_t **l_788[8];
                int16_t l_825 = 9L;
                int i;
                for (i = 0; i < 8; i++)
                    l_788[i] = &l_2;
                (*g_292) = func_86(l_788[1]);
                for (g_498 = 9; (g_498 < 18); g_498 = safe_add_func_int64_t_s_s(g_498, 3))
                {
                    for (g_204 = 0; (g_204 <= 4); g_204 += 1)
                    {
                        int i;
                        if (g_347[g_204])
                            break;
                        (**g_435) = func_86((**g_434));
                    }
                }
                for (g_116 = 0; (g_116 > (-20)); g_116 = safe_sub_func_uint16_t_u_u(g_116, 7))
                {
                    int64_t l_793 = 0x909E07CBA3283612LL;
                    int32_t l_802 = 0xD1BAAFF7L;
                    int32_t l_810 = (-7L);
                    int32_t l_815 = 0x144BDD95L;
                    int32_t l_818 = 0L;
                    int32_t l_820 = (-5L);
                    int32_t l_821 = 0L;
                    int32_t l_823 = 0x4911ACBEL;
                    int32_t l_824 = (-10L);
                    l_794--;
                    --l_826;
                    (*****g_543) |= 0x654D886CL;
                }
            }
        }
    }
    for (g_817 = 15; (g_817 < 2); g_817 = safe_sub_func_int8_t_s_s(g_817, 1))
    {
        uint8_t l_850 = 255UL;
        uint32_t *l_858 = (void*)0;
        int32_t l_867 = 0x24F024B4L;
        int32_t l_869 = (-6L);
        int32_t l_870 = 1L;
        int32_t l_871 = 6L;
        int32_t l_872 = (-10L);
        int32_t l_873 = 0L;
        int32_t l_874[1][9][6] = {{{5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}, {5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}}};
        int64_t l_875 = 0x7BFF7E2D3CA482DELL;
        uint16_t l_877 = 65526UL;
        int i, j, k;
        (*****g_543) = (l_831 == &g_245[2]);
    }
    (*****g_543) |= (*l_2);
    return g_18;
}
static uint16_t func_10(const int32_t * p_11, int64_t p_12, uint16_t p_13)
{
    uint64_t l_46 = 0UL;
    int32_t l_50 = 0xF121ADF5L;
    int32_t **l_314 = (void*)0;
    int8_t *l_398 = &g_347[1];
    int32_t l_417[1];
    int16_t l_418 = (-6L);
    uint32_t l_422 = 3UL;
    int64_t l_427[1][4][5] = {{{9L, 0xFF37A099B1CD3BD6LL, 9L, 0xFF37A099B1CD3BD6LL, 9L}, {9L, 0xFF37A099B1CD3BD6LL, 9L, 0xFF37A099B1CD3BD6LL, 9L}, {9L, 0xFF37A099B1CD3BD6LL, 9L, 0xFF37A099B1CD3BD6LL, 9L}, {9L, 0xFF37A099B1CD3BD6LL, 9L, 0xFF37A099B1CD3BD6LL, 9L}}};
    uint32_t l_451 = 0UL;
    uint64_t l_465 = 0x4E1AA4A55B05672ELL;
    uint8_t l_472 = 251UL;
    int16_t *l_547 = &l_418;
    int32_t ****l_580[3][2] = {{&g_435, &g_435}, {&g_435, &g_435}, {&g_435, &g_435}};
    int16_t **l_608[9] = {&g_606[0][0], &g_606[0][0], (void*)0, &g_606[0][0], &g_606[0][0], (void*)0, &g_606[0][0], &g_606[0][0], (void*)0};
    const int8_t *l_657 = (void*)0;
    const int64_t l_671 = 0xE46EC89A96692E73LL;
    int16_t l_696 = 8L;
    const int64_t *l_756 = &l_427[0][3][4];
    const int64_t **l_755 = &l_756;
    int32_t l_757 = 0x6C80894AL;
    int16_t l_767 = 0x48B7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_417[i] = 0x27A57084L;
    for (g_18 = 0; (g_18 != (-9)); g_18--)
    {
        int32_t l_45 = (-3L);
        for (p_12 = 17; (p_12 == 18); p_12 = safe_add_func_uint64_t_u_u(p_12, 1))
        {
            uint64_t l_33[2][6][3] = {{{0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}}, {{0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}}};
            int i, j, k;
            for (p_13 = 0; (p_13 > 44); ++p_13)
            {
                int32_t *l_36 = &g_26[4];
                int32_t *l_37 = &g_30;
                int32_t *l_38 = (void*)0;
                int32_t *l_39 = &g_26[0];
                int32_t *l_40 = &g_26[4];
                int32_t *l_41 = &g_30;
                int32_t *l_42 = (void*)0;
                int32_t *l_43 = &g_26[4];
                int32_t *l_44[9][2];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_44[i][j] = &g_30;
                }
                for (g_26[4] = 0; (g_26[4] == 23); ++g_26[4])
                {
                    int32_t *l_29 = &g_30;
                    int32_t *l_31 = (void*)0;
                    int32_t *l_32[8] = {&g_26[4], &g_30, &g_26[4], &g_30, &g_26[4], &g_30, &g_26[4], &g_30};
                    int i;
                    l_33[1][4][1]--;
                }
                l_46++;
                if (g_49)
                    continue;
            }
        }
        l_50 &= ((void*)0 != &g_3);
    }
    return l_767;
}
static int32_t func_14(int64_t p_15, const uint16_t p_16, const uint8_t p_17)
{
    int64_t l_19 = 0x3303773672D714F9LL;
    return l_19;
}
static int32_t ** func_58(int8_t p_59, int32_t p_60, int32_t ** p_61, int8_t p_62, int8_t p_63)
{
    uint8_t *l_317 = &g_174;
    uint32_t *** const l_318 = &g_138;
    const int32_t l_319 = (-1L);
    int64_t *l_322[8];
    int32_t l_323 = 0xD39D242DL;
    uint64_t *l_324 = &g_165;
    int32_t *l_325[4][5] = {{(void*)0, &g_18, (void*)0, &g_18, (void*)0}, {(void*)0, &g_18, (void*)0, &g_18, (void*)0}, {(void*)0, &g_18, (void*)0, &g_18, (void*)0}, {(void*)0, &g_18, (void*)0, &g_18, (void*)0}};
    uint16_t *l_339 = &g_199;
    const int32_t l_345 = 0L;
    uint32_t l_348 = 0x90AC5276L;
    int32_t l_349 = 0L;
    int32_t **l_350 = (void*)0;
    int i, j;
    for (i = 0; i < 8; i++)
        l_322[i] = &g_242;
    (*g_136) = (safe_add_func_uint8_t_u_u(((*l_317) = 0x05L), ((p_59 < ((((((*l_324) = ((0x75828B78B4E161E2LL ^ ((((void*)0 == l_318) >= ((g_242 , l_319) || 246UL)) , (g_242 ^= (l_323 = (safe_mod_func_uint64_t_u_u((g_49 <= p_62), p_60)))))) , g_30)) , 0x3E07E041AA28781ALL) && l_323) == l_319) >= 0x9B3D8044210E2D0ELL)) , l_323)));
    l_325[3][0] = &p_60;
    for (g_174 = (-17); (g_174 >= 32); g_174 = safe_add_func_uint8_t_u_u(g_174, 1))
    {
        uint32_t l_331[3][8][10] = {{{0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}}, {{0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}}, {{0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}, {0UL, 18446744073709551615UL, 0x064E38AAL, 1UL, 0UL, 8UL, 0UL, 0xC8A64BDDL, 0UL, 0x0DC02623L}}};
        uint32_t l_344 = 2UL;
        int8_t *l_346 = &g_347[1];
        int i, j, k;
        for (g_178 = 0; (g_178 <= 18); ++g_178)
        {
            int32_t **l_330 = &l_325[3][0];
            return &g_75[4];
        }
        if (l_331[2][5][4])
            continue;
        l_349 |= ((safe_sub_func_int8_t_s_s(((*l_346) &= (g_165 || (((safe_unary_minus_func_uint8_t_u(p_59)) != ((((g_26[4] <= ((p_62 && (safe_lshift_func_uint16_t_u_s((((((((void*)0 != l_339) != ((248UL > 0UL) , (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((l_331[1][7][9] == (*g_136)), 1)) == 0x02F2C5A303774D24LL), l_331[2][1][4])))) >= l_344) >= 2UL) && 1L) || p_59), l_345))) <= 18446744073709551610UL)) | g_26[6]) , p_63) != g_30)) != p_62))), l_344)) != l_348);
    }
    for (g_202 = 5; (g_202 >= 0); g_202 -= 1)
    {
        for (l_323 = 0; (l_323 <= 7); l_323 += 1)
        {
            for (g_239 = 0; g_239 < 5; g_239 += 1)
            {
                g_347[g_239] = 0xB4L;
            }
        }
    }
    return l_350;
}
static int16_t func_66(int32_t * p_67)
{
    uint32_t l_313[5] = {1UL, 0UL, 1UL, 0UL, 1UL};
    int i;
    p_67 = p_67;
    return l_313[1];
}
static int32_t * func_68(int32_t ** const p_69, int32_t p_70, int32_t p_71, int32_t ** p_72, int32_t p_73)
{
    int8_t l_304 = 0L;
    uint32_t l_307 = 18446744073709551608UL;
    int32_t l_308[8] = {0xC9E83989L, 0x3974364DL, 0xC9E83989L, 0x3974364DL, 0xC9E83989L, 0x3974364DL, 0xC9E83989L, 0x3974364DL};
    uint32_t ***l_311 = &g_138;
    int i;
    for (g_140 = 1; (g_140 <= 9); g_140 += 1)
    {
        int16_t *l_305[8] = {&g_202, &g_49, &g_202, &g_49, &g_202, &g_49, &g_202, &g_49};
        int32_t l_306 = 2L;
        int32_t ** const *l_310 = &g_292;
        int32_t ** const **l_309 = &l_310;
        uint32_t ***l_312[6][8] = {{&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}};
        int i, j;
        (*p_72) = func_86(p_72);
        l_308[4] = (((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((((g_18 == (((safe_sub_func_int32_t_s_s((&g_242 == (void*)0), (((((0xE63BL && (l_306 |= (((0xAEL < (((0L != 0xC8L) & (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(l_304, p_71)) > 65529UL), l_304)) > g_157), p_70))) , 8L)) , 0x1C4BEF6FL) <= 0x9AA41E39L))) <= 0x88A12A88L) , g_75[g_140]) != g_75[g_140]) , p_73))) && 0xBAF28728338B1BC0LL) | p_71)) , l_307) < p_71))), p_73)) , g_202) , (-2L));
        (*l_309) = &p_69;
        (*g_136) = (l_311 == l_312[3][5]);
    }
    return (*p_72);
}
static int32_t ** func_76(int32_t ** p_77, int32_t * p_78, uint32_t p_79)
{
    uint32_t ***l_141 = (void*)0;
    int32_t l_168 = (-1L);
    int32_t *l_191 = &g_116;
    int32_t l_210 = 1L;
    int32_t l_211 = 0xC4EB74D9L;
    int32_t l_212 = 0x1C22BA50L;
    uint32_t l_217 = 0x1ADAEAB5L;
    int32_t *l_271 = &g_30;
    uint16_t *l_275[8] = {&g_157, (void*)0, &g_157, (void*)0, &g_157, (void*)0, &g_157, (void*)0};
    int32_t l_285 = 0xC044EE1DL;
    int32_t l_286 = 0L;
    int32_t l_287 = 3L;
    int32_t **l_291 = &l_271;
    int i;
lbl_220:
    l_141 = g_137[1];
    for (g_49 = 0; (g_49 == (-2)); g_49 = safe_sub_func_int16_t_s_s(g_49, 5))
    {
        int32_t l_160[7] = {0x155AEE4DL, (-1L), 0x155AEE4DL, (-1L), 0x155AEE4DL, (-1L), 0x155AEE4DL};
        uint32_t ***l_169 = &g_138;
        uint8_t *l_173 = &g_174;
        uint8_t *l_177 = &g_178;
        int32_t l_179[4][6] = {{(-8L), 0x7FC37B35L, 0xF2B0C0EAL, 0x7FC37B35L, (-8L), 1L}, {(-8L), 0x7FC37B35L, 0xF2B0C0EAL, 0x7FC37B35L, (-8L), 1L}, {(-8L), 0x7FC37B35L, 0xF2B0C0EAL, 0x7FC37B35L, (-8L), 1L}, {(-8L), 0x7FC37B35L, 0xF2B0C0EAL, 0x7FC37B35L, (-8L), 1L}};
        uint16_t *l_197 = (void*)0;
        uint16_t *l_198 = &g_199;
        int16_t *l_200 = (void*)0;
        int16_t *l_201[2];
        uint16_t * const l_203 = &g_204;
        uint32_t l_213[4][5] = {{0x190F3A04L, 0x69774089L, 0xB1421453L, 18446744073709551610UL, 18446744073709551610UL}, {0x190F3A04L, 0x69774089L, 0xB1421453L, 18446744073709551610UL, 18446744073709551610UL}, {0x190F3A04L, 0x69774089L, 0xB1421453L, 18446744073709551610UL, 18446744073709551610UL}, {0x190F3A04L, 0x69774089L, 0xB1421453L, 18446744073709551610UL, 18446744073709551610UL}};
        int8_t l_216[10] = {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L};
        int i, j;
        for (i = 0; i < 2; i++)
            l_201[i] = &g_202;
        for (g_140 = 0; (g_140 == 7); g_140 = safe_add_func_int8_t_s_s(g_140, 5))
        {
            uint32_t *** const l_152 = &g_138;
            uint16_t *l_155 = (void*)0;
            uint16_t *l_156 = &g_157;
            uint64_t *l_164 = &g_165;
            int8_t l_170 = 0xFCL;
            (*g_136) ^= ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((((void*)0 != &g_116) == (((void*)0 != l_152) == (safe_sub_func_int8_t_s_s(((((((((*l_156)--) == (l_160[3] , (safe_sub_func_uint32_t_u_u(((((-2L) | (safe_unary_minus_func_int16_t_s((g_140 & ((*l_164) = 18446744073709551612UL))))) | (safe_add_func_uint8_t_u_u((g_3 >= 0xE6C51A86194B4543LL), 0x0CL))) & p_79), l_168)))) , (void*)0) != l_169) , g_49) || l_170) , 0xB3L), l_170)))) < 255UL), 3)) >= l_160[3]), g_3)) , (-1L));
        }
        (*p_77) = ((safe_lshift_func_uint8_t_u_s((l_168 = (((*l_169) != (void*)0) > (l_179[2][3] = ((*l_177) |= ((*l_173)++))))), 3)) , func_86((p_79 , &p_78)));
        if (((((safe_rshift_func_int16_t_s_u(((l_179[2][3] = (((((*l_177) = (safe_unary_minus_func_int8_t_s((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((p_79 ^ (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((l_191 == p_78), (((*l_198) = (g_157 = ((l_168 != (safe_sub_func_int8_t_s_s((&g_136 != &g_136), (+((void*)0 != (*l_169)))))) > ((safe_mod_func_uint16_t_u_u((((*p_77) == (*p_77)) ^ (*p_78)), l_168)) < l_168)))) || p_79))) != l_168), g_174))), g_30)), p_79))))) < l_179[2][3]) | l_168) | p_79)) < 65535UL), 1)) , (void*)0) != l_203) & l_168))
        {
            (*p_77) = (*p_77);
            (*p_78) = (safe_lshift_func_int16_t_s_s(0xC597L, 7));
        }
        else
        {
            int32_t *l_207 = &g_26[4];
            int32_t *l_208 = &l_179[2][3];
            int32_t *l_209[2];
            int i;
            for (i = 0; i < 2; i++)
                l_209[i] = (void*)0;
            l_213[3][4]++;
            l_217--;
            (*l_207) |= (*l_208);
            if (g_30)
                goto lbl_220;
        }
        for (g_30 = 2; (g_30 != 22); ++g_30)
        {
            int64_t l_233 = 0x10087D275BA9C812LL;
            int32_t l_238[5][4] = {{0xA2719FA1L, 0L, 0xA2719FA1L, 0L}, {0xA2719FA1L, 0L, 0xA2719FA1L, 0L}, {0xA2719FA1L, 0L, 0xA2719FA1L, 0L}, {0xA2719FA1L, 0L, 0xA2719FA1L, 0L}, {0xA2719FA1L, 0L, 0xA2719FA1L, 0L}};
            uint8_t *l_243 = &g_174;
            uint16_t l_266 = 2UL;
            uint8_t **l_282 = &g_245[3];
            int32_t *l_284[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_284[i] = &l_238[1][1];
            for (g_157 = 0; (g_157 <= 12); g_157 = safe_add_func_uint32_t_u_u(g_157, 6))
            {
                int8_t *l_240 = (void*)0;
                int8_t *l_241 = (void*)0;
                int32_t l_261 = 0x89C8545CL;
                int32_t l_262 = 7L;
                int32_t l_263 = 0xC2D4CE48L;
                int32_t l_264 = (-9L);
                int32_t l_265 = 0x9C654983L;
                int64_t *l_272 = &l_233;
                int32_t **l_283[4] = {&g_75[8], &g_75[4], &g_75[8], &g_75[4]};
                int i;
                if ((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((g_242 |= ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((-8L) != 4294967295UL), (((((l_233 , ((safe_rshift_func_int8_t_s_s(((g_239 = (((p_79 < ((g_204 != p_79) || ((-1L) == (l_238[3][1] = (&p_79 != ((*g_138) = func_86(&p_78))))))) , p_79) != g_3)) , g_165), g_174)) != p_79)) , p_79) | (-8L)) > l_160[3]) , p_79))), 1UL)) >= l_179[2][3])), 4)), 1UL)))
                {
                    uint8_t **l_244[8] = {(void*)0, &l_243, (void*)0, &l_243, (void*)0, &l_243, (void*)0, &l_243};
                    int32_t *l_246 = &l_168;
                    int i;
                    if (((*l_246) |= ((*g_136) = (p_79 && (l_173 != (g_245[3] = l_243))))))
                    {
                        (*g_136) = 4L;
                    }
                    else
                    {
                        return &g_75[3];
                    }
                }
                else
                {
                    uint16_t l_250 = 65530UL;
                    int32_t *l_253 = &l_211;
                    int32_t *l_254 = &l_210;
                    int32_t *l_255 = &l_238[1][1];
                    int32_t *l_256 = &l_238[3][2];
                    int32_t *l_257 = &g_26[4];
                    int32_t *l_258 = &l_210;
                    int32_t *l_259 = &l_168;
                    int32_t *l_260[4][3] = {{&g_30, (void*)0, &l_238[2][2]}, {&g_30, (void*)0, &l_238[2][2]}, {&g_30, (void*)0, &l_238[2][2]}, {&g_30, (void*)0, &l_238[2][2]}};
                    int i, j;
                    for (l_211 = 0; (l_211 > 2); l_211 = safe_add_func_int64_t_s_s(l_211, 6))
                    {
                        int32_t *l_249[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_249[i] = &l_238[3][1];
                        if ((*p_78))
                            break;
                        ++l_250;
                        if ((*g_136))
                            continue;
                    }
                    l_266++;
                    return &g_75[0];
                }
                (*p_78) = ((((safe_lshift_func_int16_t_s_s(0xA318L, (l_271 != ((*p_77) = func_86(((((*l_272) = 0xEA8A35C7B8DB3185LL) | (((safe_lshift_func_int16_t_s_u(g_30, 3)) , 0xD8L) >= (((((l_212 = (l_201[1] != l_275[4])) >= (((((safe_add_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(g_18, (((l_282 = &l_243) == (void*)0) ^ p_79))) , 0x2DL) <= l_266) <= p_79), (*l_271))) >= p_79), p_79)) , p_79) == 0UL) , 0xD6L) , (-1L))) | (-1L)) == g_165) == p_79))) , (void*)0)))))) != (*p_78)) || p_79) != l_238[3][1]);
                return l_283[0];
            }
            g_288--;
        }
    }
    return g_292;
}
static int32_t ** func_80(int32_t ** p_81, int32_t ** p_82, int32_t * p_83, int32_t p_84, int32_t * p_85)
{
    uint16_t l_133 = 65528UL;
    for (g_30 = 0; (g_30 <= (-20)); g_30 = safe_sub_func_int32_t_s_s(g_30, 1))
    {
        int32_t *l_129 = &g_26[8];
        int32_t *l_130 = &g_26[5];
        int32_t *l_131 = &g_26[4];
        int32_t *l_132[7][3][4] = {{{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}, {{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}, {{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}, {{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}, {{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}, {{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}, {{&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}, {&g_30, &g_26[2], (void*)0, &g_26[4]}}};
        int i, j, k;
        l_133--;
    }
    return &g_75[9];
}
static int32_t * func_86(int32_t ** p_87)
{
    uint32_t l_122 = 0UL;
    int32_t *l_125[2][8] = {{&g_26[4], &g_30, &g_18, &g_30, &g_26[4], &g_26[4], &g_26[4], &g_30}, {&g_26[4], &g_30, &g_18, &g_30, &g_26[4], &g_26[4], &g_26[4], &g_30}};
    int64_t l_126[6][8][5] = {{{(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}}, {{(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}}, {{(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}}, {{(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}}, {{(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}}, {{(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}, {(-8L), 0xF15219C01F846CE4LL, 0xDF971429669FAE0DLL, 0x7827EA9C8C9C88BELL, 0xC6D1ADB1F9A50F5FLL}}};
    int i, j, k;
    for (g_116 = 28; (g_116 > 12); g_116--)
    {
        int32_t *l_119 = &g_30;
        int32_t *l_120 = &g_26[4];
        int32_t *l_121 = (void*)0;
        --l_122;
        return l_125[0][6];
    }
    l_126[5][7][1] |= (g_116 | 0xA975422B1FF20F69LL);
    return l_125[1][1];
}
static int32_t func_96(uint16_t p_97, uint32_t p_98)
{
    int32_t l_99 = 1L;
    int32_t *l_100[3];
    uint32_t l_101 = 0xAAD5EAB1L;
    int32_t **l_102 = &g_75[8];
    int32_t l_108[3][7] = {{0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L}, {0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L}, {0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L, 0xE22DD2E1L, 0xE7A76403L}};
    uint32_t l_111 = 0x12E26E4AL;
    uint32_t *l_113 = (void*)0;
    uint32_t **l_112 = &l_113;
    int32_t l_114 = (-9L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_100[i] = (void*)0;
    l_101 = l_99;
    (*l_102) = l_100[0];
    l_114 = ((safe_lshift_func_int8_t_s_u((+(((void*)0 == g_75[4]) , ((safe_sub_func_int8_t_s_s(g_30, (g_18 < l_108[2][3]))) >= (((*l_112) = ((((void*)0 != &l_100[2]) ^ (safe_add_func_uint16_t_u_u(g_18, ((p_97 ^ l_111) , g_18)))) , &l_101)) == (void*)0)))), g_30)) , p_97);
    return p_97;
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_347[i], "g_347[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
