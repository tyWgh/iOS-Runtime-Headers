/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPlaylist, MPMediaQueryCriteria, MPMediaLibrary, NSSet, MPMediaQuerySectionInfo, NSString, MPMediaItem, NSArray;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
    struct MPMediaQueryInternal { 
        MPMediaLibrary *_mediaLibrary; 
        MPMediaQueryCriteria *_criteria; 
        int _isFilteringDisabled; 
        NSArray *_staticEntities; 
        int _staticEntityType; 
    } _internal;
}

@property(readonly) NSArray * entities;
@property unsigned int groupingThreshold;
@property(readonly) NSString * bestTitle;
@property(readonly) NSArray * playlistsWithoutActivePlaylists;
@property(readonly) int containingEntityType;
@property(readonly) MPMediaItem * containingEntityRepresentativeItem;
@property(readonly) MPMediaPlaylist * containingPlaylist;
@property(readonly) int comparableGroupingType;
@property int filteredMediaTypes;
@property(retain) NSSet * filterPredicates;
@property(readonly) NSArray * items;
@property(readonly) NSArray * collections;
@property int groupingType;
@property(readonly) NSArray * itemSections;
@property(readonly) NSArray * collectionSections;
@property(retain) MPMediaLibrary * mediaLibrary;
@property(copy) NSSet * itemPropertiesToFetch;
@property(copy) NSSet * collectionPropertiesToFetch;
@property(getter=_orderingProperties,setter=_setOrderingProperties:,copy) NSArray * orderingProperties;
@property BOOL sortItems;
@property(readonly) MPMediaQuerySectionInfo * itemSectionInfo;
@property(readonly) MPMediaQuerySectionInfo * collectionSectionInfo;
@property(readonly) BOOL excludesEntitiesWithBlankNames;
@property(readonly) BOOL specifiesPlaylistItems;
@property(readonly) BOOL willGroupEntities;
@property struct MPMediaQueryInternal { id x1; id x2; int x3; id x4; int x5; } _internal;

+ (id)activeGeniusPlaylist;
+ (id)geniusMixesQuery;
+ (id)movieRentalsQuery;
+ (id)videosQuery;
+ (id)audibleAudiobooksQuery;
+ (id)ITunesUAudioQuery;
+ (void)setFilteringDisabled:(BOOL)arg1;
+ (void)initialize;
+ (id)videoPodcastsQuery;
+ (id)tvShowsQuery;
+ (id)musicVideosQuery;
+ (id)moviesQuery;
+ (id)genresQuery;
+ (id)composersQuery;
+ (id)compilationsQuery;
+ (id)audiobooksQuery;
+ (id)podcastsQuery;
+ (id)playlistsQuery;
+ (id)songsQuery;
+ (id)artistsQuery;
+ (id)albumsQuery;
+ (id)devicePurchasesPlaylist;
+ (id)activeOnTheGoPlaylist;
+ (id)queryForMediaEntityType:(int)arg1;

- (id)criteria;
- (void)setCriteria:(id)arg1;
- (void)setFilterPropertyPredicate:(id)arg1;
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;
- (void)removePredicatesForProperty:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (void)setStaticEntities:(id)arg1 entityType:(int)arg2;
- (void)_enumerateCollectionsUsingBlock:(id)arg1;
- (BOOL)_isFilteringDisabled;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (id)_sanitizedQuery;
- (id)collectionSections;
- (id)itemSections;
- (BOOL)willGroupEntities;
- (BOOL)excludesEntitiesWithBlankNames;
- (BOOL)sortItems;
- (id)_orderingProperties;
- (void)_setOrderingProperties:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (id)collectionPropertiesToFetch;
- (id)itemPropertiesToFetch;
- (id)initWithEntities:(id)arg1 entityType:(int)arg2;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(int)arg3;
- (id)collectionSectionInfo;
- (id)itemSectionInfo;
- (unsigned int)groupingThreshold;
- (BOOL)specifiesPlaylistItems;
- (id)initWithFilterPredicatesInternal:(id)arg1;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (void)set_internal:(struct MPMediaQueryInternal { id x1; id x2; int x3; id x4; int x5; })arg1;
- (struct MPMediaQueryInternal { id x1; id x2; int x3; id x4; int x5; })_internal;
- (id)items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setGroupingType:(int)arg1;
- (void)setFilterPredicates:(id)arg1;
- (int)groupingType;
- (id)filterPredicates;
- (id)collections;
- (void)setMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setSortItems:(BOOL)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
- (unsigned int)groupingThreshold;
- (id)entities;
- (id)displayableStringByStrippingCommonPrefixOffString:(id)arg1 property:(id)arg2;
- (int)comparableGroupingType;
- (BOOL)isEqualToNowPlayingQuery:(id)arg1;
- (void)setFilteredMediaTypes:(int)arg1;
- (int)filteredMediaTypes;
- (id)backOfAlbumQueryForItem:(id)arg1;
- (id)containingEntityRepresentativeItem;
- (int)containingEntityType;
- (void)getListingCountFormatString:(id*)arg1 isFallbackFormatString:(BOOL*)arg2;
- (unsigned int)randomEntityIndexAvoidingEntityMatchingPredicate:(id)arg1;
- (id)bestTitle;
- (unsigned int)indexOfEntityWithPersistentID:(unsigned long long)arg1;
- (unsigned int)indexOfFirstEntityMatchingPredicate:(id)arg1;
- (id)representativeItemsForAlbumsOfArtistAtIndex:(unsigned int)arg1 returningTotalItemCount:(unsigned int*)arg2;
- (void)setGroupingThreshold:(unsigned int)arg1;
- (id)playlistsWithoutActivePlaylists;
- (id)queryForDrillingIntoEntityAtIndex:(unsigned int)arg1;
- (id)firstFrequentLongPrefixForProperty:(id)arg1 occurrenceCount:(unsigned int*)arg2;
- (void)_calculateFirstFrequentLongPrefixInfo:(struct { id x1; id x2; unsigned int x3; }*)arg1;
- (id)nowPlayingComparableQuery;
- (id)containingPlaylist;
- (id)queryForDrillingIntoEntity:(id)arg1;
- (id)representativeItemForEntityAtIndex:(unsigned int)arg1;

@end