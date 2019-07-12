// Layer Declaration header
//
// This file is auto-generated by cmake, don't edit it.

#include "layer/absval.h"
namespace ncnn {
class AbsVal_final : virtual public AbsVal
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = AbsVal::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = AbsVal::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(AbsVal_final)
} // namespace ncnn

#include "layer/argmax.h"
namespace ncnn {
class ArgMax_final : virtual public ArgMax
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ArgMax::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ArgMax::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ArgMax_final)
} // namespace ncnn

#include "layer/batchnorm.h"
namespace ncnn {
class BatchNorm_final : virtual public BatchNorm
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = BatchNorm::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = BatchNorm::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(BatchNorm_final)
} // namespace ncnn

#include "layer/bias.h"
namespace ncnn {
class Bias_final : virtual public Bias
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Bias::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Bias::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Bias_final)
} // namespace ncnn

#include "layer/bnll.h"
namespace ncnn {
class BNLL_final : virtual public BNLL
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = BNLL::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = BNLL::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(BNLL_final)
} // namespace ncnn

#include "layer/concat.h"
namespace ncnn {
class Concat_final : virtual public Concat
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Concat::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Concat::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Concat_final)
} // namespace ncnn

#include "layer/convolution.h"
#include "layer/x86/convolution_x86.h"
namespace ncnn {
class Convolution_final : virtual public Convolution, virtual public Convolution_x86
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Convolution::create_pipeline(opt); if (ret) return ret; }
        { int ret = Convolution_x86::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Convolution_x86::destroy_pipeline(opt); if (ret) return ret; }
        { int ret = Convolution::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Convolution_final)
} // namespace ncnn

#include "layer/crop.h"
namespace ncnn {
class Crop_final : virtual public Crop
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Crop::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Crop::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Crop_final)
} // namespace ncnn

#include "layer/deconvolution.h"
namespace ncnn {
class Deconvolution_final : virtual public Deconvolution
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Deconvolution::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Deconvolution::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Deconvolution_final)
} // namespace ncnn

#include "layer/dropout.h"
namespace ncnn {
class Dropout_final : virtual public Dropout
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Dropout::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Dropout::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Dropout_final)
} // namespace ncnn

#include "layer/eltwise.h"
namespace ncnn {
class Eltwise_final : virtual public Eltwise
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Eltwise::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Eltwise::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Eltwise_final)
} // namespace ncnn

#include "layer/elu.h"
namespace ncnn {
class ELU_final : virtual public ELU
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ELU::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ELU::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ELU_final)
} // namespace ncnn

#include "layer/embed.h"
namespace ncnn {
class Embed_final : virtual public Embed
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Embed::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Embed::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Embed_final)
} // namespace ncnn

#include "layer/exp.h"
namespace ncnn {
class Exp_final : virtual public Exp
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Exp::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Exp::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Exp_final)
} // namespace ncnn

#include "layer/flatten.h"
namespace ncnn {
class Flatten_final : virtual public Flatten
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Flatten::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Flatten::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Flatten_final)
} // namespace ncnn

#include "layer/innerproduct.h"
namespace ncnn {
class InnerProduct_final : virtual public InnerProduct
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = InnerProduct::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = InnerProduct::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(InnerProduct_final)
} // namespace ncnn

#include "layer/input.h"
namespace ncnn {
class Input_final : virtual public Input
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Input::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Input::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Input_final)
} // namespace ncnn

#include "layer/log.h"
namespace ncnn {
class Log_final : virtual public Log
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Log::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Log::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Log_final)
} // namespace ncnn

#include "layer/lrn.h"
namespace ncnn {
class LRN_final : virtual public LRN
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = LRN::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = LRN::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(LRN_final)
} // namespace ncnn

#include "layer/memorydata.h"
namespace ncnn {
class MemoryData_final : virtual public MemoryData
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = MemoryData::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = MemoryData::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(MemoryData_final)
} // namespace ncnn

#include "layer/mvn.h"
namespace ncnn {
class MVN_final : virtual public MVN
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = MVN::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = MVN::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(MVN_final)
} // namespace ncnn

#include "layer/pooling.h"
namespace ncnn {
class Pooling_final : virtual public Pooling
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Pooling::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Pooling::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Pooling_final)
} // namespace ncnn

#include "layer/power.h"
namespace ncnn {
class Power_final : virtual public Power
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Power::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Power::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Power_final)
} // namespace ncnn

#include "layer/prelu.h"
namespace ncnn {
class PReLU_final : virtual public PReLU
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = PReLU::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = PReLU::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(PReLU_final)
} // namespace ncnn

#include "layer/proposal.h"
namespace ncnn {
class Proposal_final : virtual public Proposal
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Proposal::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Proposal::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Proposal_final)
} // namespace ncnn

#include "layer/reduction.h"
namespace ncnn {
class Reduction_final : virtual public Reduction
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Reduction::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Reduction::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Reduction_final)
} // namespace ncnn

#include "layer/relu.h"
namespace ncnn {
class ReLU_final : virtual public ReLU
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ReLU::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ReLU::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ReLU_final)
} // namespace ncnn

#include "layer/reshape.h"
namespace ncnn {
class Reshape_final : virtual public Reshape
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Reshape::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Reshape::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Reshape_final)
} // namespace ncnn

#include "layer/roipooling.h"
namespace ncnn {
class ROIPooling_final : virtual public ROIPooling
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ROIPooling::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ROIPooling::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ROIPooling_final)
} // namespace ncnn

#include "layer/scale.h"
namespace ncnn {
class Scale_final : virtual public Scale
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Scale::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Scale::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Scale_final)
} // namespace ncnn

#include "layer/sigmoid.h"
namespace ncnn {
class Sigmoid_final : virtual public Sigmoid
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Sigmoid::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Sigmoid::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Sigmoid_final)
} // namespace ncnn

#include "layer/slice.h"
namespace ncnn {
class Slice_final : virtual public Slice
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Slice::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Slice::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Slice_final)
} // namespace ncnn

#include "layer/softmax.h"
namespace ncnn {
class Softmax_final : virtual public Softmax
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Softmax::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Softmax::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Softmax_final)
} // namespace ncnn

#include "layer/split.h"
namespace ncnn {
class Split_final : virtual public Split
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Split::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Split::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Split_final)
} // namespace ncnn

#include "layer/spp.h"
namespace ncnn {
class SPP_final : virtual public SPP
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = SPP::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = SPP::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(SPP_final)
} // namespace ncnn

#include "layer/tanh.h"
namespace ncnn {
class TanH_final : virtual public TanH
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = TanH::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = TanH::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(TanH_final)
} // namespace ncnn

#include "layer/threshold.h"
namespace ncnn {
class Threshold_final : virtual public Threshold
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Threshold::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Threshold::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Threshold_final)
} // namespace ncnn

#include "layer/tile.h"
namespace ncnn {
class Tile_final : virtual public Tile
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Tile::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Tile::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Tile_final)
} // namespace ncnn

#include "layer/rnn.h"
namespace ncnn {
class RNN_final : virtual public RNN
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = RNN::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = RNN::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(RNN_final)
} // namespace ncnn

#include "layer/lstm.h"
namespace ncnn {
class LSTM_final : virtual public LSTM
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = LSTM::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = LSTM::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(LSTM_final)
} // namespace ncnn

#include "layer/binaryop.h"
namespace ncnn {
class BinaryOp_final : virtual public BinaryOp
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = BinaryOp::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = BinaryOp::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(BinaryOp_final)
} // namespace ncnn

#include "layer/unaryop.h"
namespace ncnn {
class UnaryOp_final : virtual public UnaryOp
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = UnaryOp::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = UnaryOp::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(UnaryOp_final)
} // namespace ncnn

#include "layer/convolutiondepthwise.h"
#include "layer/x86/convolutiondepthwise_x86.h"
namespace ncnn {
class ConvolutionDepthWise_final : virtual public ConvolutionDepthWise, virtual public ConvolutionDepthWise_x86
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ConvolutionDepthWise::create_pipeline(opt); if (ret) return ret; }
        { int ret = ConvolutionDepthWise_x86::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ConvolutionDepthWise_x86::destroy_pipeline(opt); if (ret) return ret; }
        { int ret = ConvolutionDepthWise::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ConvolutionDepthWise_final)
} // namespace ncnn

#include "layer/padding.h"
namespace ncnn {
class Padding_final : virtual public Padding
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Padding::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Padding::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Padding_final)
} // namespace ncnn

#include "layer/squeeze.h"
namespace ncnn {
class Squeeze_final : virtual public Squeeze
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Squeeze::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Squeeze::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Squeeze_final)
} // namespace ncnn

#include "layer/expanddims.h"
namespace ncnn {
class ExpandDims_final : virtual public ExpandDims
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ExpandDims::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ExpandDims::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ExpandDims_final)
} // namespace ncnn

#include "layer/normalize.h"
namespace ncnn {
class Normalize_final : virtual public Normalize
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Normalize::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Normalize::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Normalize_final)
} // namespace ncnn

#include "layer/permute.h"
namespace ncnn {
class Permute_final : virtual public Permute
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Permute::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Permute::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Permute_final)
} // namespace ncnn

#include "layer/priorbox.h"
namespace ncnn {
class PriorBox_final : virtual public PriorBox
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = PriorBox::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = PriorBox::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(PriorBox_final)
} // namespace ncnn

#include "layer/detectionoutput.h"
namespace ncnn {
class DetectionOutput_final : virtual public DetectionOutput
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = DetectionOutput::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = DetectionOutput::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(DetectionOutput_final)
} // namespace ncnn

#include "layer/interp.h"
namespace ncnn {
class Interp_final : virtual public Interp
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Interp::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Interp::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Interp_final)
} // namespace ncnn

#include "layer/deconvolutiondepthwise.h"
namespace ncnn {
class DeconvolutionDepthWise_final : virtual public DeconvolutionDepthWise
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = DeconvolutionDepthWise::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = DeconvolutionDepthWise::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(DeconvolutionDepthWise_final)
} // namespace ncnn

#include "layer/shufflechannel.h"
namespace ncnn {
class ShuffleChannel_final : virtual public ShuffleChannel
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ShuffleChannel::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ShuffleChannel::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ShuffleChannel_final)
} // namespace ncnn

#include "layer/instancenorm.h"
namespace ncnn {
class InstanceNorm_final : virtual public InstanceNorm
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = InstanceNorm::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = InstanceNorm::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(InstanceNorm_final)
} // namespace ncnn

#include "layer/clip.h"
namespace ncnn {
class Clip_final : virtual public Clip
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Clip::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Clip::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Clip_final)
} // namespace ncnn

#include "layer/reorg.h"
namespace ncnn {
class Reorg_final : virtual public Reorg
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Reorg::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Reorg::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Reorg_final)
} // namespace ncnn

#include "layer/yolodetectionoutput.h"
namespace ncnn {
class YoloDetectionOutput_final : virtual public YoloDetectionOutput
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = YoloDetectionOutput::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = YoloDetectionOutput::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(YoloDetectionOutput_final)
} // namespace ncnn

#include "layer/quantize.h"
namespace ncnn {
class Quantize_final : virtual public Quantize
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Quantize::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Quantize::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Quantize_final)
} // namespace ncnn

#include "layer/dequantize.h"
namespace ncnn {
class Dequantize_final : virtual public Dequantize
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Dequantize::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Dequantize::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Dequantize_final)
} // namespace ncnn

#include "layer/yolov3detectionoutput.h"
namespace ncnn {
class Yolov3DetectionOutput_final : virtual public Yolov3DetectionOutput
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Yolov3DetectionOutput::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Yolov3DetectionOutput::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Yolov3DetectionOutput_final)
} // namespace ncnn

#include "layer/psroipooling.h"
namespace ncnn {
class PSROIPooling_final : virtual public PSROIPooling
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = PSROIPooling::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = PSROIPooling::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(PSROIPooling_final)
} // namespace ncnn

#include "layer/roialign.h"
namespace ncnn {
class ROIAlign_final : virtual public ROIAlign
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = ROIAlign::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = ROIAlign::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(ROIAlign_final)
} // namespace ncnn

#include "layer/packing.h"
namespace ncnn {
class Packing_final : virtual public Packing
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Packing::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Packing::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Packing_final)
} // namespace ncnn

#include "layer/requantize.h"
namespace ncnn {
class Requantize_final : virtual public Requantize
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Requantize::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Requantize::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Requantize_final)
} // namespace ncnn

#include "layer/cast.h"
namespace ncnn {
class Cast_final : virtual public Cast
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = Cast::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = Cast::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(Cast_final)
} // namespace ncnn

#include "layer/hardsigmoid.h"
namespace ncnn {
class HardSigmoid_final : virtual public HardSigmoid
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = HardSigmoid::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = HardSigmoid::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(HardSigmoid_final)
} // namespace ncnn

#include "layer/selu.h"
namespace ncnn {
class SELU_final : virtual public SELU
{
public:
    virtual int create_pipeline(const Option& opt) {
        { int ret = SELU::create_pipeline(opt); if (ret) return ret; }
        return 0;
    }
    virtual int destroy_pipeline(const Option& opt) {
        { int ret = SELU::destroy_pipeline(opt); if (ret) return ret; }
        return 0;
    }
};
DEFINE_LAYER_CREATOR(SELU_final)
} // namespace ncnn


