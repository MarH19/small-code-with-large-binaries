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
   int16_t f0;
};
static int32_t g_2 = 0L;
static int8_t g_74 = 0L;
static int32_t g_78 = 1L;
static int8_t g_88 = 0xE5L;
static int8_t *g_87 = &g_88;
static int16_t g_109 = 0x1B3EL;
static int8_t *g_131 = &g_88;
static int8_t **g_130 = &g_131;
static uint32_t g_133[7] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int32_t g_136 = 0xDDAD4DBFL;
static uint16_t g_139 = 8UL;
static const int8_t **g_142 = (void*)0;
static struct S0 g_145 = {0L};
static int32_t *g_165 = &g_136;
static struct S0 g_199 = {0xB76AL};
static uint64_t g_206 = 3UL;
static uint8_t g_229 = 0x3AL;
static int16_t g_231[4] = {(-2L),(-2L),(-2L),(-2L)};
static int32_t *g_255[9] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
static uint64_t *g_310[2] = {&g_206,&g_206};
static uint64_t **g_309[7][4] = {{&g_310[0],&g_310[1],&g_310[1],&g_310[0]},{&g_310[0],&g_310[1],&g_310[1],&g_310[1]},{&g_310[1],(void*)0,&g_310[1],&g_310[1]},{&g_310[0],&g_310[0],&g_310[1],&g_310[1]},{&g_310[0],(void*)0,&g_310[0],&g_310[1]},{&g_310[0],&g_310[1],&g_310[1],&g_310[0]},{&g_310[1],&g_310[0],(void*)0,&g_310[0]}};
static uint64_t *g_328[7] = {&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206};
static const int32_t g_348 = 1L;
static int64_t g_372 = 0xCE5CD6D2EC17A5ADLL;
static int16_t g_413 = (-1L);
static int8_t ****g_464 = (void*)0;
static const int8_t ***g_466[1] = {&g_142};
static const int8_t **** const g_465 = &g_466[0];
static int32_t **g_475 = &g_255[2];
static int32_t ***g_474[8][4][4] = {{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,(void*)0},{&g_475,&g_475,&g_475,&g_475}},{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,(void*)0},{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475}},{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{(void*)0,(void*)0,&g_475,&g_475},{(void*)0,(void*)0,&g_475,&g_475}},{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,(void*)0,&g_475,&g_475}},{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,(void*)0,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475}},{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,(void*)0,&g_475},{&g_475,(void*)0,&g_475,&g_475},{&g_475,(void*)0,&g_475,&g_475}},{{&g_475,&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,(void*)0}},{{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,(void*)0},{&g_475,&g_475,&g_475,&g_475}}};
static const int32_t *g_480[1] = {(void*)0};
static const int32_t **g_479 = &g_480[0];
static uint32_t **g_537 = (void*)0;
static const int32_t g_548 = 0L;
static struct S0 *g_562 = &g_145;
static struct S0 **g_561 = &g_562;
static int16_t *g_572 = &g_109;
static int16_t **g_571 = &g_572;
static uint8_t *g_580 = &g_229;
static uint8_t **g_579 = &g_580;
static int32_t *g_689 = &g_2;
static const int16_t g_712 = 0xB773L;
static const int32_t *g_743[2][6][4] = {{{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0}},{{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0},{&g_2,(void*)0,&g_2,(void*)0}}};
static const int32_t g_745[9][2][8] = {{{0L,0xBAEB79B3L,0xF7030F14L,1L,1L,0xF7030F14L,(-3L),8L},{(-1L),8L,0x68B45CC1L,0xA746E752L,0x88F3DE28L,(-3L),0x74751707L,0xBAEB79B3L}},{{0L,0x01561442L,(-1L),(-3L),0xA746E752L,(-3L),(-1L),0x01561442L},{0xEACF512AL,8L,0xBAEB79B3L,0L,(-1L),0xF7030F14L,0x88F3DE28L,(-1L)}},{{0x01561442L,(-3L),1L,0x88F3DE28L,0xEACF512AL,0xEACF512AL,0x88F3DE28L,1L},{0x88F3DE28L,0x88F3DE28L,0xBAEB79B3L,0xF7030F14L,0L,0x68B45CC1L,(-1L),0L}},{{0L,0x68B45CC1L,(-1L),0L,0x74751707L,1L,0x74751707L,0L},{0x68B45CC1L,0xBAEB79B3L,0x68B45CC1L,0xF7030F14L,0x741B7FB2L,0x01561442L,(-3L),1L}},{{0L,(-1L),0xF7030F14L,0x88F3DE28L,(-1L),0x741B7FB2L,0x741B7FB2L,(-1L)},{0L,0x74751707L,0x74751707L,0L,0x741B7FB2L,0x88F3DE28L,0L,0x01561442L}},{{0x68B45CC1L,0xA746E752L,0x88F3DE28L,(-3L),0x74751707L,0xBAEB79B3L,0x01561442L,0xBAEB79B3L},{0L,0xA746E752L,0L,0xA746E752L,0L,0x88F3DE28L,0L,8L}},{{0x88F3DE28L,0x74751707L,0L,1L,0xEACF512AL,0x741B7FB2L,0xA746E752L,0xA746E752L},{0x01561442L,(-1L),0L,0L,(-1L),0x01561442L,0L,0xEACF512AL}},{{0xEACF512AL,0xBAEB79B3L,0L,8L,0xA746E752L,1L,0x01561442L,0x88F3DE28L},{0L,0x68B45CC1L,0x88F3DE28L,8L,0x88F3DE28L,0x68B45CC1L,0L,0xEACF512AL}},{{(-1L),0x88F3DE28L,0x74751707L,0L,1L,0xEACF512AL,0x741B7FB2L,0xA746E752L},{8L,(-3L),0xF7030F14L,1L,1L,0xF7030F14L,(-3L),8L}}};
static uint8_t * const *g_860 = &g_580;
static uint8_t * const **g_859 = &g_860;
static uint8_t * const ***g_858 = &g_859;
static uint8_t * const ****g_857[3] = {&g_858,&g_858,&g_858};
static uint32_t g_863[2][7][4] = {{{0x681A688CL,6UL,1UL,0xCE63F4FEL},{18446744073709551610UL,18446744073709551615UL,6UL,6UL},{18446744073709551615UL,18446744073709551615UL,6UL,0x69D4DF5EL},{18446744073709551610UL,7UL,1UL,18446744073709551615UL},{0x681A688CL,1UL,0x69D4DF5EL,1UL},{0x69D4DF5EL,1UL,0x681A688CL,18446744073709551615UL},{1UL,7UL,18446744073709551610UL,0x69D4DF5EL}},{{6UL,18446744073709551615UL,18446744073709551615UL,6UL},{6UL,18446744073709551615UL,18446744073709551610UL,0xCE63F4FEL},{1UL,6UL,0x681A688CL,0xB31FBF42L},{0x69D4DF5EL,0UL,0x69D4DF5EL,0xB31FBF42L},{0x681A688CL,18446744073709551615UL,0UL,7UL},{0x69D4DF5EL,6UL,18446744073709551615UL,18446744073709551615UL},{0xB31FBF42L,0xB31FBF42L,18446744073709551615UL,18446744073709551615UL}}};
static int64_t **g_872[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t ***g_871 = &g_872[4];
static uint64_t ****g_873 = (void*)0;
static uint64_t g_905[2][2][3] = {{{2UL,18446744073709551615UL,0UL},{0xBEF4F2D2195BE546LL,18446744073709551615UL,0xBEF4F2D2195BE546LL}},{{0x3BF03803AFBF9BBCLL,2UL,0UL},{0x3BF03803AFBF9BBCLL,0x3BF03803AFBF9BBCLL,2UL}}};
static const uint8_t **g_930[3] = {(void*)0,(void*)0,(void*)0};
static uint16_t g_962 = 0x7F7CL;
static uint32_t g_992 = 3UL;
static struct S0 *g_1026 = &g_199;
static int32_t g_1093 = 0xAF5976EAL;
static uint8_t g_1106 = 250UL;
static uint32_t g_1127 = 0x43BD6F45L;
static const struct S0 *** const g_1154 = (void*)0;
static const struct S0 *** const *g_1153[10] = {&g_1154,&g_1154,&g_1154,&g_1154,&g_1154,&g_1154,&g_1154,&g_1154,&g_1154,&g_1154};
inline static uint16_t func_1(void);
static uint16_t func_5(int8_t p_6, int16_t p_7, int32_t p_8);
static int8_t func_18(uint32_t p_19, uint8_t p_20);
inline static uint32_t func_21(const uint64_t p_22, int64_t p_23);
static const uint64_t func_24(uint32_t p_25, uint64_t p_26);
inline static int32_t func_33(int32_t p_34, uint32_t p_35, uint32_t p_36);
static int32_t func_37(uint32_t p_38, uint8_t p_39, int64_t p_40, const uint8_t p_41);
inline static int16_t func_58(const uint8_t p_59, int64_t p_60);
static int8_t ** func_79(uint8_t p_80, const int8_t * p_81, int8_t * p_82, const int8_t * const * p_83);
inline static const int8_t * const * func_89(uint16_t p_90, int32_t p_91, int8_t ** p_92, const int8_t ** p_93, uint64_t p_94);
inline static uint16_t func_1(void)
{
    int32_t l_42 = 9L;
    int32_t *l_1011 = (void*)0;
    uint64_t *l_1020 = (void*)0;
    uint32_t l_1027 = 0x99223ED4L;
    struct S0 l_1028 = {-1L};
    int32_t l_1047 = 0xAEFC830FL;
    int32_t *l_1072 = &g_2;
    struct S0 *** const l_1161 = (void*)0;
    uint8_t l_1199 = 1UL;
    for (g_2 = 0; (g_2 <= (-27)); g_2--)
    {
        int32_t l_15 = 0L;
        uint32_t *l_862 = &g_863[0][4][0];
        uint16_t l_866 = 2UL;
        uint16_t *l_993 = &g_139;
        int32_t *l_994 = &g_78;
        uint8_t l_1012 = 0x0AL;
        int8_t *** const l_1013[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 **l_1018 = &g_562;
        uint32_t l_1040 = 0x81DE801BL;
        uint16_t l_1137[1][5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1137[i][j] = 65535UL;
        }
    }
    (*g_479) = (*g_479);
    return g_231[1];
}
static uint16_t func_5(int8_t p_6, int16_t p_7, int32_t p_8)
{
    int32_t *l_1000 = (void*)0;
    p_8 = p_8;
    for (g_78 = 0; (g_78 <= (-11)); g_78 = safe_sub_func_int32_t_s_s(g_78, 1))
    {
        int8_t l_997 = 0x54L;
        if (l_997)
            break;
    }
    for (g_413 = 18; (g_413 < 9); g_413 = safe_sub_func_int16_t_s_s(g_413, 9))
    {
        (*g_479) = &p_8;
        (*g_479) = l_1000;
    }
    return g_78;
}
static int8_t func_18(uint32_t p_19, uint8_t p_20)
{
    const int64_t l_869 = 0x5388D57F331FB902LL;
    uint32_t *l_870 = &g_133[2];
    uint8_t **l_898 = &g_580;
    uint32_t l_901 = 4UL;
    uint64_t l_902 = 18446744073709551608UL;
    int32_t ***l_970[2];
    int16_t l_971[7][2][1] = {{{0x77BEL},{0L}},{{0L},{0x77BEL}},{{0L},{0L}},{{0x77BEL},{0L}},{{0L},{0x77BEL}},{{0L},{0L}},{{0x77BEL},{0L}}};
    int32_t l_983 = 0x863EA4F3L;
    int32_t l_984 = 0xE780E1E9L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_970[i] = &g_475;
    if ((safe_mul_func_int8_t_s_s(((l_869 ^ (l_869 < ((((*l_870) = (((&g_572 == &g_572) <= 0xE2A4L) && p_19)) || (p_19 ^ (g_871 == &g_872[4]))) == l_869))) < 0UL), 246UL)))
    {
        uint64_t *****l_874 = &g_873;
        (*l_874) = g_873;
    }
    else
    {
        int32_t *l_875[1];
        uint8_t **l_899 = &g_580;
        int i;
        for (i = 0; i < 1; i++)
            l_875[i] = &g_78;
        (*g_479) = l_875[0];
        for (g_74 = 1; (g_74 >= 6); g_74 = safe_add_func_int32_t_s_s(g_74, 4))
        {
            int32_t *l_885 = &g_78;
            uint8_t **l_900[4];
            int32_t l_903 = 6L;
            uint16_t *l_904 = &g_139;
            int i;
            for (i = 0; i < 4; i++)
                l_900[i] = &g_580;
            l_903 = ((p_19 == (((safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((~(l_875[0] == (l_885 = l_870))) >= ((safe_mod_func_uint16_t_u_u(((*l_904) = (safe_add_func_int64_t_s_s(((((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((l_898 != (l_900[3] = l_899)) & p_19), l_901)) != p_19) < p_19), 255UL)) || l_902), p_19)) ^ 0xAFL), p_20)) <= 0x08D66487A4572C84LL) > l_869) == p_20), l_903))), 0x1F28L)) < p_19)), p_20)), 0x5AE223C128744C4ALL)) & 0xE859L) ^ g_905[0][0][1])) != (**g_571));
            for (g_372 = 0; (g_372 == (-14)); g_372 = safe_sub_func_uint64_t_u_u(g_372, 7))
            {
                int32_t l_924[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_924[i] = (-1L);
                for (l_901 = 0; (l_901 <= 6); l_901 += 1)
                {
                    uint64_t *l_910 = &g_206;
                    uint8_t ***l_929 = &l_898;
                    const uint8_t ***l_931 = &g_930[2];
                    struct S0 ****l_934 = (void*)0;
                    struct S0 ****l_935 = (void*)0;
                    struct S0 ****l_936 = (void*)0;
                    struct S0 ***l_938 = &g_561;
                    struct S0 ****l_937 = &l_938;
                    int32_t l_939 = 0xCC581E59L;
                    int16_t *l_940 = &g_231[1];
                    l_939 = (safe_div_func_uint16_t_u_u((((*l_870) = (((*l_910) = 0xB3ECF1E3837F68B1LL) < (((*g_131) = 0xEDL) != ((((*l_940) = ((8L == (safe_add_func_uint8_t_u_u((+(safe_lshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((**g_571) = l_924[0]), (((safe_unary_minus_func_int16_t_s((safe_div_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((((*l_929) = l_899) == ((*l_931) = g_930[2])))), (safe_sub_func_int8_t_s_s((((*l_937) = &g_561) == &g_561), (0x75BA524B3818A1F9LL == l_924[0]))))))) > (*l_885)) >= (*l_885)))), p_19)), 9L)) == p_19), 0))), l_939))) == 0x7DDC9BF175BD726BLL)) != p_19) < 0xFBL)))) < l_924[0]), (-1L)));
                }
                if (l_924[0])
                    break;
            }
            (*g_479) = &l_903;
        }
    }
    for (g_78 = 0; (g_78 < (-11)); g_78 = safe_sub_func_int16_t_s_s(g_78, 6))
    {
        uint32_t l_953 = 6UL;
        int8_t l_960[10][5][4] = {{{1L,(-1L),1L,(-1L)},{0x20L,0L,0xA8L,(-1L)},{0x20L,0x95L,1L,0x95L},{1L,(-1L),0xA8L,0L},{1L,(-1L),1L,(-1L)}},{{0x20L,0x6EL,0xA8L,0xEDL},{0x20L,0x84L,1L,0x84L},{1L,0xEDL,0xA8L,0x6EL},{1L,(-1L),1L,(-1L)},{0x20L,0L,0xA8L,(-1L)}},{{0x20L,0x95L,1L,0x95L},{1L,(-1L),0xA8L,0L},{1L,(-1L),1L,(-1L)},{0x20L,0x6EL,0xA8L,0xEDL},{0x20L,0x84L,1L,0x84L}},{{1L,0xEDL,0xA8L,0x6EL},{1L,(-1L),1L,(-1L)},{0x20L,0L,0xA8L,(-1L)},{0x20L,0x95L,1L,0x95L},{1L,(-1L),0xA8L,0L}},{{1L,(-1L),1L,(-1L)},{0x20L,0x6EL,0xA8L,0xEDL},{0x20L,0x84L,1L,0x84L},{1L,0xEDL,0xA8L,0x6EL},{1L,(-1L),1L,(-1L)}},{{0x20L,0L,0xA8L,(-1L)},{0x20L,0x95L,1L,0x95L},{1L,(-1L),0xA8L,0L},{1L,(-1L),1L,(-1L)},{0x20L,0x6EL,0xA8L,0xEDL}},{{0x20L,0x84L,1L,0x84L},{1L,0xEDL,0xA8L,0x6EL},{1L,(-1L),1L,(-1L)},{0x20L,0L,0xA8L,(-1L)},{0x20L,0x95L,1L,0x95L}},{{1L,(-1L),0xA8L,0L},{1L,(-1L),1L,(-1L)},{0x20L,0x6EL,0xA8L,0xEDL},{0x20L,0x84L,1L,0x84L},{1L,0xEDL,0xA8L,0x6EL}},{{1L,(-1L),1L,(-1L)},{0x20L,0L,0xA8L,(-1L)},{0x20L,0x95L,1L,0x95L},{1L,(-1L),0xA8L,0L},{1L,(-1L),1L,(-1L)}},{{0x20L,0x6EL,0xA8L,0xEDL},{0x20L,0x84L,1L,0x84L},{1L,0xEDL,0xA8L,0x6EL},{1L,(-1L),1L,(-1L)},{0x20L,0L,0xA8L,(-1L)}}};
        uint16_t *l_961 = &g_962;
        int32_t ***l_968[1][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_968[i][j] = &g_475;
        }
        if ((safe_add_func_uint16_t_u_u(((*l_961) = (safe_div_func_int32_t_s_s(((void*)0 == &g_858), (safe_rshift_func_int8_t_s_u((((g_206 >= ((safe_rshift_func_int16_t_s_u((l_953 = 0xDE4BL), (safe_add_func_int16_t_s_s((0UL & (!(p_20 < (safe_lshift_func_uint16_t_u_u(p_19, (g_139 = (!4294967287UL))))))), (l_902 == p_20))))) != l_960[0][4][3])) || p_19) <= p_20), 0))))), (**g_571))))
        {
            int32_t ****l_969[6];
            int16_t *l_982[10] = {&g_231[1],&g_413,&g_231[2],&g_413,&g_231[1],&g_231[1],&g_413,&g_231[2],&g_413,&g_231[1]};
            int i;
            for (i = 0; i < 6; i++)
                l_969[i] = &g_474[3][3][3];
            l_984 = (safe_sub_func_int64_t_s_s((~(p_19 & p_20)), ((l_971[0][0][0] = (((*g_572) = 0xDC58L) & ((l_968[0][1] = l_968[0][1]) == (l_970[1] = (g_474[3][3][3] = l_970[0]))))) < (((((safe_sub_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((l_983 = (safe_mul_func_int8_t_s_s(((*l_898) != (void*)0), ((void*)0 != &g_863[0][6][3])))), p_19)) == l_960[0][4][3]), 9L)), p_20)) == (-8L)) <= p_19), l_960[0][4][3])) != (**g_130)) && g_231[2]) > p_19) <= l_960[4][3][2]))));
        }
        else
        {
            int32_t *l_987 = &l_983;
            int32_t ****l_989 = &g_474[2][0][2];
            int32_t *****l_988 = &l_989;
            int32_t ****l_991 = &g_474[3][3][3];
            int32_t *****l_990 = &l_991;
            for (g_372 = 0; (g_372 > 0); g_372 = safe_add_func_uint16_t_u_u(g_372, 7))
            {
                (*g_479) = l_987;
            }
            (*g_562) = (*g_562);
            (*l_990) = ((*l_988) = &l_968[0][1]);
            if ((*g_689))
                break;
        }
    }
    return p_20;
}
inline static uint32_t func_21(const uint64_t p_22, int64_t p_23)
{
    int32_t *l_865 = &g_136;
    (*g_479) = l_865;
    (*g_479) = l_865;
    return g_78;
}
static const uint64_t func_24(uint32_t p_25, uint64_t p_26)
{
    const int8_t l_864 = 6L;
    return l_864;
}
inline static int32_t func_33(int32_t p_34, uint32_t p_35, uint32_t p_36)
{
    uint16_t l_779[5][8][1] = {{{0xC5A2L},{1UL},{1UL},{1UL},{1UL},{0xC5A2L},{0x2A33L},{0x2E72L}},{{65535UL},{0x2E72L},{0x2A33L},{0xC5A2L},{1UL},{1UL},{1UL},{1UL}},{{0xC5A2L},{0x2A33L},{0x2E72L},{65535UL},{0x2E72L},{0x2A33L},{0xC5A2L},{1UL}},{{1UL},{1UL},{1UL},{0xC5A2L},{0x2A33L},{0x2E72L},{65535UL},{0x2E72L}},{{0x2A33L},{0xC5A2L},{1UL},{1UL},{1UL},{1UL},{0xC5A2L},{0x2A33L}}};
    uint64_t l_784 = 0xAEE2954E8831A993LL;
    const uint8_t *l_811 = &g_229;
    int32_t l_814[8][4][8] = {{{0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L)},{1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L,1L,1L},{1L,(-8L),2L,(-8L),1L,0L,1L,(-8L)},{0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L)}},{{1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L,1L,1L},{1L,(-8L),2L,(-8L),1L,0L,1L,(-8L)},{0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L)},{1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L,1L,1L}},{{1L,(-8L),2L,(-8L),0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L},{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L},{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L},{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L}},{{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L},{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L},{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L},{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L}},{{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L},{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L},{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L},{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L}},{{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L},{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L},{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L},{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L}},{{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L},{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L},{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L},{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L}},{{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L},{0x3EFB6C4DL,1L,1L,1L,0x3EFB6C4DL,(-8L),0x3EFB6C4DL,1L},{2L,1L,2L,0L,0x3EFB6C4DL,0L,2L,1L},{0x3EFB6C4DL,0L,2L,1L,2L,0L,0x3EFB6C4DL,0L}}};
    int i, j, k;
    l_779[3][4][0] = 1L;
    for (g_372 = 0; (g_372 == (-25)); --g_372)
    {
        uint64_t **l_786 = &g_328[3];
        const uint64_t *l_792 = (void*)0;
        const uint64_t * const *l_791 = &l_792;
        const uint64_t * const **l_790 = &l_791;
        uint8_t **l_796 = (void*)0;
        int32_t l_801 = (-1L);
        uint8_t *l_810 = (void*)0;
        int8_t ***l_830 = &g_130;
        int8_t **** const l_829 = &l_830;
        int8_t **** const *l_828 = &l_829;
        uint8_t l_849 = 0xC2L;
        uint8_t * const ****l_856 = (void*)0;
        for (g_145.f0 = 22; (g_145.f0 > 5); g_145.f0--)
        {
            uint64_t **l_787 = &g_310[1];
            const uint64_t * const **l_794 = &l_791;
            int32_t l_854 = 0xBD364178L;
            if (l_784)
            {
                uint64_t ***l_785[3][1];
                const uint64_t * const ***l_793[7];
                int64_t **l_803 = (void*)0;
                int64_t ***l_802[7] = {&l_803,&l_803,&l_803,&l_803,&l_803,&l_803,&l_803};
                struct S0 l_805 = {1L};
                uint32_t l_845 = 4294967295UL;
                uint16_t *l_846 = &l_779[3][4][0];
                int16_t l_855 = 0xB613L;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_785[i][j] = &g_309[2][1];
                }
                for (i = 0; i < 7; i++)
                    l_793[i] = &l_790;
                l_787 = (l_786 = (void*)0);
                if ((safe_lshift_func_int16_t_s_s(((*g_572) = ((l_794 = l_790) == &l_786)), p_34)))
                {
                    uint8_t **l_795 = &g_580;
                    uint8_t ***l_797 = (void*)0;
                    uint8_t ***l_798 = &g_579;
                    uint32_t l_799 = 0x982D4929L;
                    int32_t *l_800[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_800[i] = (void*)0;
                    if ((l_801 = (l_799 = (l_779[3][4][0] ^ (l_795 != ((*l_798) = l_796))))))
                    {
                        int64_t ****l_804[5] = {&l_802[6],&l_802[6],&l_802[6],&l_802[6],&l_802[6]};
                        int i;
                        l_802[0] = l_802[0];
                        if (p_36)
                            break;
                        l_805 = (**g_561);
                    }
                    else
                    {
                        (*g_475) = (void*)0;
                    }
                }
                else
                {
                    int16_t l_815 = 0L;
                    int8_t **** const *l_827 = &g_464;
                    for (g_136 = 0; (g_136 <= 1); g_136 += 1)
                    {
                        uint32_t *l_818 = &g_133[1];
                        uint64_t ****l_824 = &l_785[0][0];
                        uint64_t *****l_823 = &l_824;
                        int32_t *l_835 = &g_78;
                        l_815 = (((safe_sub_func_int16_t_s_s(p_36, (p_36 != (safe_mod_func_uint16_t_u_u((l_810 == l_811), g_206))))) && (l_814[5][1][0] = ((*g_580) = (safe_mul_func_int16_t_s_s((*g_572), g_372))))) == p_34);
                        (*l_835) = ((safe_div_func_uint32_t_u_u(((*l_818) = 0x44782882L), (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(p_36, ((((*l_823) = (void*)0) == (void*)0) == ((safe_rshift_func_int8_t_s_s(((l_828 = l_827) != &g_464), 1)) >= (safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(l_801, (0x5549E6B8DE175FC7LL & 3L))), 11)))))), 4)))) ^ p_35);
                    }
                }
                l_855 = (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_814[5][1][0] = ((*g_87) = ((*g_572) == (safe_mod_func_uint64_t_u_u(((0xDEE3L & (((safe_add_func_uint16_t_u_u(((*l_846) = ((safe_unary_minus_func_int16_t_s(l_845)) ^ p_36)), ((safe_add_func_uint64_t_u_u(l_849, ((safe_mul_func_int32_t_s_s(7L, ((void*)0 == l_792))) <= (safe_sub_func_int64_t_s_s((0x34L ^ p_35), p_34))))) != 0x07L))) || 1L) ^ 1L)) < l_854), p_35))))), l_854)), p_36));
            }
            else
            {
                return p_36;
            }
            g_857[2] = l_856;
            (*g_479) = (*g_475);
        }
    }
    if ((p_34 ^ l_784))
    {
        int32_t *l_861[5][10] = {{&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_2,(void*)0,&g_78,(void*)0,&g_2,(void*)0,&g_78,(void*)0,&g_2,(void*)0},{&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0},{&g_2,&g_136,&g_78,&g_136,&g_2,&g_136,&g_78,&g_136,&g_2,&g_136},{&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136}};
        int i, j;
        (*g_561) = (*g_561);
        l_814[5][1][0] = p_34;
        (*g_475) = &l_814[0][0][1];
    }
    else
    {
        (*g_859) = (void*)0;
        return p_34;
    }
    return p_34;
}
static int32_t func_37(uint32_t p_38, uint8_t p_39, int64_t p_40, const uint8_t p_41)
{
    uint16_t l_49 = 1UL;
    int32_t l_65 = 0xF085FFFFL;
    int8_t *l_73 = &g_74;
    uint64_t *l_225[8] = {&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206};
    int32_t l_226[2];
    uint8_t *l_227 = (void*)0;
    uint8_t *l_228 = &g_229;
    int32_t *l_230[5][4] = {{(void*)0,&g_78,&l_65,&l_65},{(void*)0,&g_78,&g_78,(void*)0},{&g_78,(void*)0,(void*)0,&l_65},{&g_78,(void*)0,&g_78,&l_65},{(void*)0,&l_65,&l_65,&l_65}};
    uint64_t *l_241 = &g_206;
    struct S0 l_254 = {0x699DL};
    uint32_t l_336 = 1UL;
    const int32_t *l_349[6][4] = {{&l_65,&l_65,&l_65,&l_65},{&l_226[0],&l_65,&g_2,&l_65},{&l_65,&l_65,&g_2,&g_2},{&l_226[0],&l_226[0],&l_65,&g_2},{&l_65,&l_65,&l_65,&l_65},{&l_65,&l_65,&l_65,&l_65}};
    struct S0 *l_386 = &g_199;
    int64_t *l_392[10] = {(void*)0,&g_372,(void*)0,&g_372,(void*)0,&g_372,(void*)0,&g_372,(void*)0,&g_372};
    uint8_t **l_393 = (void*)0;
    uint8_t **l_394 = &l_228;
    int64_t l_405 = 8L;
    uint8_t l_411 = 255UL;
    uint32_t *l_412[1];
    int16_t l_414[6] = {0L,0L,0L,0L,0L,0L};
    int64_t l_547 = 0x215D92AAF338CC91LL;
    const uint64_t l_595[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    uint32_t l_622 = 7UL;
    int8_t ***l_652[3][5] = {{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130}};
    int8_t ****l_651 = &l_652[0][3];
    int8_t *****l_685 = &l_651;
    const int16_t *l_714 = &g_199.f0;
    const int16_t **l_713 = &l_714;
    uint32_t ***l_757 = (void*)0;
    uint8_t ***l_777 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_226[i] = (-10L);
    for (i = 0; i < 1; i++)
        l_412[i] = &l_336;
    g_231[1] = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((l_49 ^ p_39), 2)) <= 1UL), ((((safe_mod_func_uint64_t_u_u(((((safe_sub_func_int32_t_s_s((((*l_228) = (safe_sub_func_int8_t_s_s(((l_226[0] = (safe_mul_func_int16_t_s_s(func_58((safe_div_func_int16_t_s_s((((18446744073709551610UL & (l_65 = (safe_rshift_func_uint16_t_u_s(0UL, 11)))) > 0UL) && g_2), (safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(g_2, (((*l_73) = (safe_rshift_func_int8_t_s_u((!(g_2 & p_39)), 6))) < l_49))), g_2)))), l_49), l_49))) != 0xD14FDFC62104B165LL), p_41))) && p_39), 0xFB3AA2F0L)) >= p_39) != g_2) & 0x60F980C7L), p_38)) || (*g_87)) > 0UL) == (*g_131)))), p_40));
    return p_39;
}
inline static int16_t func_58(const uint8_t p_59, int64_t p_60)
{
    int32_t l_141 = (-1L);
    struct S0 *l_175 = &g_145;
    int8_t l_183 = 9L;
    const int32_t *l_219 = &l_141;
    const int32_t **l_218 = &l_219;
    const int32_t ***l_217[9] = {&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218};
    int i;
    for (p_60 = 0; (p_60 == (-6)); p_60 = safe_sub_func_uint32_t_u_u(p_60, 9))
    {
        int64_t l_77[5] = {0x35718A84D2376568LL,0x35718A84D2376568LL,0x35718A84D2376568LL,0x35718A84D2376568LL,0x35718A84D2376568LL};
        int32_t *l_190 = (void*)0;
        int32_t **l_191 = &g_165;
        int i;
        for (g_74 = 4; (g_74 >= 0); g_74 -= 1)
        {
            const int8_t *l_84 = &g_74;
            int32_t l_134 = 0xAB57C19DL;
            int32_t l_137[4];
            int32_t l_140 = 0x7D51EEA2L;
            int32_t **l_185 = &g_165;
            int32_t *l_187 = &l_140;
            int32_t **l_186 = &l_187;
            int32_t *l_189 = &l_137[1];
            int32_t **l_188 = &l_189;
            int i;
            for (i = 0; i < 4; i++)
                l_137[i] = (-4L);
            for (g_78 = 0; (g_78 <= 4); g_78 += 1)
            {
                int8_t *l_86 = &g_74;
                int8_t **l_85 = &l_86;
                int16_t *l_108 = &g_109;
                uint32_t *l_132 = &g_133[2];
                int32_t *l_135 = &g_136;
                uint16_t *l_138 = &g_139;
                int8_t ***l_146 = &l_85;
                int i;
                g_130 = ((*l_146) = func_79(l_77[g_78], l_84, (g_87 = ((*l_85) = &g_74)), func_89(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((p_60 <= ((~(safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((((g_78 && ((*l_138) = (safe_mod_func_int16_t_s_s((((*l_108) = ((-1L) < g_78)) | ((((safe_mul_func_uint8_t_u_u((+((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*l_135) = (0x0CD7L ^ (((l_134 = (safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((*l_132) = (g_130 == (void*)0)), 4294967295UL)) == g_74), g_2))) > 0xA905BEA6296EF6A0LL) == p_60))), 4294967295UL)), l_137[1])))) == g_2), g_2)) ^ 5L), 4)), l_77[g_78])) || g_133[6])), g_74)) != p_59) & 0L) | p_59)), p_60)))) & g_78) != g_78) != l_140), g_78)) == l_77[3]), p_60))) & 0x9F0EL)), 15)), g_2)) ^ 0UL), (*g_131))) != l_141), l_141, &g_131, g_142, g_88)));
                if (g_136)
                    break;
                if (g_74)
                {
                    for (l_141 = (-29); (l_141 > (-19)); l_141 = safe_add_func_uint32_t_u_u(l_141, 3))
                    {
                        int32_t **l_149 = &l_135;
                        int32_t ***l_150 = &l_149;
                        int32_t **l_152 = &l_135;
                        int32_t ***l_151 = &l_152;
                        (*l_135) = g_136;
                        (*l_151) = ((*l_150) = l_149);
                        (**l_151) = &l_134;
                        if (g_74)
                            break;
                    }
                    if (l_77[0])
                        continue;
                }
                else
                {
                    int32_t * const l_155 = (void*)0;
                    int8_t * const *l_159 = &g_87;
                    int32_t *l_160 = &l_137[1];
                    struct S0 * const l_176 = (void*)0;
                    for (g_136 = 0; (g_136 != 29); g_136++)
                    {
                        int32_t **l_156 = &l_135;
                        (*l_156) = l_155;
                    }
                    (*l_160) = (safe_div_func_int16_t_s_s((((void*)0 != l_159) > g_133[1]), p_60));
                    if ((safe_mod_func_int64_t_s_s(l_77[0], 0x6C391FFBB29333D5LL)))
                    {
                        int32_t **l_163 = (void*)0;
                        int32_t **l_164[1];
                        uint32_t *l_170 = &g_133[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_164[i] = &l_160;
                        g_165 = &l_141;
                        l_137[1] = ((safe_sub_func_int8_t_s_s((((((((safe_mul_func_int16_t_s_s(((*l_108) = ((void*)0 != l_170)), (+(!g_133[2])))) && ((safe_mul_func_uint8_t_u_u((l_175 != l_176), ((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(2L, (p_60 == (safe_mul_func_uint8_t_u_u((g_74 || g_136), (*g_87)))))), p_59)) || (*l_160)))) | l_77[1])) | l_183) && (*l_160)) | l_140) || 1L) > g_139), 0xBDL)) < 0x864FL);
                        return g_139;
                    }
                    else
                    {
                        int16_t l_184 = 0xEFB1L;
                        return l_184;
                    }
                }
            }
            (*l_188) = ((*l_186) = ((*l_185) = &l_141));
        }
        (*l_191) = l_190;
    }
    for (g_139 = 29; (g_139 != 34); g_139++)
    {
        return g_133[6];
    }
    if ((safe_lshift_func_uint16_t_u_s((l_141 = (((void*)0 == &l_183) <= (safe_lshift_func_int8_t_s_u((l_141 >= p_60), 2)))), 4)))
    {
        uint64_t l_204[1][10];
        uint64_t *l_205 = &g_206;
        int32_t l_220 = 1L;
        uint64_t *l_221 = (void*)0;
        uint64_t *l_222 = (void*)0;
        int32_t l_223 = (-10L);
        int32_t *l_224 = &g_78;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 10; j++)
                l_204[i][j] = 0xBB4AFCFED7C6F009LL;
        }
        for (g_145.f0 = 5; (g_145.f0 >= 2); g_145.f0 -= 1)
        {
            struct S0 *l_198[6];
            int i;
            for (i = 0; i < 6; i++)
                l_198[i] = (void*)0;
            g_199 = g_145;
        }
        (*l_224) = ((l_223 = (safe_mul_func_int16_t_s_s((l_220 = (0x83835E1D1A91C28ALL & (safe_add_func_uint8_t_u_u(((g_78 > (((((g_142 = (void*)0) != (void*)0) < l_204[0][5]) & (((((*l_205) = l_204[0][5]) < ((safe_lshift_func_int16_t_s_s(l_204[0][5], (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((void*)0 != l_217[7]), (*l_219))), 0x2FC4L)), 10)) ^ g_74), 4)))) ^ (**l_218))) | p_59) || 0x46BF972AL)) != 0xE6L)) && l_204[0][5]), 0x6FL)))), p_59))) <= g_133[2]);
        (*l_224) = ((void*)0 != &l_223);
    }
    else
    {
        (*l_175) = g_199;
    }
    return p_59;
}
static int8_t ** func_79(uint8_t p_80, const int8_t * p_81, int8_t * p_82, const int8_t * const * p_83)
{
    return &g_87;
}
inline static const int8_t * const * func_89(uint16_t p_90, int32_t p_91, int8_t ** p_92, const int8_t ** p_93, uint64_t p_94)
{
    struct S0 l_143[4][6][9] = {{{{0L},{3L},{0xC0CDL},{0x528EL},{0x8AFAL},{0xEF15L},{0xC23AL},{-1L},{0xBF99L}},{{0x3785L},{0x5260L},{0x0794L},{0x8AFAL},{0x47B2L},{8L},{0x4CE3L},{5L},{5L}},{{0x67F4L},{0x153EL},{0x2BE4L},{0x4CE3L},{3L},{0x33C1L},{0x2BF7L},{-1L},{0x79F7L}},{{0x2B13L},{0xB12BL},{0x2897L},{0x3B9CL},{1L},{0x8AFAL},{0x3785L},{-8L},{-1L}},{{-9L},{0x33C1L},{0x4CE3L},{1L},{-1L},{-1L},{0x2BE4L},{0x2897L},{0x4A7BL}},{{-10L},{0x2BF7L},{1L},{1L},{0x3687L},{0x3687L},{1L},{1L},{0x2BF7L}}},{{{0x2B13L},{1L},{0x3687L},{0xCB56L},{0x2BF7L},{0x47B2L},{0x2353L},{0x4A7BL},{-1L}},{{0x2BE4L},{-5L},{8L},{0x41B8L},{0L},{1L},{-1L},{0L},{0x1D39L}},{{0xBE49L},{1L},{0x41B8L},{0xB12BL},{8L},{0x4CE3L},{1L},{-1L},{0xBD68L}},{{-1L},{0x2BF7L},{0xC23AL},{7L},{0x33C1L},{1L},{-8L},{1L},{1L}},{{0x3687L},{0x33C1L},{0xCB56L},{0L},{0x41B8L},{-5L},{0x79F7L},{-1L},{1L}},{{0x3B9CL},{-1L},{0xBE49L},{0x0794L},{1L},{-5L},{0x2897L},{0x528EL},{1L}}},{{{0L},{0L},{0x2353L},{-10L},{0xE2FBL},{1L},{0x2B13L},{-5L},{5L}},{{0x33C1L},{2L},{4L},{0x4CE3L},{0x47B2L},{0x4CE3L},{4L},{2L},{0x33C1L}},{{0x4CE3L},{1L},{0x0794L},{0L},{0xC23AL},{1L},{3L},{-1L},{0L}},{{-1L},{0x0794L},{0xB12BL},{8L},{1L},{0x47B2L},{0xC23AL},{0xBF1CL},{0L}},{{0x4CE3L},{0xC23AL},{3L},{-1L},{0x3785L},{0x3687L},{2L},{0L},{4L}},{{0x33C1L},{8L},{0x3B9CL},{0x8AFAL},{0L},{-1L},{0x0794L},{-1L},{0xB12BL}}},{{{0L},{-8L},{-1L},{-8L},{0xC0CDL},{0x8AFAL},{0L},{0x153EL},{0x2B13L}},{{0x3B9CL},{1L},{1L},{5L},{0xC0CDL},{1L},{-9L},{0xC23AL},{0x2353L}},{{0x3687L},{8L},{0x3785L},{0x2353L},{0L},{0xE7BBL},{-1L},{-8L},{-1L}},{{-1L},{0xBE49L},{0x4A7BL},{0x3785L},{0x3785L},{0x4A7BL},{0xBE49L},{-1L},{-5L}},{{0xBE49L},{1L},{0L},{3L},{1L},{0xC0CDL},{0x3B9CL},{0xB12BL},{0L}},{{0x2BE4L},{0xBF1CL},{-8L},{1L},{0xC23AL},{0L},{0xC0CDL},{0x33C1L},{-5L}}}};
    struct S0 *l_144[10][1][6] = {{{&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][5][0],&l_143[0][2][5],&l_143[0][2][7]}},{{&l_143[1][3][3],&l_143[0][5][0],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][5][0],&l_143[1][3][3]}},{{&l_143[1][3][3],&l_143[0][2][5],&l_143[0][2][7],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][5]}},{{&l_143[1][3][3],&l_143[0][2][5],&l_143[1][3][3],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][7]}},{{&l_143[1][3][3],&l_143[0][5][0],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][5][0],&l_143[1][3][3]}},{{&l_143[1][3][3],&l_143[0][2][5],&l_143[0][2][7],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][5]}},{{&l_143[1][3][3],&l_143[0][2][5],&l_143[1][3][3],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][7]}},{{&l_143[1][3][3],&l_143[0][5][0],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][5][0],&l_143[1][3][3]}},{{&l_143[1][3][3],&l_143[0][2][5],&l_143[0][2][7],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][5]}},{{&l_143[1][3][3],&l_143[0][2][5],&l_143[1][3][3],&l_143[0][2][5],&l_143[0][2][5],&l_143[0][2][7]}}};
    int i, j, k;
    g_145 = l_143[0][2][5];
    return g_142;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_231[i], "g_231[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_745[i][j][k], "g_745[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_863[i][j][k], "g_863[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_905[i][j][k], "g_905[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
