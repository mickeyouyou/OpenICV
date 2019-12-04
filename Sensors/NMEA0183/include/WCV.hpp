#if ! defined( WCV_CLASS_HEADER )

#define WCV_CLASS_HEADER

/*
** Author: Samuel R. Blackburn
** Internet: sam_blackburn@pobox.com
**
** You can use it any way you like as long as you don't try to sell it.
**
** Copyright, 1996, Samuel R. Blackburn
**
** $Workfile: wcv.hpp $
** $Revision: 4 $
** $Modtime: 10/10/98 4:43p $
*/

class WCV : public RESPONSE
{
   public:

      WCV();
      virtual ~WCV();

      /*
      ** Data
      */

      double  Velocity;
      QString To;

      /*
      ** Methods
      */

      virtual void Empty( void );
      virtual BOOL Parse( const SENTENCE& sentence );
      virtual BOOL Write( SENTENCE& sentence );

      /*
      ** Operators
      */

      virtual const WCV& operator = ( const WCV& source );
};

#endif // WCV_CLASS_HEADER
