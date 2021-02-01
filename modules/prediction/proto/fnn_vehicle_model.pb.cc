// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/prediction/proto/fnn_vehicle_model.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/prediction/proto/fnn_vehicle_model.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace jmc_auto {
namespace prediction {
class FnnVehicleModelDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<FnnVehicleModel> {
} _FnnVehicleModel_default_instance_;

namespace protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, dim_input_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, samples_mean_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, samples_std_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, num_layer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, layer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FnnVehicleModel, dim_output_),
  2,
  0,
  1,
  3,
  ~0u,
  4,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 11, sizeof(FnnVehicleModel)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_FnnVehicleModel_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/prediction/proto/fnn_vehicle_model.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _FnnVehicleModel_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::jmc_auto::prediction::protobuf_modules_2fprediction_2fproto_2ffnn_5fmodel_5fbase_2eproto::InitDefaults();
  _FnnVehicleModel_default_instance_.DefaultConstruct();
  _FnnVehicleModel_default_instance_.get_mutable()->samples_mean_ = const_cast< ::jmc_auto::prediction::Vector*>(
      ::jmc_auto::prediction::Vector::internal_default_instance());
  _FnnVehicleModel_default_instance_.get_mutable()->samples_std_ = const_cast< ::jmc_auto::prediction::Vector*>(
      ::jmc_auto::prediction::Vector::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n0modules/prediction/proto/fnn_vehicle_m"
      "odel.proto\022\023jmc_auto.prediction\032-modules"
      "/prediction/proto/fnn_model_base.proto\"\333"
      "\001\n\017FnnVehicleModel\022\021\n\tdim_input\030\001 \001(\005\0221\n"
      "\014samples_mean\030\002 \001(\0132\033.jmc_auto.predictio"
      "n.Vector\0220\n\013samples_std\030\003 \001(\0132\033.jmc_auto"
      ".prediction.Vector\022\021\n\tnum_layer\030\004 \001(\005\022)\n"
      "\005layer\030\005 \003(\0132\032.jmc_auto.prediction.Layer"
      "\022\022\n\ndim_output\030\006 \001(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 340);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/prediction/proto/fnn_vehicle_model.proto", &protobuf_RegisterTypes);
  ::jmc_auto::prediction::protobuf_modules_2fprediction_2fproto_2ffnn_5fmodel_5fbase_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FnnVehicleModel::kDimInputFieldNumber;
const int FnnVehicleModel::kSamplesMeanFieldNumber;
const int FnnVehicleModel::kSamplesStdFieldNumber;
const int FnnVehicleModel::kNumLayerFieldNumber;
const int FnnVehicleModel::kLayerFieldNumber;
const int FnnVehicleModel::kDimOutputFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FnnVehicleModel::FnnVehicleModel()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.prediction.FnnVehicleModel)
}
FnnVehicleModel::FnnVehicleModel(const FnnVehicleModel& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      layer_(from.layer_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_samples_mean()) {
    samples_mean_ = new ::jmc_auto::prediction::Vector(*from.samples_mean_);
  } else {
    samples_mean_ = NULL;
  }
  if (from.has_samples_std()) {
    samples_std_ = new ::jmc_auto::prediction::Vector(*from.samples_std_);
  } else {
    samples_std_ = NULL;
  }
  ::memcpy(&dim_input_, &from.dim_input_,
    reinterpret_cast<char*>(&dim_output_) -
    reinterpret_cast<char*>(&dim_input_) + sizeof(dim_output_));
  // @@protoc_insertion_point(copy_constructor:jmc_auto.prediction.FnnVehicleModel)
}

void FnnVehicleModel::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&samples_mean_, 0, reinterpret_cast<char*>(&dim_output_) -
    reinterpret_cast<char*>(&samples_mean_) + sizeof(dim_output_));
}

FnnVehicleModel::~FnnVehicleModel() {
  // @@protoc_insertion_point(destructor:jmc_auto.prediction.FnnVehicleModel)
  SharedDtor();
}

void FnnVehicleModel::SharedDtor() {
  if (this != internal_default_instance()) {
    delete samples_mean_;
  }
  if (this != internal_default_instance()) {
    delete samples_std_;
  }
}

void FnnVehicleModel::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FnnVehicleModel::descriptor() {
  protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FnnVehicleModel& FnnVehicleModel::default_instance() {
  protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto::InitDefaults();
  return *internal_default_instance();
}

FnnVehicleModel* FnnVehicleModel::New(::google::protobuf::Arena* arena) const {
  FnnVehicleModel* n = new FnnVehicleModel;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FnnVehicleModel::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.prediction.FnnVehicleModel)
  layer_.Clear();
  if (_has_bits_[0 / 32] & 3u) {
    if (has_samples_mean()) {
      GOOGLE_DCHECK(samples_mean_ != NULL);
      samples_mean_->::jmc_auto::prediction::Vector::Clear();
    }
    if (has_samples_std()) {
      GOOGLE_DCHECK(samples_std_ != NULL);
      samples_std_->::jmc_auto::prediction::Vector::Clear();
    }
  }
  if (_has_bits_[0 / 32] & 28u) {
    ::memset(&dim_input_, 0, reinterpret_cast<char*>(&dim_output_) -
      reinterpret_cast<char*>(&dim_input_) + sizeof(dim_output_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FnnVehicleModel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.prediction.FnnVehicleModel)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 dim_input = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_dim_input();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dim_input_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .jmc_auto.prediction.Vector samples_mean = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_samples_mean()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .jmc_auto.prediction.Vector samples_std = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_samples_std()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 num_layer = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          set_has_num_layer();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_layer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .jmc_auto.prediction.Layer layer = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_layer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 dim_output = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u)) {
          set_has_dim_output();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dim_output_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:jmc_auto.prediction.FnnVehicleModel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.prediction.FnnVehicleModel)
  return false;
#undef DO_
}

void FnnVehicleModel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.prediction.FnnVehicleModel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 dim_input = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->dim_input(), output);
  }

  // optional .jmc_auto.prediction.Vector samples_mean = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->samples_mean_, output);
  }

  // optional .jmc_auto.prediction.Vector samples_std = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->samples_std_, output);
  }

  // optional int32 num_layer = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->num_layer(), output);
  }

  // repeated .jmc_auto.prediction.Layer layer = 5;
  for (unsigned int i = 0, n = this->layer_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->layer(i), output);
  }

  // optional int32 dim_output = 6;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->dim_output(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.prediction.FnnVehicleModel)
}

::google::protobuf::uint8* FnnVehicleModel::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.prediction.FnnVehicleModel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 dim_input = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->dim_input(), target);
  }

  // optional .jmc_auto.prediction.Vector samples_mean = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->samples_mean_, deterministic, target);
  }

  // optional .jmc_auto.prediction.Vector samples_std = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->samples_std_, deterministic, target);
  }

  // optional int32 num_layer = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->num_layer(), target);
  }

  // repeated .jmc_auto.prediction.Layer layer = 5;
  for (unsigned int i = 0, n = this->layer_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, this->layer(i), deterministic, target);
  }

  // optional int32 dim_output = 6;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->dim_output(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.prediction.FnnVehicleModel)
  return target;
}

size_t FnnVehicleModel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.prediction.FnnVehicleModel)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .jmc_auto.prediction.Layer layer = 5;
  {
    unsigned int count = this->layer_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->layer(i));
    }
  }

  if (_has_bits_[0 / 32] & 31u) {
    // optional .jmc_auto.prediction.Vector samples_mean = 2;
    if (has_samples_mean()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->samples_mean_);
    }

    // optional .jmc_auto.prediction.Vector samples_std = 3;
    if (has_samples_std()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->samples_std_);
    }

    // optional int32 dim_input = 1;
    if (has_dim_input()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dim_input());
    }

    // optional int32 num_layer = 4;
    if (has_num_layer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_layer());
    }

    // optional int32 dim_output = 6;
    if (has_dim_output()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dim_output());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FnnVehicleModel::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.prediction.FnnVehicleModel)
  GOOGLE_DCHECK_NE(&from, this);
  const FnnVehicleModel* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FnnVehicleModel>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.prediction.FnnVehicleModel)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.prediction.FnnVehicleModel)
    MergeFrom(*source);
  }
}

void FnnVehicleModel::MergeFrom(const FnnVehicleModel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.prediction.FnnVehicleModel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  layer_.MergeFrom(from.layer_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_samples_mean()->::jmc_auto::prediction::Vector::MergeFrom(from.samples_mean());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_samples_std()->::jmc_auto::prediction::Vector::MergeFrom(from.samples_std());
    }
    if (cached_has_bits & 0x00000004u) {
      dim_input_ = from.dim_input_;
    }
    if (cached_has_bits & 0x00000008u) {
      num_layer_ = from.num_layer_;
    }
    if (cached_has_bits & 0x00000010u) {
      dim_output_ = from.dim_output_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void FnnVehicleModel::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.prediction.FnnVehicleModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FnnVehicleModel::CopyFrom(const FnnVehicleModel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.prediction.FnnVehicleModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FnnVehicleModel::IsInitialized() const {
  return true;
}

void FnnVehicleModel::Swap(FnnVehicleModel* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FnnVehicleModel::InternalSwap(FnnVehicleModel* other) {
  layer_.InternalSwap(&other->layer_);
  std::swap(samples_mean_, other->samples_mean_);
  std::swap(samples_std_, other->samples_std_);
  std::swap(dim_input_, other->dim_input_);
  std::swap(num_layer_, other->num_layer_);
  std::swap(dim_output_, other->dim_output_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FnnVehicleModel::GetMetadata() const {
  protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fprediction_2fproto_2ffnn_5fvehicle_5fmodel_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FnnVehicleModel

// optional int32 dim_input = 1;
bool FnnVehicleModel::has_dim_input() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void FnnVehicleModel::set_has_dim_input() {
  _has_bits_[0] |= 0x00000004u;
}
void FnnVehicleModel::clear_has_dim_input() {
  _has_bits_[0] &= ~0x00000004u;
}
void FnnVehicleModel::clear_dim_input() {
  dim_input_ = 0;
  clear_has_dim_input();
}
::google::protobuf::int32 FnnVehicleModel::dim_input() const {
  // @@protoc_insertion_point(field_get:jmc_auto.prediction.FnnVehicleModel.dim_input)
  return dim_input_;
}
void FnnVehicleModel::set_dim_input(::google::protobuf::int32 value) {
  set_has_dim_input();
  dim_input_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.prediction.FnnVehicleModel.dim_input)
}

// optional .jmc_auto.prediction.Vector samples_mean = 2;
bool FnnVehicleModel::has_samples_mean() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FnnVehicleModel::set_has_samples_mean() {
  _has_bits_[0] |= 0x00000001u;
}
void FnnVehicleModel::clear_has_samples_mean() {
  _has_bits_[0] &= ~0x00000001u;
}
void FnnVehicleModel::clear_samples_mean() {
  if (samples_mean_ != NULL) samples_mean_->::jmc_auto::prediction::Vector::Clear();
  clear_has_samples_mean();
}
const ::jmc_auto::prediction::Vector& FnnVehicleModel::samples_mean() const {
  // @@protoc_insertion_point(field_get:jmc_auto.prediction.FnnVehicleModel.samples_mean)
  return samples_mean_ != NULL ? *samples_mean_
                         : *::jmc_auto::prediction::Vector::internal_default_instance();
}
::jmc_auto::prediction::Vector* FnnVehicleModel::mutable_samples_mean() {
  set_has_samples_mean();
  if (samples_mean_ == NULL) {
    samples_mean_ = new ::jmc_auto::prediction::Vector;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.prediction.FnnVehicleModel.samples_mean)
  return samples_mean_;
}
::jmc_auto::prediction::Vector* FnnVehicleModel::release_samples_mean() {
  // @@protoc_insertion_point(field_release:jmc_auto.prediction.FnnVehicleModel.samples_mean)
  clear_has_samples_mean();
  ::jmc_auto::prediction::Vector* temp = samples_mean_;
  samples_mean_ = NULL;
  return temp;
}
void FnnVehicleModel::set_allocated_samples_mean(::jmc_auto::prediction::Vector* samples_mean) {
  delete samples_mean_;
  samples_mean_ = samples_mean;
  if (samples_mean) {
    set_has_samples_mean();
  } else {
    clear_has_samples_mean();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.prediction.FnnVehicleModel.samples_mean)
}

// optional .jmc_auto.prediction.Vector samples_std = 3;
bool FnnVehicleModel::has_samples_std() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FnnVehicleModel::set_has_samples_std() {
  _has_bits_[0] |= 0x00000002u;
}
void FnnVehicleModel::clear_has_samples_std() {
  _has_bits_[0] &= ~0x00000002u;
}
void FnnVehicleModel::clear_samples_std() {
  if (samples_std_ != NULL) samples_std_->::jmc_auto::prediction::Vector::Clear();
  clear_has_samples_std();
}
const ::jmc_auto::prediction::Vector& FnnVehicleModel::samples_std() const {
  // @@protoc_insertion_point(field_get:jmc_auto.prediction.FnnVehicleModel.samples_std)
  return samples_std_ != NULL ? *samples_std_
                         : *::jmc_auto::prediction::Vector::internal_default_instance();
}
::jmc_auto::prediction::Vector* FnnVehicleModel::mutable_samples_std() {
  set_has_samples_std();
  if (samples_std_ == NULL) {
    samples_std_ = new ::jmc_auto::prediction::Vector;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.prediction.FnnVehicleModel.samples_std)
  return samples_std_;
}
::jmc_auto::prediction::Vector* FnnVehicleModel::release_samples_std() {
  // @@protoc_insertion_point(field_release:jmc_auto.prediction.FnnVehicleModel.samples_std)
  clear_has_samples_std();
  ::jmc_auto::prediction::Vector* temp = samples_std_;
  samples_std_ = NULL;
  return temp;
}
void FnnVehicleModel::set_allocated_samples_std(::jmc_auto::prediction::Vector* samples_std) {
  delete samples_std_;
  samples_std_ = samples_std;
  if (samples_std) {
    set_has_samples_std();
  } else {
    clear_has_samples_std();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.prediction.FnnVehicleModel.samples_std)
}

// optional int32 num_layer = 4;
bool FnnVehicleModel::has_num_layer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void FnnVehicleModel::set_has_num_layer() {
  _has_bits_[0] |= 0x00000008u;
}
void FnnVehicleModel::clear_has_num_layer() {
  _has_bits_[0] &= ~0x00000008u;
}
void FnnVehicleModel::clear_num_layer() {
  num_layer_ = 0;
  clear_has_num_layer();
}
::google::protobuf::int32 FnnVehicleModel::num_layer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.prediction.FnnVehicleModel.num_layer)
  return num_layer_;
}
void FnnVehicleModel::set_num_layer(::google::protobuf::int32 value) {
  set_has_num_layer();
  num_layer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.prediction.FnnVehicleModel.num_layer)
}

// repeated .jmc_auto.prediction.Layer layer = 5;
int FnnVehicleModel::layer_size() const {
  return layer_.size();
}
void FnnVehicleModel::clear_layer() {
  layer_.Clear();
}
const ::jmc_auto::prediction::Layer& FnnVehicleModel::layer(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.prediction.FnnVehicleModel.layer)
  return layer_.Get(index);
}
::jmc_auto::prediction::Layer* FnnVehicleModel::mutable_layer(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.prediction.FnnVehicleModel.layer)
  return layer_.Mutable(index);
}
::jmc_auto::prediction::Layer* FnnVehicleModel::add_layer() {
  // @@protoc_insertion_point(field_add:jmc_auto.prediction.FnnVehicleModel.layer)
  return layer_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::prediction::Layer >*
FnnVehicleModel::mutable_layer() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.prediction.FnnVehicleModel.layer)
  return &layer_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::prediction::Layer >&
FnnVehicleModel::layer() const {
  // @@protoc_insertion_point(field_list:jmc_auto.prediction.FnnVehicleModel.layer)
  return layer_;
}

// optional int32 dim_output = 6;
bool FnnVehicleModel::has_dim_output() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void FnnVehicleModel::set_has_dim_output() {
  _has_bits_[0] |= 0x00000010u;
}
void FnnVehicleModel::clear_has_dim_output() {
  _has_bits_[0] &= ~0x00000010u;
}
void FnnVehicleModel::clear_dim_output() {
  dim_output_ = 0;
  clear_has_dim_output();
}
::google::protobuf::int32 FnnVehicleModel::dim_output() const {
  // @@protoc_insertion_point(field_get:jmc_auto.prediction.FnnVehicleModel.dim_output)
  return dim_output_;
}
void FnnVehicleModel::set_dim_output(::google::protobuf::int32 value) {
  set_has_dim_output();
  dim_output_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.prediction.FnnVehicleModel.dim_output)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace prediction
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)
