//
//  ABI30_0_0AIRGoogleMapOverlay.h
//
//  Created by Taro Matsuzawa on 5/3/17.
//

#import <Foundation/Foundation.h>
#import <GoogleMaps/GoogleMaps.h>
#import <ReactABI30_0_0/ABI30_0_0RCTBridge.h>
#import "ABI30_0_0AIRMapCoordinate.h"
#import "ABI30_0_0AIRGoogleMap.h"

@interface ABI30_0_0AIRGoogleMapOverlay : UIView

@property (nonatomic, strong) GMSGroundOverlay *overlay;
@property (nonatomic, copy) NSString *imageSrc;
@property (nonatomic, strong, readonly) UIImage *overlayImage;
@property (nonatomic, copy) NSArray *boundsRect;
@property (nonatomic, readonly) GMSCoordinateBounds *overlayBounds;

@property (nonatomic, weak) ABI30_0_0RCTBridge *bridge;

@end
