/* -*- mode:objc -*- */
/* Japanese Terminal Program    2001 Copyright(C) Kiichi Kusama */
/* $Id$ */
/* Incorporated into iTerm.app by Ujwal S. Sathyam */


#import <Cocoa/Cocoa.h>

@interface PTYWindow : NSWindow 
{
}

- (float)_transparency;
- initWithContentRect:(NSRect)contentRect 
            styleMask:(unsigned int)aStyle 
	      backing:(NSBackingStoreType)bufferingType 
		defer:(BOOL)flag;
@end
