//
//  CIFilter+HTCICategoryGeometryAdjustment.h
//  HTCoreImageDemo
//
//  Created by Jacob Jennings on 4/2/13.
//  Copyright (c) 2013 HotelTonight

//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.



//

#import <CoreImage/CoreImage.h>

@interface CIFilter (HTCICategoryGeometryAdjustment)

+ (CIFilter *)filterWithAffineTransform:(CGAffineTransform)transform NS_AVAILABLE_IOS(5_0);

+ (CIFilter *)filterWithBestAvailableScalingMethod:(CGFloat)scale NS_AVAILABLE_IOS(5_0);

+ (CIFilter *)filterLanczosWithScale:(CGFloat)scale NS_AVAILABLE_IOS(6_0);

+ (CIFilter *)filterPerspectiveTransformWithTopLeft:(CGPoint)topLeft
                                           topRight:(CGPoint)topRight
                                        bottomRight:(CGPoint)bottomRight
                                         bottomLeft:(CGPoint)bottomLeft NS_AVAILABLE_IOS(6_0);

+ (CIFilter *)filterPerspectiveTransformWithExtent:(CIVector *)extent
                                           topLeft:(CGPoint)topLeft
                                           topRight:(CGPoint)topRight
                                        bottomRight:(CGPoint)bottomRight
                                         bottomLeft:(CGPoint)bottomLeft NS_AVAILABLE_IOS(6_0);

+ (CIFilter *)filterStraightenFilterWithAngle:(CGFloat)angle NS_AVAILABLE_IOS(5_0); // default 0



@end
