{ Parsed from CoreData.framework (iPhoneOS8.2) NSFetchRequestExpression.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSFetchRequestExpressionPtr = ^NSFetchRequestExpression;
{$endif}

{$ifdef TYPES}
const
  NSFetchRequestExpressionType = 50;
{$endif}

{$ifdef CLASSES}

type
  NSFetchRequestExpression = objcclass external (NSExpression)
  private
    _reserved1: pointer;
    _reserved2: pointer;
    _reserved3: pointer;
    _reserved4: pointer;
    _fetchRequest: NSExpression;
    _managedObjectContext: NSExpression;
    _fetchExpressionFlags: bitpacked record
      case byte of
        0: (_anonBitField__fetchExpressionFlags0: cuint);
        1: (
          isCountOnly: 0..1;
          _RESERVED: 0..((1 shl 31)-1);
        );
      end;
  public
    class function expressionForFetch_context_countOnly (fetch: NSExpression; context: NSExpression; countFlag: boolean): NSExpression; message 'expressionForFetch:context:countOnly:';
    function requestExpression: NSExpression; message 'requestExpression';
    function contextExpression: NSExpression; message 'contextExpression';
    function isCountOnlyRequest: boolean; message 'isCountOnlyRequest';
  end;
{$endif}

