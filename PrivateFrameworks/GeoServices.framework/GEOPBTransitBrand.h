/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitBrand : PBCodable <NSCopying> {
    unsigned int  _brandIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int brandIndex : 1; 
    }  _has;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    GEOStyleAttributes * _styleAttributes;
}

@property (nonatomic) unsigned int brandIndex;
@property (nonatomic) BOOL hasBrandIndex;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasNameDisplayString;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;

- (unsigned int)brandIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBrandIndex;
- (BOOL)hasMuid;
- (BOOL)hasNameDisplayString;
- (BOOL)hasStyleAttributes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (BOOL)readFrom:(id)arg1;
- (void)setBrandIndex:(unsigned int)arg1;
- (void)setHasBrandIndex:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (void)writeTo:(id)arg1;

@end
