//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBLibraryObjectTemplate.h>

@class IBObjectContainer;

@interface IBLibraryCustomObjectTemplate : IBLibraryObjectTemplate
{
    IBObjectContainer *objectContainer;
}

- (BOOL)isIntegratedByPlugin;
- (id)pluginDependencies;
- (id)pasteboardObjects;
- (id)objectContainer;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andObjectContainer:(id)arg2;

@end
