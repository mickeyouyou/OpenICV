#if ! defined( VPW_CLASS_HEADER )

#define VPW_CLASS_HEADER

/*
** Author: Samuel R. Blackburn
** Internet: sam_blackburn@pobox.com
**
** You can use it any way you like as long as you don't try to sell it.
**
** Copyright, 1996, Samuel R. Blackburn
**
** $Workfile: vpw.hpp $
** $Revision: 4 $
** $Modtime: 10/10/98 4:43p $
*/

class VPW : public RESPONSE
{
   public:

      VPW();
      virtual ~VPW();

      /*
      ** Data
      */

      double Knots;
      double MetersPerSecond;

      /*
      ** Methods
      */

      virtual void Empty( void );
      virtual BOOL Parse( const SENTENCE& sentence );
      virtual BOOL Write( SENTENCE& sentence );

      /*
      ** Operators
      */

      virtual const VPW& operator = ( const VPW& source );
};

#endif // VPW_CLASS_HEADER
