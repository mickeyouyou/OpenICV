#if ! defined( VWE_CLASS_HEADER )

#define VWE_CLASS_HEADER

/*
** Author: Samuel R. Blackburn
** Internet: sam_blackburn@pobox.com
**
** You can use it any way you like as long as you don't try to sell it.
**
** Copyright, 1996, Samuel R. Blackburn
**
** $Workfile: vwe.hpp $
** $Revision: 4 $
** $Modtime: 10/10/98 4:41p $
*/

class VWE : public RESPONSE
{
   public:

      VWE();
      virtual ~VWE();

      /*
      ** Data
      */

      int EfficiencyPercent;

      /*
      ** Methods
      */

      virtual void Empty( void );
      virtual BOOL Parse( const SENTENCE& sentence );
      virtual BOOL Write( SENTENCE& sentence );

      /*
      ** Operators
      */

      virtual const VWE& operator = ( const VWE& source );
};

#endif // VWE_CLASS_HEADER
