#ifndef icvAtomicNode_h
#define icvAtomicNode_h

#define ICV_CONFIG_ATOMIC
#define ICV_CONFIG_THREAD
#include "OpenICV/Core/icvConfig.h"
#undef ICV_CONFIG_ATOMIC
#undef ICV_CONFIG_THREAD

#include "OpenICV/Core/icvObject.h"
#include "OpenICV/Core/icvNode.h"

namespace icv { namespace node
{
    using namespace icv::core;

    class icvAtomicNode : public icvNode
    {
    public:
        icvAtomicNode(icvFunction* function) : icvNode(function) {}
        icvAtomicNode(icvFunction* function,
            icv_shared_ptr<const icvMetaData> params,
            icv_shared_ptr<const icvMetaData>* input_params,
            icv_shared_ptr<const icvMetaData>* output_params,int num_inport,int num_outport)
            : icvNode(function, params, input_params, output_params, num_inport, num_outport) {}

        virtual void Start(icvMonitor* monitor) ICV_OVERRIDE;
        virtual void Progress() ICV_OVERRIDE;
        virtual void Abort() ICV_OVERRIDE;
        virtual void Trigger(icvNodeOutput* caller) ICV_OVERRIDE;

    private:
        spin_lock _lock;

    private:
        void InnerLoop();
    };
}}

#endif // icvAtomicNode_h
