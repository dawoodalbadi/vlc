/*****************************************************************************
 * VLCLibraryVideoCollectionViewContainerView.h: MacOS X interface module
 *****************************************************************************
 * Copyright (C) 2022 VLC authors and VideoLAN
 *
 * Authors: Claudio Cambra <developer@claudiocambra.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

#import "library/video-library/VLCLibraryVideoGroupDescriptor.h"

@class VLCSubScrollView;
@class VLCLibraryCollectionViewFlowLayout;
@class VLCLibraryVideoCollectionViewGroupDescriptor;
@class VLCLibraryVideoCollectionViewContainerViewDataSource;

NS_ASSUME_NONNULL_BEGIN

@interface VLCLibraryVideoCollectionViewContainerView : NSView

@property (readonly) NSCollectionView *collectionView;
@property (readonly) VLCLibraryCollectionViewFlowLayout *collectionViewLayout;
@property (readonly) VLCSubScrollView *scrollView;
@property (readonly) VLCLibraryVideoCollectionViewContainerViewDataSource *dataSource;
@property (readonly) VLCLibraryVideoCollectionViewGroupDescriptor *groupDescriptor;
@property (readwrite, assign, nonatomic) VLCLibraryVideoGroup videoGroup;
@property (readwrite, assign) NSArray<NSLayoutConstraint *> *constraintsWithSuperview;

- (void)setVideoGroup:(VLCLibraryVideoGroup)group;

@end

NS_ASSUME_NONNULL_END
