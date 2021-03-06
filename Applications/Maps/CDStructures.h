//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _high;
    unsigned long long _low;
} CDStruct_612aec5b;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    struct CGSize referenceSize;
    double arrowStemWidth;
    double intersectionStemWidth;
    double intersectionStrokeWidth;
    struct CGSize arrowHeadSize;
    double arrowStemCornerRadius;
    double arbitraryCurveRadius;
    double uTurnRadius;
    long long arrowStyle;
    double rightTurnCurveRadius;
    double rightTurnInnerCurveRadius;
    double rightTurnStemLengthBeforeTurn;
    double rightTurnStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeSouthAngleStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleCornerRadius;
    double fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeNorthAngleStemLengthAfterTurn;
    double fortyFiveDegreeNorthAngleCornerRadius;
    double exitStemLengthBeforeTurn;
    double exitStemLengthAfterTurn;
    double exitRoadNotTakenStemLength;
    double arrivalOuterCircleWidth;
    double arrivalGapBetweenCircles;
    double arrivalGapBetweenArrowAndCircles;
    char arrivalCutOutArrowInInnerCircle;
    double mergeRightStemLengthBeforeTurn;
    double mergeRightStemLengthAfterTurn;
    double mergeRightCornerRadius;
    char junctionsDrawEntryExitRightAngles;
    char junctionsDrawEntryExitFortyFiveDegreeAngles;
} CDStruct_0b3dd7f4;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_2c43369c center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_feeb6407;

typedef struct {
    CDStruct_34734122 origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

