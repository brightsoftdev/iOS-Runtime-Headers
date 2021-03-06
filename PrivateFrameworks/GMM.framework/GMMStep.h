/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString, GMMDateTime;

@interface GMMStep : PBCodable  {
    BOOL _hasStepType;
    int _stepType;
    NSString *_instructions;
    BOOL _hasDistanceMeters;
    int _distanceMeters;
    BOOL _hasDurationSeconds;
    int _durationSeconds;
    BOOL _hasDeparturePointIndex;
    int _departurePointIndex;
    NSString *_departureAddress;
    NSString *_arrivalAddress;
    GMMDateTime *_departureDateTime;
    GMMDateTime *_arrivalDateTime;
    BOOL _hasDepartureIntervalSeconds;
    int _departureIntervalSeconds;
    NSString *_direction;
    BOOL _hasIconId;
    long long _iconId;
    NSString *_iconSummaryText;
    BOOL _hasShowInInstructions;
    BOOL _showInInstructions;
    BOOL _hasTransitAgencyIndex;
    int _transitAgencyIndex;
    NSString *_streetViewPanoId;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _alertIndexs;
    NSMutableArray *_notices;
    BOOL _hasManeuverType;
    int _maneuverType;
    BOOL _hasManeuverTurnSide;
    int _maneuverTurnSide;
    BOOL _hasManeuverTurnNumber;
    int _maneuverTurnNumber;
    NSMutableArray *_stepCues;
    NSString *_deprecatedDistance;
    NSString *_deprecatedDuration;
}

@property BOOL hasStepType;
@property int stepType;
@property(readonly) BOOL hasInstructions;
@property(retain) NSString * instructions;
@property BOOL hasDistanceMeters;
@property int distanceMeters;
@property BOOL hasDurationSeconds;
@property int durationSeconds;
@property BOOL hasDeparturePointIndex;
@property int departurePointIndex;
@property(readonly) BOOL hasDepartureAddress;
@property(retain) NSString * departureAddress;
@property(readonly) BOOL hasArrivalAddress;
@property(retain) NSString * arrivalAddress;
@property(readonly) BOOL hasDepartureDateTime;
@property(retain) GMMDateTime * departureDateTime;
@property(readonly) BOOL hasArrivalDateTime;
@property(retain) GMMDateTime * arrivalDateTime;
@property BOOL hasDepartureIntervalSeconds;
@property int departureIntervalSeconds;
@property(readonly) BOOL hasDirection;
@property(retain) NSString * direction;
@property BOOL hasIconId;
@property long long iconId;
@property(readonly) BOOL hasIconSummaryText;
@property(retain) NSString * iconSummaryText;
@property BOOL hasShowInInstructions;
@property BOOL showInInstructions;
@property BOOL hasTransitAgencyIndex;
@property int transitAgencyIndex;
@property(readonly) BOOL hasStreetViewPanoId;
@property(retain) NSString * streetViewPanoId;
@property(readonly) unsigned int alertIndexsCount;
@property(readonly) int* alertIndexs;
@property(retain) NSMutableArray * notices;
@property BOOL hasManeuverType;
@property int maneuverType;
@property BOOL hasManeuverTurnSide;
@property int maneuverTurnSide;
@property BOOL hasManeuverTurnNumber;
@property int maneuverTurnNumber;
@property(retain) NSMutableArray * stepCues;
@property(readonly) BOOL hasDeprecatedDistance;
@property(retain) NSString * deprecatedDistance;
@property(readonly) BOOL hasDeprecatedDuration;
@property(retain) NSString * deprecatedDuration;


- (id)description;
- (id)description;
- (void)dealloc;
- (void)setInstructions:(id)arg1;
- (id)instructions;
- (id)dictionaryRepresentation;
- (id)direction;
- (void)setDirection:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasDirection;
- (void)writeTo:(id)arg1;
- (id)stepCues;
- (int)maneuverTurnNumber;
- (void)setHasManeuverTurnNumber:(BOOL)arg1;
- (BOOL)hasManeuverTurnNumber;
- (int)maneuverTurnSide;
- (void)setHasManeuverTurnSide:(BOOL)arg1;
- (BOOL)hasManeuverTurnSide;
- (int)maneuverType;
- (void)setHasManeuverType:(BOOL)arg1;
- (BOOL)hasManeuverType;
- (id)notices;
- (void)setHasTransitAgencyIndex:(BOOL)arg1;
- (void)setHasShowInInstructions:(BOOL)arg1;
- (id)iconSummaryText;
- (void)setHasIconId:(BOOL)arg1;
- (BOOL)hasIconId;
- (int)departureIntervalSeconds;
- (void)setHasDepartureIntervalSeconds:(BOOL)arg1;
- (BOOL)hasDepartureIntervalSeconds;
- (void)setHasDeparturePointIndex:(BOOL)arg1;
- (void)setHasStepType:(BOOL)arg1;
- (id)stepCueAtIndex:(unsigned int)arg1;
- (unsigned int)stepCuesCount;
- (id)noticeAtIndex:(unsigned int)arg1;
- (unsigned int)noticesCount;
- (void)setAlertIndexs:(int*)arg1 count:(unsigned int)arg2;
- (int)alertIndexAtIndex:(unsigned int)arg1;
- (void)addAlertIndex:(int)arg1;
- (void)clearAlertIndexs;
- (int*)alertIndexs;
- (unsigned int)alertIndexsCount;
- (BOOL)hasIconSummaryText;
- (void)addStepCue:(id)arg1;
- (void)setManeuverTurnNumber:(int)arg1;
- (void)setManeuverTurnSide:(int)arg1;
- (void)setManeuverType:(int)arg1;
- (void)addNotice:(id)arg1;
- (void)setTransitAgencyIndex:(int)arg1;
- (void)setShowInInstructions:(BOOL)arg1;
- (void)setDepartureIntervalSeconds:(int)arg1;
- (void)setDeparturePointIndex:(int)arg1;
- (void)setStepType:(int)arg1;
- (void)setStepCues:(id)arg1;
- (void)setNotices:(id)arg1;
- (void)setIconSummaryText:(id)arg1;
- (void)setArrivalAddress:(id)arg1;
- (void)setDepartureAddress:(id)arg1;
- (id)deprecatedDuration;
- (id)deprecatedDistance;
- (void)setHasDurationSeconds:(BOOL)arg1;
- (void)setHasDistanceMeters:(BOOL)arg1;
- (BOOL)hasDeprecatedDuration;
- (BOOL)hasDeprecatedDistance;
- (void)setDurationSeconds:(int)arg1;
- (void)setDistanceMeters:(int)arg1;
- (void)setDeprecatedDuration:(id)arg1;
- (void)setDeprecatedDistance:(id)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (void)setDepartureDateTime:(id)arg1;
- (long long)iconId;
- (void)setIconId:(long long)arg1;
- (id)streetViewPanoId;
- (BOOL)hasStreetViewPanoId;
- (void)setStreetViewPanoId:(id)arg1;
- (int)departurePointIndex;
- (BOOL)hasDeparturePointIndex;
- (int)transitAgencyIndex;
- (BOOL)hasTransitAgencyIndex;
- (BOOL)showInInstructions;
- (BOOL)hasShowInInstructions;
- (id)arrivalAddress;
- (BOOL)hasArrivalAddress;
- (id)departureAddress;
- (BOOL)hasDepartureAddress;
- (BOOL)hasInstructions;
- (int)stepType;
- (BOOL)hasStepType;
- (id)arrivalDateTime;
- (BOOL)hasArrivalDateTime;
- (id)departureDateTime;
- (BOOL)hasDepartureDateTime;
- (int)durationSeconds;
- (BOOL)hasDurationSeconds;
- (int)distanceMeters;
- (BOOL)hasDistanceMeters;

@end
