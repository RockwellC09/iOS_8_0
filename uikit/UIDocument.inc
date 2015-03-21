{ Parsed from UIKit.framework (iPhoneOS8.2) UIDocument.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDocumentPtr = ^UIDocument;
{$endif}

{$ifdef TYPES}
type
  UIDocumentChangeKind = NSInteger;
  UIDocumentChangeKindPtr = ^UIDocumentChangeKind;

const
  UIDocumentChangeDone = 0;
  UIDocumentChangeUndone = 1;
  UIDocumentChangeRedone = 2;
  UIDocumentChangeCleared = 3;

type
  UIDocumentSaveOperation = NSInteger;
  UIDocumentSaveOperationPtr = ^UIDocumentSaveOperation;

const
  UIDocumentSaveForCreating = 0;
  UIDocumentSaveForOverwriting = 1;

type
  UIDocumentState = NSUInteger;
  UIDocumentStatePtr = ^UIDocumentState;

const
  UIDocumentStateNormal = 0;
  UIDocumentStateClosed = 1 shl 0;
  UIDocumentStateInConflict = 1 shl 1;
  UIDocumentStateSavingError = 1 shl 2;
  UIDocumentStateEditingDisabled = 1 shl 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIDocumentStateChangedNotification: NSString { available in 5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIDocument = objcclass external (NSObject, NSFilePresenterProtocol)
  private
    _fileURL: NSURL;
    _fileType: NSString;
    _localizedName: NSString;
    _undoManager: NSUndoManager;
    _fileModificationDate: NSDate;
    _fileAccessQueue: dispatch_queue_t;
    _openingQueue: dispatch_queue_t;
    _fileAccessSemaphore: dispatch_semaphore_t;
    _filePresenterQueue: NSOperationQueue;
    _differenceDueToRecentChanges: id;
    _differenceSincePreservingPreviousVersion: id;
    _differenceSinceSaving: id;
    _autosavingTimer: NSTimer;
    _lastSaveTime: CFAbsoluteTime;
    _lastPreservationTime: CFAbsoluteTime;
    _versionWithoutRecentChanges: id;
    _versions: NSMutableArray;
    _documentPropertyLock: NSLock;
    _alertPresenter: id;
    __docFlags: bitpacked record
      case byte of
        0: (_anonBitField___docFlags0: cuint);
        1: (
          inClose: 0..1;
          isOpen: 0..1;
          inOpen: 0..1;
          isAutosavingBecauseOfTimer: 0..1;
          versionWithoutRecentChangesIsNotLastOpened: 0..1;
          ignoreUndoAndRedoNotifications: 0..1;
          editingDisabled: 0..1;
          isRegisteredAsFilePresenter: 0..1;
          movingFile: 0..1;
          savingError: 0..1;
          inConflict: 0..1;
          needToStopAccessingSecurityScopedResource: 0..1;
        );
      end;
  public
    function initWithFileURL (url: NSURL): instancetype; message 'initWithFileURL:';
    function fileURL: NSURL; message 'fileURL';
    function localizedName: NSString; message 'localizedName';
    function fileType: NSString; message 'fileType';
    procedure setFileModificationDate(newValue: NSDate); message 'setFileModificationDate:';
    function fileModificationDate: NSDate; message 'fileModificationDate';
    function documentState: UIDocumentState; message 'documentState';
    procedure openWithCompletionHandler (completionHandler: OpaqueCBlock); message 'openWithCompletionHandler:';
    procedure closeWithCompletionHandler (completionHandler: OpaqueCBlock); message 'closeWithCompletionHandler:';
    function loadFromContents_ofType_error (contents: id; typeName: NSString; outError: NSErrorPtr): boolean; message 'loadFromContents:ofType:error:';
    function contentsForType_error (typeName: NSString; outError: NSErrorPtr): id; message 'contentsForType:error:';
    procedure disableEditing; message 'disableEditing';
    procedure enableEditing; message 'enableEditing';
    procedure setUndoManager(newValue: NSUndoManager); message 'setUndoManager:';
    function undoManager: NSUndoManager; message 'undoManager';
    function hasUnsavedChanges: boolean; message 'hasUnsavedChanges';
    procedure updateChangeCount (change: UIDocumentChangeKind); message 'updateChangeCount:';
    function changeCountTokenForSaveOperation (saveOperation: UIDocumentSaveOperation): id; message 'changeCountTokenForSaveOperation:';
    procedure updateChangeCountWithToken_forSaveOperation (changeCountToken: id; saveOperation: UIDocumentSaveOperation); message 'updateChangeCountWithToken:forSaveOperation:';
    procedure saveToURL_forSaveOperation_completionHandler (url: NSURL; saveOperation: UIDocumentSaveOperation; completionHandler: OpaqueCBlock); message 'saveToURL:forSaveOperation:completionHandler:';
    procedure autosaveWithCompletionHandler (completionHandler: OpaqueCBlock); message 'autosaveWithCompletionHandler:';
    function savingFileType: NSString; message 'savingFileType';
    function fileNameExtensionForType_saveOperation (typeName: NSString; saveOperation: UIDocumentSaveOperation): NSString; message 'fileNameExtensionForType:saveOperation:';
    function writeContents_andAttributes_safelyToURL_forSaveOperation_error (contents: id; additionalFileAttributes: NSDictionary; url: NSURL; saveOperation: UIDocumentSaveOperation; outError: NSErrorPtr): boolean; message 'writeContents:andAttributes:safelyToURL:forSaveOperation:error:';
    function writeContents_toURL_forSaveOperation_originalContentsURL_error (contents: id; url: NSURL; saveOperation: UIDocumentSaveOperation; originalContentsURL: NSURL; outError: NSErrorPtr): boolean; message 'writeContents:toURL:forSaveOperation:originalContentsURL:error:';
    function fileAttributesToWriteToURL_forSaveOperation_error (url: NSURL; saveOperation: UIDocumentSaveOperation; outError: NSErrorPtr): NSDictionary; message 'fileAttributesToWriteToURL:forSaveOperation:error:';
    function readFromURL_error (url: NSURL; outError: NSErrorPtr): boolean; message 'readFromURL:error:';
    procedure performAsynchronousFileAccessUsingBlock (block: OpaqueCBlock); message 'performAsynchronousFileAccessUsingBlock:';
    procedure handleError_userInteractionPermitted (error: NSError; userInteractionPermitted: boolean); message 'handleError:userInteractionPermitted:';
    procedure finishedHandlingError_recovered (error: NSError; recovered: boolean); message 'finishedHandlingError:recovered:';
    procedure userInteractionNoLongerPermittedForError (error: NSError); message 'userInteractionNoLongerPermittedForError:';
    procedure revertToContentsOfURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'revertToContentsOfURL:completionHandler:';

    { Adopted protocols }
    procedure accommodatePresentedItemDeletionWithCompletionHandler (completionHandler: OpaqueCBlock); message 'accommodatePresentedItemDeletionWithCompletionHandler:';
    procedure accommodatePresentedSubitemDeletionAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'accommodatePresentedSubitemDeletionAtURL:completionHandler:';
    procedure presentedItemDidChange; message 'presentedItemDidChange';
    procedure presentedItemDidGainVersion (version: NSFileVersion); message 'presentedItemDidGainVersion:';
    procedure presentedItemDidLoseVersion (version: NSFileVersion); message 'presentedItemDidLoseVersion:';
    procedure presentedItemDidMoveToURL (newURL: NSURL); message 'presentedItemDidMoveToURL:';
    procedure presentedItemDidResolveConflictVersion (version: NSFileVersion); message 'presentedItemDidResolveConflictVersion:';
    function presentedItemOperationQueue: NSOperationQueue; message 'presentedItemOperationQueue';
    function presentedItemURL: NSURL; message 'presentedItemURL';
    procedure presentedSubitemAtURL_didGainVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didGainVersion:';
    procedure presentedSubitemAtURL_didLoseVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didLoseVersion:';
    procedure presentedSubitemAtURL_didMoveToURL (oldURL: NSURL; newURL: NSURL); message 'presentedSubitemAtURL:didMoveToURL:';
    procedure presentedSubitemAtURL_didResolveConflictVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didResolveConflictVersion:';
    procedure presentedSubitemDidAppearAtURL (url: NSURL); message 'presentedSubitemDidAppearAtURL:';
    procedure presentedSubitemDidChangeAtURL (url: NSURL); message 'presentedSubitemDidChangeAtURL:';
    function primaryPresentedItemURL: NSURL; message 'primaryPresentedItemURL';
    procedure relinquishPresentedItemToReader (reader: OpaqueCBlock); message 'relinquishPresentedItemToReader:';
    procedure relinquishPresentedItemToWriter (writer: OpaqueCBlock); message 'relinquishPresentedItemToWriter:';
    procedure savePresentedItemChangesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'savePresentedItemChangesWithCompletionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserActivityDocumentURLKey: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ActivityContinuation = objccategory external (UIDocument)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:';
    function userActivity: NSUserActivity; message 'userActivity';
    procedure updateUserActivityState (userActivity_: NSUserActivity); message 'updateUserActivityState:'; { available in 8_0 }
    procedure restoreUserActivityState (userActivity_: NSUserActivity); message 'restoreUserActivityState:'; { available in 8_0 }
  end;
{$endif}

