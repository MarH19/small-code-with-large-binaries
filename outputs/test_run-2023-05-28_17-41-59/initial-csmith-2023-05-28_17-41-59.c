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
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
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
static uint32_t g_2 = 0xB3198A8F;
static uint32_t g_39 = 0xF5A2F617;
static uint32_t g_54 = 0xAC245771;
static int16_t g_57 = 1;
static int32_t g_60 = 0x797B69E0;
static int16_t g_65 = 0;
static int16_t g_67 = 0;
static uint16_t g_68 = 1U;
static uint32_t g_73 = 7U;
static uint32_t g_157 = 0x60329EC2;
static int32_t g_158 = (-7);
static int8_t g_161 = 0x1B;
static int16_t g_162 = 0x8E61;
static int32_t g_164 = (-10);
static int32_t g_166 = (-1);
static uint8_t g_194 = 9U;
static int32_t g_196 = (-1);
static uint32_t g_200 = 0xF1D446CA;
static int32_t g_225 = 0x5D562BBF;
static uint32_t g_226 = 0x14FDFC62;
static uint8_t g_259 = 253U;
static uint32_t g_263 = 0xC8B09539;
static uint8_t g_311 = 1U;
static uint8_t g_372 = 0x5C;
static uint32_t g_407 = 5U;
static int8_t g_515 = (-5);
static int8_t g_524 = 0xF8;
static uint16_t g_525 = 0U;
static uint16_t g_528 = 0xFE20;
static uint32_t g_662 = 0U;
static const int8_t g_692 = 0x73;
static uint32_t g_712 = 0xFE3A148C;
static uint8_t g_722 = 0x34;
static uint32_t g_739 = 0x20CCCE2B;
static uint8_t g_760 = 8U;
static uint32_t g_788 = 4294967294U;
inline static const uint32_t func_1(void);
static int16_t func_5(int32_t p_6, int8_t p_7, uint32_t p_8, const uint32_t p_9);
static int16_t func_10(int8_t p_11, uint8_t p_12, int32_t p_13);
static int32_t func_19(uint8_t p_20, uint16_t p_21, uint32_t p_22);
static const uint32_t func_30(int8_t p_31, const uint32_t p_32, int32_t p_33);
static int8_t func_34(uint32_t p_35);
inline static int32_t func_42(const int8_t p_43);
inline static int16_t func_46(int16_t p_47, uint8_t p_48);
static int16_t func_61(uint32_t p_62);
static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98);
inline static const uint32_t func_1(void)
{
    uint8_t l_18 = 0xBB;
    int32_t l_23 = 0x4456E348;
    uint32_t l_287 = 0x71E7E6F1;
    const int8_t l_307 = 0x5D;
    int32_t l_799 = 1;
    g_2--;
    if ((func_5(g_2, (((func_10(((safe_mod_func_int32_t_s_s((l_18 ^= (safe_rshift_func_int8_t_s_u((-6), 1))), func_19(l_23, g_2, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_2 != l_23) == (((func_30(func_34(g_2), g_2, g_2) < l_23) && 0xAE) > g_2)), g_2)), 0x77)), l_23))))) ^ 0xB2), l_287, l_23) && g_166) <= (-1)) == l_287), g_2, l_307) >= g_515))
    {
        uint32_t l_644 = 1U;
        uint16_t l_660 = 65532U;
        int32_t l_661 = (-1);
        g_662 |= (l_661 &= (l_660 ^= ((l_644 ^ (!(safe_rshift_func_uint8_t_u_s((g_225 >= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_525, g_226)), (((safe_mod_func_int16_t_s_s((-1), (safe_sub_func_int16_t_s_s(0x8BF2, l_644)))) | 8U) | (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_23 = l_644), g_158)), 5))))) < g_372)), 1)))) ^ l_287)));
    }
    else
    {
        uint8_t l_663 = 0xC1;
        ++l_663;
    }
    for (g_73 = (-30); (g_73 > 22); g_73++)
    {
        uint8_t l_668 = 249U;
        uint8_t l_693 = 255U;
        int16_t l_705 = (-10);
        int32_t l_759 = 0xAFC11715;
        const int32_t l_789 = 1;
        int8_t l_794 = 1;
        ++l_668;
        if (((g_73 >= (((g_39 >= (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_668, 3)), 1)) == ((254U == (g_515 == (((safe_lshift_func_int16_t_s_u((g_200 > (safe_lshift_func_uint16_t_u_s(((l_23 = (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_23 < ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((l_287 && ((+(safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_2, 1)), g_67))) > l_18)), g_692)) | l_668), g_311)) | l_693)), g_662)), 1))) < g_372), 5))), 2)) == 2U) || g_259))) & g_2)) | g_60)) | g_372) && g_226)) > l_18))
        {
            int16_t l_702 = 0;
            int32_t l_713 = 2;
            int32_t l_737 = 1;
            int32_t l_738 = 0xFCC5BC92;
            g_225 = 0x83F3FB56;
            if ((g_158 & (safe_add_func_uint8_t_u_u((((-8) ^ (safe_rshift_func_int16_t_s_u((-6), (l_693 <= ((safe_mul_func_int16_t_s_s((-8), (safe_rshift_func_uint8_t_u_u((++g_372), l_705)))) != (g_65 |= g_162)))))) ^ (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0, 4)), (l_713 &= (((g_67 & g_712) > 0xD225) <= g_161)))) ^ 0x63), g_194))), 248U))))
            {
                uint8_t l_714 = 253U;
                uint8_t l_721 = 255U;
                l_713 ^= g_525;
                g_722 = ((((l_714 >= ((((((g_372 = (safe_add_func_int32_t_s_s((0xC2A938EA && (g_225 = 0x7C3AB263)), ((safe_add_func_uint8_t_u_u(247U, (0xBC <= l_714))) != g_196)))) >= (safe_add_func_int16_t_s_s((l_287 != 6), l_287))) ^ 0xEAC0C169) & l_714) != 0x3D978722) == 0x3A)) <= l_702) <= l_721) >= l_713);
                g_225 = (((safe_sub_func_int8_t_s_s((l_705 < ((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((g_158 | (safe_mul_func_uint8_t_u_u((l_713 = ((((safe_rshift_func_uint16_t_u_u(l_23, 1)) != (l_702 <= ((g_525 = (safe_rshift_func_uint8_t_u_u(l_714, g_722))) < (safe_mul_func_uint8_t_u_u(l_737, l_738))))) <= ((g_712 || l_23) && g_166)) == g_524)), l_714))) < l_287) >= l_738) || l_668) <= g_200), 0x03)), g_65)) | g_712) & l_668) >= l_18)), 0x37)) | g_524) & 0);
                g_739++;
            }
            else
            {
                uint16_t l_744 = 0x005B;
                int32_t l_745 = 4;
                int32_t l_758 = (-1);
                if (g_263)
                    break;
                for (l_287 = 0; (l_287 < 20); ++l_287)
                {
                    l_744 ^= 0xCEFEA66D;
                    if (g_67)
                        break;
                }
                l_745 = g_54;
                g_225 &= ((l_745 > (safe_sub_func_int32_t_s_s(l_307, l_287))) > (safe_mod_func_int8_t_s_s(l_745, (safe_sub_func_uint8_t_u_u(g_194, ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_311, (l_758 &= (safe_mul_func_int16_t_s_s((0xA7 && l_713), g_372))))), 65535U)) == g_263))))));
            }
            g_760--;
        }
        else
        {
            int16_t l_787 = 0x2772;
            g_225 = (safe_lshift_func_uint8_t_u_s((((g_662 && g_194) == (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_759, (g_525 & 4294967290U))), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((0x8AB1 != (0x6B06272A < (((safe_lshift_func_int8_t_s_s((g_524 &= ((((((l_23 = ((safe_lshift_func_uint16_t_u_u(((((l_787 = (safe_add_func_uint32_t_u_u(((!g_226) < (!((safe_sub_func_int8_t_s_s(0x43, 0xE7)) > g_39))), 0x9CB78068))) & g_788) <= 252U) && 1), 0)) ^ l_307)) | g_788) ^ 0) != g_2) ^ l_307) > l_668)), l_668)) <= l_705) || l_23))), (-1))), 7)) != l_18) || g_162), 7)) != g_739), 2))))) <= g_65), 4));
            return l_789;
        }
        g_225 = (l_799 &= ((((l_23 &= (safe_lshift_func_uint16_t_u_u(l_789, 9))) ^ g_164) >= (safe_mul_func_int8_t_s_s(l_287, l_794))) & (safe_lshift_func_int16_t_s_s(((g_692 & 0) ^ (l_287 != (safe_rshift_func_uint8_t_u_u((g_158 < l_794), g_528)))), 12))));
        return g_739;
    }
    return g_161;
}
static int16_t func_5(int32_t p_6, int8_t p_7, uint32_t p_8, const uint32_t p_9)
{
    int32_t l_308 = 0x0E747864;
    int32_t l_309 = 1;
    int32_t l_310 = 1;
    int32_t l_512 = 0x0D8059B3;
    uint16_t l_514 = 0xDF87;
    int8_t l_562 = 0x56;
    ++g_311;
    for (g_259 = 0; (g_259 > 37); g_259 = safe_add_func_uint32_t_u_u(g_259, 2))
    {
        int8_t l_330 = (-1);
        int32_t l_337 = 4;
        uint16_t l_354 = 0xB6A9;
        const uint16_t l_377 = 3U;
        const int16_t l_380 = (-1);
        uint32_t l_471 = 1U;
        int32_t l_519 = 0x266BBD76;
        int32_t l_521 = 0xA21502E5;
        int32_t l_617 = 0x80CB4FB5;
        if (((safe_add_func_uint32_t_u_u(0xE447D40A, (safe_mul_func_uint16_t_u_u((g_68 = (g_196 ^ (safe_mod_func_int8_t_s_s((p_7 = ((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(l_309, (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_330 ^ ((((0x9E == g_161) > (((safe_add_func_uint8_t_u_u(((0x13 ^ 0xD5) | l_310), g_225)) == p_8) <= p_6)) > 0x918DDF38) != l_330)), p_7)), 4294967295U)))) >= g_67), 1U)) & 0x6E93)), g_39)))), (-1))))) ^ p_9))
        {
            return l_330;
        }
        else
        {
            int32_t l_348 = 1;
            int8_t l_369 = (-6);
            int32_t l_371 = 9;
            int32_t l_400 = 0;
            const uint32_t l_513 = 3U;
            int8_t l_551 = 0x71;
            if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_158, 13)) || ((65535U >= (l_337 = (p_7 == 0x25))) == 0U)), (6U || ((!g_73) || ((--g_68) > ((safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_u(l_308, 5)) >= ((safe_mul_func_int8_t_s_s((+(l_310 >= p_8)), g_196)) == g_39)) || g_166) > 0xE568) | g_164), l_330)) || l_348)))))))
            {
                uint32_t l_351 = 6U;
                int16_t l_370 = 0x695C;
                int32_t l_385 = 0;
                g_225 ^= ((safe_lshift_func_int8_t_s_s(((l_351 != ((safe_mul_func_uint16_t_u_u((l_354 == (l_351 || (-2))), ((!(l_337 > (((g_311 ^ (~(safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((0xF896 <= l_348))), ((safe_unary_minus_func_int16_t_s(((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_263, p_9)), 2)) <= 1), l_354)) != l_348))) && 0x66A3))), l_351)))) ^ l_369) > g_166))) < g_161))) <= 6U)) > g_65), l_370)) >= 1);
                ++g_372;
                l_385 ^= (safe_mod_func_int32_t_s_s((((((((l_377 > l_348) ^ 0x5B) || ((p_8 ^ (p_8 != 0xAD97)) | (safe_lshift_func_int8_t_s_u((((l_380 > (safe_mul_func_uint16_t_u_u(g_57, ((((safe_mul_func_int8_t_s_s((0x07B8 > g_39), l_354)) & p_6) & p_6) < l_354)))) && 0x2256BB90) > g_194), 5)))) > g_194) >= 0U) == 0) ^ 7), l_370));
                g_225 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((4 & (((safe_rshift_func_uint8_t_u_s(p_7, g_2)) && (g_263 != (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(1, 15)), (p_7 = l_337))) > ((((l_385 = l_400) || ((safe_sub_func_int8_t_s_s(0x52, ((((0x3A98 | g_157) > g_73) >= 0x4788FA9A) && g_2))) < g_196)) < l_310) == (-4))), g_200)) > p_6), l_371)))) > l_370)), g_65)), g_372));
            }
            else
            {
                uint16_t l_414 = 0U;
                uint32_t l_415 = 4U;
                int32_t l_424 = 0x303074D3;
                uint32_t l_470 = 0xF94FC3DB;
                int32_t l_522 = 5;
                int32_t l_523 = 0x9CDAACCD;
                if (p_9)
                {
                    uint32_t l_412 = 4294967295U;
                    int8_t l_413 = 0x72;
                    int32_t l_437 = 0x72ECE0B8;
                    if (((((l_414 &= (safe_mul_func_uint16_t_u_u((((0x9E || ((l_354 > ((g_311 < (safe_sub_func_int32_t_s_s((g_407 & (g_68 = (safe_rshift_func_uint16_t_u_s(p_6, l_348)))), g_164))) > ((((safe_add_func_int32_t_s_s(g_73, ((1 || (-1)) >= p_9))) < g_194) > l_412) & l_413))) | p_8)) > l_412) & 0U), l_412))) & g_161) == l_354) == (-1)))
                    {
                        l_415 = 1;
                    }
                    else
                    {
                        int8_t l_423 = 0x67;
                        int16_t l_436 = (-1);
                        l_437 &= (safe_mul_func_int16_t_s_s((((((~(safe_sub_func_uint32_t_u_u(0x34F437CB, (g_54 = (((-1) & (+(((0 >= ((((l_424 = (((safe_unary_minus_func_int8_t_s(l_330)) && l_423) != g_166)) >= ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_67, (+((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((0xD9 == ((l_337 ^= (safe_rshift_func_uint8_t_u_s((l_423 ^ p_7), 2))) < p_9)) ^ g_60), 6U)) | g_157) > p_8), g_158)) < 0xA1)))), l_348)) > g_2)) && p_8) >= p_7)) | 0xB5) ^ l_436))) >= l_414))))) > p_6) >= 0xF315DDA5) ^ p_7) > 0x3805), p_9));
                        l_337 = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((p_8 ^ (safe_sub_func_uint16_t_u_u(l_400, (safe_sub_func_uint16_t_u_u((+(safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u((l_437 = (p_7 = ((g_161 = (safe_mul_func_uint8_t_u_u(g_67, (safe_lshift_func_int16_t_s_u(g_157, 7))))) && 0x2A))), (+(safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(g_2, (((((safe_lshift_func_int8_t_s_u(((++g_68) & (safe_sub_func_int16_t_s_s(0x3892, (g_157 >= p_6)))), 6)) < p_8) ^ g_407) & g_311) ^ p_9))), 5)) || 0), 6))))) || p_9) || l_400) < p_8), 4))), p_6))))), g_200)), 1U));
                        l_337 |= 1;
                        l_424 |= ((((safe_lshift_func_int16_t_s_u((((l_436 >= (l_337 = ((l_470 && l_471) == (safe_rshift_func_int16_t_s_s((g_65 = g_311), (~(safe_mul_func_int16_t_s_s(p_9, ((safe_sub_func_uint32_t_u_u(l_414, g_162)) || (0x2E | (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(0x93, l_369)), p_9)))))))))))) > 0x79) <= l_471), 8)) == g_164) == g_2) <= l_471);
                    }
                    if (p_8)
                        break;
                    if ((safe_mul_func_uint16_t_u_u((!(safe_lshift_func_int8_t_s_s(((l_400 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_9, (g_263 ^ (((((safe_lshift_func_uint16_t_u_s((((((((l_309 = ((safe_add_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((g_161 = (((g_73 < ((safe_add_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u((p_9 && (((safe_add_func_uint8_t_u_u(0U, (g_166 > (safe_rshift_func_uint16_t_u_s(4U, 1))))) <= ((safe_lshift_func_uint16_t_u_s(p_7, 7)) | (safe_add_func_uint16_t_u_u((0 == l_512), p_9)))) && 0xD3BBA409)), l_414)) ^ 0xC5) > 0x65D8) || l_513), l_380)) < g_162)) ^ l_412) && l_348)), l_514)) > l_412) || 0x36), 7)) ^ g_2) & l_470) ^ 3U) | g_311), l_437)) < l_371)) || (-1)) > 0x70) == l_354) > g_259) | 249U) | p_8), 10)) || 0x9CEC1164) | l_512) < p_9) || l_310)))), p_9))) && 0U), 2))), 1U)))
                    {
                        uint32_t l_516 = 0U;
                        int32_t l_520 = 1;
                        l_516++;
                        l_337 = p_7;
                        --g_525;
                        ++g_528;
                    }
                    else
                    {
                        g_225 = g_407;
                    }
                }
                else
                {
                    const uint8_t l_540 = 1U;
                    int32_t l_578 = 0x7FB8D961;
                    if ((g_225 = (safe_lshift_func_uint16_t_u_s(((l_521 = (((l_309 = ((l_512 != ((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(((-9) & l_540), ((((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((((0x9A7BD520 | l_371) < (safe_rshift_func_uint8_t_u_u((0xAFC4 != (p_8 && l_514)), (((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0x15, l_348)), 0x4B52)) != 0x2ECA1874) != l_514)))) > g_528) == l_540) >= p_7) > g_194), 14)), p_9)) <= 0x9C5BF5BF) > l_377) != g_67))) & g_57), 5)), (-1))) && 0xAB))) || 0x3CCAA7F8)) == g_161)) >= l_371) || g_525)) | l_551), g_194))))
                    {
                        int32_t l_559 = 1;
                        l_562 = (((g_65 > ((g_54 &= 1U) > p_7)) && (((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((((((+l_540) <= (safe_add_func_int32_t_s_s(p_7, l_559))) <= (((safe_lshift_func_int8_t_s_u(0xA8, (((2U == 0xFC4DE4B1) & g_372) != 0x314702C8))) || (-1)) & l_551)) == 0x8B460C7B) & 0x0E) ^ g_157) < l_559), 2)), g_311)) || g_54) < g_60) != p_9) | g_68)) ^ 0x91);
                        l_309 = 0xA5D2AD8E;
                    }
                    else
                    {
                        g_225 = ((((g_311 ^ ((0x06632790 <= (safe_rshift_func_int8_t_s_s((l_578 = ((safe_rshift_func_uint16_t_u_s(((((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(253U)), (l_522 |= ((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_521 = (0x0070 || l_414)), (safe_mul_func_int8_t_s_s((((l_519 & (safe_lshift_func_int16_t_s_u(((((p_8 || g_158) && ((p_9 < 2U) < 0xC574)) < g_65) <= g_372), 6))) | l_514) <= l_513), 1)))), 2)) >= l_377)))) >= g_162) > p_8) < 0x3C4079C3) >= g_67) < 0U), p_6)) || l_540)), 4))) != l_309)) > l_471) == g_528) != g_166);
                    }
                    return g_311;
                }
                for (g_407 = 0; (g_407 <= 25); ++g_407)
                {
                    g_225 &= (safe_lshift_func_uint16_t_u_s(9U, p_8));
                }
                if (((l_522 == (safe_sub_func_int32_t_s_s(g_60, 0xBB80DC45))) | (g_311 = l_415)))
                {
                    uint16_t l_589 = 65530U;
                    int32_t l_616 = (-10);
                    for (l_414 = (-19); (l_414 >= 15); l_414++)
                    {
                        if (g_60)
                            break;
                        if (p_7)
                            continue;
                    }
                    l_522 = (((safe_sub_func_int8_t_s_s(l_589, (((p_7 = (l_523 ^= (l_589 || (((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((g_162 ^ 0x53CE2ACE), 6)) <= (p_9 >= (((safe_add_func_int32_t_s_s((l_354 | ((g_194 = (1U == p_9)) < (1 == p_9))), 0x75387496)) & g_166) != g_158))), 0x7332D910)), l_310)))) != g_311), g_311)), g_60)) != 0x56), (-1))) >= 0x56C1BF36) == l_512)))) >= 0x41) != g_166))) <= 0x4A3C) | p_6);
                    l_617 = (7U & ((((~p_7) != (l_309 = p_7)) || (safe_lshift_func_int16_t_s_u((g_65 = (safe_sub_func_int16_t_s_s(g_65, ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(l_470, (65535U < 0xC8D4))) && g_259), (l_616 = (safe_add_func_int16_t_s_s((255U || 0xAD), p_8))))) >= 0xA109)))), 9))) > 0x9E2D13BF));
                    if (l_470)
                        break;
                }
                else
                {
                    uint16_t l_618 = 0x0D1A;
                    l_618++;
                }
                return g_196;
            }
            l_400 = g_54;
        }
        for (p_6 = 24; (p_6 < 2); --p_6)
        {
            int8_t l_641 = 0xAF;
            for (l_309 = 0; (l_309 >= 26); l_309 = safe_add_func_int16_t_s_s(l_309, 4))
            {
                int16_t l_642 = 0x2810;
                int32_t l_643 = 1;
                g_225 = (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((4294967295U || (safe_add_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((p_7 = (((1 || (safe_add_func_int32_t_s_s((l_310 = ((-1) <= ((0x4F5F & (safe_add_func_uint8_t_u_u(p_7, ((l_642 = (((((safe_mul_func_uint8_t_u_u((((p_8 |= (safe_add_func_int16_t_s_s((l_641 ^ 0x212A), g_528))) < (0x16 ^ 4)) >= g_65), 5U)) <= 3) | g_196) != g_225) >= l_310)) < 0x00)))) >= l_641))), l_641))) < p_7) ^ p_9)), 0x76)) & l_309) > 3U), p_9))) > 8) & l_643), g_524)), g_524));
            }
        }
        if (g_39)
            continue;
        l_519 ^= 2;
    }
    l_309 |= 5;
    return g_225;
}
static int16_t func_10(int8_t p_11, uint8_t p_12, int32_t p_13)
{
    uint32_t l_296 = 0x17964D27;
    uint8_t l_301 = 255U;
    uint32_t l_302 = 0x154BAD24;
    int32_t l_306 = (-1);
    g_225 ^= ((safe_lshift_func_int8_t_s_u(p_12, 1)) | ((p_11 >= (safe_add_func_int8_t_s_s(p_13, (safe_mul_func_int8_t_s_s(p_11, l_296))))) <= ((-9) < 4294967290U)));
    for (g_161 = 0; (g_161 != (-14)); g_161--)
    {
        int8_t l_305 = 0x03;
        l_301 |= (safe_mul_func_int16_t_s_s(p_13, 0x19AF));
        l_302 = 0;
        for (g_259 = 23; (g_259 > 30); g_259++)
        {
            l_305 = p_12;
        }
    }
    l_306 = (-1);
    return g_166;
}
static int32_t func_19(uint8_t p_20, uint16_t p_21, uint32_t p_22)
{
    int16_t l_275 = (-10);
    int32_t l_282 = 1;
    int32_t l_286 = (-1);
    l_286 = ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_275 ^= (safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s(p_22, (safe_lshift_func_int16_t_s_s(1, 12))))))), g_161)), ((safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((l_282 = (g_226 && (safe_sub_func_int16_t_s_s(l_282, (safe_unary_minus_func_int16_t_s((l_282 ^ (l_282 < (safe_mod_func_int8_t_s_s(0x0F, 255U)))))))))), 5)) != g_54) && 1U) ^ (-1)), 4)) ^ 1))) & l_286);
    return g_194;
}
static const uint32_t func_30(int8_t p_31, const uint32_t p_32, int32_t p_33)
{
    uint32_t l_231 = 0xBB9BCF21;
    int32_t l_234 = 0x6E769FB3;
    int32_t l_235 = (-3);
    int32_t l_236 = 0x6F2BD89C;
    int32_t l_260 = 0x8005EDC9;
    l_236 = ((safe_rshift_func_uint8_t_u_u(((g_161 = (safe_sub_func_int32_t_s_s(((g_226 >= g_2) | ((((l_231 > (l_231 && (((g_225 = ((0 && g_196) < (l_235 |= (g_157 & (l_234 &= (safe_mod_func_uint16_t_u_u((l_231 == (0x21 | p_32)), l_231))))))) >= l_231) < g_65))) ^ p_32) | g_157) == g_157)), g_164))) | 0x28), 3)) || 0x8B);
    l_260 ^= (l_234 <= ((safe_mul_func_uint16_t_u_u((!(safe_mod_func_uint16_t_u_u(l_236, g_54))), (g_68 = g_225))) > ((g_259 = ((!(safe_rshift_func_int8_t_s_u((l_235 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((1 <= l_234) != p_31) > ((safe_lshift_func_int8_t_s_u((g_161 |= (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_164, (-1))), 4294967293U))), p_32)) >= g_158)), p_33)), l_234)) == l_231)), p_32))) | 0U)) == g_225)));
    for (g_225 = 0; (g_225 != 16); g_225++)
    {
        p_33 |= g_161;
    }
    g_263--;
    return g_54;
}
static int8_t func_34(uint32_t p_35)
{
    int16_t l_36 = (-8);
    int32_t l_37 = 2;
    int32_t l_38 = 0x37BD55FD;
    --g_39;
    g_226 |= func_42((safe_mul_func_int16_t_s_s(func_46(l_38, p_35), func_61(p_35))));
    return g_60;
}
inline static int32_t func_42(const int8_t p_43)
{
    int16_t l_221 = 0x246B;
    int32_t l_222 = 8;
    int32_t l_223 = 0x504CD9E1;
    int32_t l_224 = 1;
    l_224 = ((p_43 && ((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((g_166 | 0x2440A599) <= (0xCF || (safe_add_func_uint8_t_u_u(p_43, (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((((((g_225 = ((l_223 ^= ((0x77FD == (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_222 = (((safe_lshift_func_int16_t_s_u(0, 8)) > 0x854D) > ((safe_rshift_func_int8_t_s_s((l_221 = p_43), g_2)) != g_73))), g_161)), (-1)))) | g_158)) >= l_224)) ^ p_43) ^ p_43) && 0xFE) >= p_43) != p_43) >= l_224), p_43)), p_43)))))), l_224)), g_65)) > l_224), p_43)) > g_60)) ^ l_224);
    return p_43;
}
inline static int16_t func_46(int16_t p_47, uint8_t p_48)
{
    uint16_t l_49 = 0U;
    int32_t l_50 = 0xC51938D1;
    uint16_t l_51 = 0xAFB1;
    int32_t l_58 = 0x18A84D23;
    int32_t l_59 = 0;
    l_50 = (l_49 ^= p_48);
    g_60 = ((((l_59 &= ((l_50 == 0x05687C41) ^ ((0x76 || (l_51 != ((g_2 <= (g_39 | (safe_add_func_uint16_t_u_u(p_47, (l_58 = ((g_54 = l_50) <= (g_57 = (safe_sub_func_uint8_t_u_u(((l_51 | p_48) == 4294967294U), p_48))))))))) && p_48))) & p_47))) | g_39) && 0xD6B8) ^ 246U);
    return p_48;
}
static int16_t func_61(uint32_t p_62)
{
    int16_t l_63 = 0x6F86;
    int32_t l_64 = 0x0C2DF100;
    int32_t l_66 = 0x9320AF47;
    l_63 ^= p_62;
    g_68--;
    l_64 = ((safe_mod_func_int8_t_s_s(g_39, g_39)) == (g_73--));
    g_200 = ((safe_mod_func_uint16_t_u_u(65535U, (~(g_65 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_66 = ((safe_sub_func_int32_t_s_s(l_66, (((((safe_add_func_uint8_t_u_u(func_95((safe_lshift_func_int8_t_s_u((g_68 != (!(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u(l_66, (safe_mod_func_int8_t_s_s(((l_64 = (((safe_mul_func_int8_t_s_s(g_2, ((0x7C <= (safe_lshift_func_uint16_t_u_u(((g_39 || (-3)) | g_73), l_66))) & p_62))) != 0U) >= 0xEF6A07EB)) > l_63), 0x4D)))))) < 0xCD62) < g_67))), l_63)), l_66, l_66), l_66)) != l_63) & l_66) < g_2) <= p_62))) & p_62)), 5)), 0x2C94BBC9)), g_73)), g_39)), l_63)), l_63)))))) & p_62);
    return p_62;
}
static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98)
{
    uint8_t l_121 = 255U;
    const uint32_t l_155 = 4294967290U;
    int8_t l_156 = 0xBC;
    int32_t l_159 = 0xD91FBEB5;
    int32_t l_163 = 0x4DB28FCC;
    int32_t l_165 = 0x7E15CB46;
    uint8_t l_199 = 249U;
    if ((((safe_mod_func_int8_t_s_s(g_68, 1)) || g_39) || 0x65))
    {
        int16_t l_148 = 0x8976;
        int32_t l_160 = 1;
        g_166 = ((l_165 = ((g_164 = ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(((l_163 |= (safe_sub_func_uint8_t_u_u(l_121, ((!(safe_lshift_func_int8_t_s_u(g_2, ((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_162 &= (~(g_161 = (safe_lshift_func_int8_t_s_u((l_160 = ((safe_lshift_func_int8_t_s_s((((l_159 = (g_158 ^= (safe_sub_func_int16_t_s_s((((g_157 &= (((safe_add_func_int8_t_s_s(0xA8, (((safe_lshift_func_int8_t_s_u((g_39 || g_73), (safe_rshift_func_uint16_t_u_s((g_68 = (safe_mul_func_int8_t_s_s((-3), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((l_148 || (safe_mul_func_uint8_t_u_u((((((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_155 | (((-1) <= p_96) >= (-1))) & p_98), g_2)), g_67)) <= p_97) == p_96) >= p_96) >= p_96) || 65526U) | 0x9D), l_156))), 13)), 6))))), 14)))) >= 0) != 0))) & p_98) || g_68)) > g_65) > p_97), p_97)))) & p_96) < (-3)), p_96)) >= 0x45A0)), 4))))), 0x6E83)), l_155)) && 0x1FFBB293)))) | g_65)))) == p_98), p_97)) >= 0x82) && (-1)), g_39)) > p_96)) & g_2)) && g_164);
        l_160 = p_97;
        for (g_166 = (-17); (g_166 != (-11)); ++g_166)
        {
            for (g_68 = (-11); (g_68 == 7); g_68 = safe_add_func_int16_t_s_s(g_68, 7))
            {
                uint32_t l_171 = 0U;
                l_171 = p_97;
                if (p_96)
                    break;
            }
        }
    }
    else
    {
        uint32_t l_195 = 0x10380307;
        for (g_164 = 0; (g_164 <= (-9)); g_164--)
        {
            g_196 = ((g_68--) ^ (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((0U | (g_157 && (safe_lshift_func_int8_t_s_u((g_161 ^= g_158), (((g_67 | p_97) || (((g_67 = (safe_add_func_int16_t_s_s((0xCF && (safe_add_func_int8_t_s_s(l_159, (p_96 | (safe_lshift_func_uint8_t_u_u(((g_194 = (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_96, 0xFB19)), p_97)) < g_157), 8))) ^ l_121), l_195)))))), 1U))) == p_97) >= g_162)) & g_157))))), l_195)), p_98)));
            for (g_158 = (-8); (g_158 <= 6); ++g_158)
            {
                if (l_195)
                    break;
            }
        }
        l_199 ^= g_166;
    }
    return p_97;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
