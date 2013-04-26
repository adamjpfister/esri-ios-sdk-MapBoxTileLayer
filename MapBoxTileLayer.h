//
//  MapBoxTileLayer.h
//  evMETRA
//
//  Created by pfister on 4/25/13.
//  Copyright (c) 2013 apf. All rights reserved.
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
