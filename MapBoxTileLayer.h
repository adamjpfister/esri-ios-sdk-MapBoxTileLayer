//
//  MapBoxTileLayer.h
//  

#import <ArcGIS/ArcGIS.h>

@interface MapBoxTileLayer : AGSTiledServiceLayer 
{
@protected
    NSString *_mapBoxId;
	AGSTileInfo* _tileInfo;
	AGSEnvelope* _fullEnvelope;
	AGSUnits _units;
    NSArray *_subdomains;
}

- (id)initWithMapBoxId:(NSString*)mapBoxId;

- (NSURL*)urlForTileKey:(AGSTileKey *)key;

@end
