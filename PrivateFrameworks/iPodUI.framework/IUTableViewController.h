/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaActionSheet, IUTableViewControllerInfo, UISearchDisplayController, UITableView, UILabel, NSIndexPath, UIView, UIImage, IUSearchHelper, IUMediaAlertView;

@interface IUTableViewController : IUiPodViewController <IUSearchHelperDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate> {
    IUMediaActionSheet *_deleteActionSheet;
    NSIndexPath *_indexPathToDeletePendingConfirmation;
    unsigned int _editing : 1;
    unsigned int _keepSelectionOnAppear : 1;
    unsigned int _reloadingData : 1;
    unsigned int _ignoreTableReloadCount;
    IUTableViewControllerInfo *_restoreViewInfoAfterLoad;
    IUMediaAlertView *_selectionConfirmationAlert;
    IUMediaAlertView *_deleteAlertView;
    UIImage *_selectionImage;
    unsigned int _showingIndexBar : 1;
    unsigned int _startAtEndOnFirstAppear : 1;
    unsigned int _reloadWhenAppEntersForeground : 1;
    unsigned int _isBeingRemoved : 1;
    UITableView *_tableView;
    struct __CFDictionary { } *_displayedSectionIndexToDataSourceSectionIndex;
    UIView *_globalHeaderView;
    UILabel *_globalHeaderLabel;
    UIView *_footerView;
    IUSearchHelper *_searchHelper;
}

@property(getter=isIgnoringTableReload,readonly) BOOL ignoringTableReload;
@property BOOL fadeSelectionOnAppear;
@property(retain) UIImage * selectionImage;
@property(retain) UITableView * tableView;
@property(getter=isEditing) BOOL editing;
@property(readonly) BOOL hasSearchBar;
@property(readonly) BOOL allowsDisclosureInCells;
@property(getter=isShowingIndexBar,readonly) BOOL showingIndexBar;
@property(readonly) UISearchDisplayController * searchDisplayController;

+ (Class)tableCellClass;
+ (Class)tableViewClass;

- (id)init;
- (void)dealloc;
- (void)applicationResumedEventsOnly:(BOOL)arg1;
- (id)tableView;
- (id)searchDisplayController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)setEditing:(BOOL)arg1;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (void)setTableView:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setContext:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)reloadData;
- (void)_updateFooterView;
- (void)setSelectionImage:(id)arg1;
- (void)setVisibleCellsUseSubviewLayout:(BOOL)arg1;
- (BOOL)isShowingIndexBar;
- (void)setFadeSelectionOnAppear:(BOOL)arg1;
- (BOOL)fadeSelectionOnAppear;
- (void)reloadActionRowWithTag:(int)arg1 animated:(BOOL)arg2;
- (void)searchHelperWillEndSearch:(id)arg1;
- (void)searchHelperWillBeginSearch:(id)arg1;
- (void)_downloadAllAction:(id)arg1;
- (void)_popSelfIfEmpty;
- (void)_addGlobalHeaderIfNecessary;
- (void)doDeleteContinuationWithConfirmation:(BOOL)arg1;
- (void)_delayedUpdateAlternateStyles;
- (void)_updateCellConfigurations;
- (void)_delayedUpdateMovedCellData;
- (void)endIgnoringTableReload;
- (void)beginIgnoringTableReload;
- (id)selectionImage;
- (void)_deleteEntityAtIndexPath:(id)arg1;
- (void)_setDeleteAlertView:(id)arg1;
- (BOOL)deselectOnViewWillAppear;
- (BOOL)_isEmptyAndDoesntWantDisplay:(BOOL)arg1;
- (void)_reloadDataSource;
- (void)_createTableIfNecessary;
- (void)_deselectSelection:(BOOL)arg1;
- (void)updateForChangedEditingState:(BOOL)arg1;
- (void)_cancelDeleteAction:(id)arg1;
- (void)_updateHeightForTableHeaderViewHiding;
- (BOOL)isIgnoringTableReload;
- (void)_presentModalContextForTag:(int)arg1;
- (void)_setDeleteActionSheet:(id)arg1;
- (void)_cancelDeleteAlertView:(BOOL)arg1;
- (void)_reloadDataIncludingDataSource:(BOOL)arg1 popIfEmpty:(BOOL)arg2;
- (void)_tableViewController_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (BOOL)allowsDisclosureInCells;
- (void)performDefaultActionForRow:(int)arg1 existingContext:(id)arg2;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2 existingContext:(id)arg3;
- (void)reloadDataForDataSourceInvalidation;
- (BOOL)handleShortcutWithIdentifier:(id)arg1;
- (void)_fixupDataSource;
- (void)restoreViewControllerInfo:(id)arg1 animated:(BOOL)arg2;
- (void)accessoryButtonTapped:(id)arg1;
- (id)copyArchivableContexts;
- (void)setModalContext:(id)arg1;
- (BOOL)hideActionRowsOnAppear;
- (BOOL)hasSearchBar;
- (void)performDefaultActionForRow:(int)arg1;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (void)reloadActionRows;
- (void)mediaListAggregateView:(id)arg1 performActionForSimpleCellPreset:(int)arg2;
- (void)reloadCellAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_delayedDeselectIndexPath:(id)arg1;

@end
