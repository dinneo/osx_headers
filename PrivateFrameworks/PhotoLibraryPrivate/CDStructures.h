//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct LiRidBitset;

struct NSObject {
    Class _field1;
};

struct PFIntSize_st {
    unsigned long long width;
    unsigned long long height;
};

struct PFMulticaster {
    Class _field1;
};

struct XTCFHeader {
    unsigned int signature;
    unsigned short version;
    unsigned short flags;
    unsigned int openCount;
    unsigned int indexLength;
    long long offsetToIndexes;
    long long offsetToData;
    long long offsetToEndOfData;
    long long offsetToEndOfFile;
    unsigned int indexCount;
    unsigned int sortedCount;
    unsigned int indexCapacity;
    unsigned int indexEntryLength;
    unsigned long long serialNumber;
    unsigned int userVersion;
    unsigned int userDataType;
    unsigned int userDataLength;
    unsigned int pageAlignment;
};

struct _CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct __wrap_iter<const std::__1::shared_ptr<LiRidBitset>*> {
    shared_ptr_4932a42e *__i;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct liPage {
    CDUnknownFunctionPointerType *_field1;
};

struct shared_ptr<LiRidBitset> {
    struct LiRidBitset *_field1;
    struct __shared_weak_count *_field2;
};

struct vector<std::__1::shared_ptr<LiRidBitset>, std::__1::allocator<std::__1::shared_ptr<LiRidBitset>>> {
    shared_ptr_4932a42e *__begin_;
    shared_ptr_4932a42e *__end_;
    struct __compressed_pair<std::__1::shared_ptr<LiRidBitset>*, std::__1::allocator<std::__1::shared_ptr<LiRidBitset>>> {
        shared_ptr_4932a42e *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned long long _field3;
        unsigned long long _field4;
    } _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
    char _field7[36];
} CDStruct_967ea38f;

typedef struct {
    struct {
        unsigned long long startTime;
        unsigned long long serviceTime;
    } t;
    struct {
        double virtualSize;
        double residentSize;
        double residentSizeMax;
    } m;
} CDStruct_c802c68a;

// Template types
typedef struct __wrap_iter<const std::__1::shared_ptr<LiRidBitset>*> {
    shared_ptr_4932a42e *__i;
} __wrap_iter_a5f64ff8;

typedef struct shared_ptr<LiRidBitset> {
    struct LiRidBitset *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_4932a42e;

typedef struct vector<std::__1::shared_ptr<LiRidBitset>, std::__1::allocator<std::__1::shared_ptr<LiRidBitset>>> {
    shared_ptr_4932a42e *__begin_;
    shared_ptr_4932a42e *__end_;
    struct __compressed_pair<std::__1::shared_ptr<LiRidBitset>*, std::__1::allocator<std::__1::shared_ptr<LiRidBitset>>> {
        shared_ptr_4932a42e *__first_;
    } __end_cap_;
} vector_4442b5b9;

