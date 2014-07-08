//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FSAliasInfo {
    struct UTCDateTime volumeCreateDate;
    struct UTCDateTime targetCreateDate;
    unsigned int fileType;
    unsigned int fileCreator;
    unsigned int parentDirID;
    unsigned int nodeID;
    unsigned short filesystemID;
    unsigned short signature;
    unsigned char volumeIsBootVolume;
    unsigned char volumeIsAutomounted;
    unsigned char volumeIsEjectable;
    unsigned char volumeHasPersistentFileIDs;
    unsigned char isDirectory;
};

struct FSCatalogInfo {
    unsigned short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    struct UTCDateTime _field9;
    struct UTCDateTime _field10;
    struct UTCDateTime _field11;
    struct UTCDateTime _field12;
    struct UTCDateTime _field13;
    struct FSPermissionInfo _field14;
    unsigned char _field15[16];
    unsigned char _field16[16];
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned int _field21;
    unsigned int _field22;
};

struct FSPermissionInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned short _field5;
    struct __FSFileSecurity *_field6;
};

struct FSRef {
    unsigned char hidden[80];
};

struct GetVolParmsInfoBuffer {
    short vMVersion;
    int vMAttrib;
    char **vMLocalHand;
    int vMServerAdr;
    int vMVolumeGrade;
    short vMForeignPrivID;
    int vMExtendedAttributes;
    void *vMDeviceID;
    unsigned long long vMMaxNameLength;
};

struct HFSUniStr255 {
    unsigned short _field1;
    unsigned short _field2[255];
};

struct NSObject {
    Class _field1;
};

struct UTCDateTime {
    unsigned short highSeconds;
    unsigned int lowSeconds;
    unsigned short fraction;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _opaque_pthread_attr_t {
    long long _field1;
    char _field2[56];
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

struct timeval {
    long long _field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char _field1;
    char _field2;
    void *_field3;
} CDStruct_b292f685;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;
