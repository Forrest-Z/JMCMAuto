// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/tools/prediction/mlp_train/proto/fnn_model.proto

#ifndef PROTOBUF_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto__INCLUDED
#define PROTOBUF_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class FnnModel;
class FnnModelDefaultTypeInternal;
extern FnnModelDefaultTypeInternal _FnnModel_default_instance_;
class Layer;
class LayerDefaultTypeInternal;
extern LayerDefaultTypeInternal _Layer_default_instance_;
class Matrix;
class MatrixDefaultTypeInternal;
extern MatrixDefaultTypeInternal _Matrix_default_instance_;
class Vector;
class VectorDefaultTypeInternal;
extern VectorDefaultTypeInternal _Vector_default_instance_;

namespace protobuf_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto

enum Layer_ActivationFunc {
  Layer_ActivationFunc_RELU = 0,
  Layer_ActivationFunc_TANH = 1,
  Layer_ActivationFunc_SIGMOID = 2
};
bool Layer_ActivationFunc_IsValid(int value);
const Layer_ActivationFunc Layer_ActivationFunc_ActivationFunc_MIN = Layer_ActivationFunc_RELU;
const Layer_ActivationFunc Layer_ActivationFunc_ActivationFunc_MAX = Layer_ActivationFunc_SIGMOID;
const int Layer_ActivationFunc_ActivationFunc_ARRAYSIZE = Layer_ActivationFunc_ActivationFunc_MAX + 1;

const ::google::protobuf::EnumDescriptor* Layer_ActivationFunc_descriptor();
inline const ::std::string& Layer_ActivationFunc_Name(Layer_ActivationFunc value) {
  return ::google::protobuf::internal::NameOfEnum(
    Layer_ActivationFunc_descriptor(), value);
}
inline bool Layer_ActivationFunc_Parse(
    const ::std::string& name, Layer_ActivationFunc* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Layer_ActivationFunc>(
    Layer_ActivationFunc_descriptor(), name, value);
}
// ===================================================================

class Vector : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Vector) */ {
 public:
  Vector();
  virtual ~Vector();

  Vector(const Vector& from);

  inline Vector& operator=(const Vector& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector& default_instance();

  static inline const Vector* internal_default_instance() {
    return reinterpret_cast<const Vector*>(
               &_Vector_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Vector* other);

  // implements Message ----------------------------------------------

  inline Vector* New() const PROTOBUF_FINAL { return New(NULL); }

  Vector* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Vector& from);
  void MergeFrom(const Vector& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Vector* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double columns = 1;
  int columns_size() const;
  void clear_columns();
  static const int kColumnsFieldNumber = 1;
  double columns(int index) const;
  void set_columns(int index, double value);
  void add_columns(double value);
  const ::google::protobuf::RepeatedField< double >&
      columns() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_columns();

  // @@protoc_insertion_point(class_scope:Vector)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< double > columns_;
  friend struct protobuf_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Matrix : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Matrix) */ {
 public:
  Matrix();
  virtual ~Matrix();

  Matrix(const Matrix& from);

  inline Matrix& operator=(const Matrix& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Matrix& default_instance();

  static inline const Matrix* internal_default_instance() {
    return reinterpret_cast<const Matrix*>(
               &_Matrix_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Matrix* other);

  // implements Message ----------------------------------------------

  inline Matrix* New() const PROTOBUF_FINAL { return New(NULL); }

  Matrix* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Matrix& from);
  void MergeFrom(const Matrix& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Matrix* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Vector rows = 1;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 1;
  const ::Vector& rows(int index) const;
  ::Vector* mutable_rows(int index);
  ::Vector* add_rows();
  ::google::protobuf::RepeatedPtrField< ::Vector >*
      mutable_rows();
  const ::google::protobuf::RepeatedPtrField< ::Vector >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Matrix)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Vector > rows_;
  friend struct protobuf_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Layer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Layer) */ {
 public:
  Layer();
  virtual ~Layer();

  Layer(const Layer& from);

  inline Layer& operator=(const Layer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Layer& default_instance();

  static inline const Layer* internal_default_instance() {
    return reinterpret_cast<const Layer*>(
               &_Layer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Layer* other);

  // implements Message ----------------------------------------------

  inline Layer* New() const PROTOBUF_FINAL { return New(NULL); }

  Layer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Layer& from);
  void MergeFrom(const Layer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Layer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Layer_ActivationFunc ActivationFunc;
  static const ActivationFunc RELU =
    Layer_ActivationFunc_RELU;
  static const ActivationFunc TANH =
    Layer_ActivationFunc_TANH;
  static const ActivationFunc SIGMOID =
    Layer_ActivationFunc_SIGMOID;
  static inline bool ActivationFunc_IsValid(int value) {
    return Layer_ActivationFunc_IsValid(value);
  }
  static const ActivationFunc ActivationFunc_MIN =
    Layer_ActivationFunc_ActivationFunc_MIN;
  static const ActivationFunc ActivationFunc_MAX =
    Layer_ActivationFunc_ActivationFunc_MAX;
  static const int ActivationFunc_ARRAYSIZE =
    Layer_ActivationFunc_ActivationFunc_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ActivationFunc_descriptor() {
    return Layer_ActivationFunc_descriptor();
  }
  static inline const ::std::string& ActivationFunc_Name(ActivationFunc value) {
    return Layer_ActivationFunc_Name(value);
  }
  static inline bool ActivationFunc_Parse(const ::std::string& name,
      ActivationFunc* value) {
    return Layer_ActivationFunc_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .Matrix layer_input_weight = 3;
  bool has_layer_input_weight() const;
  void clear_layer_input_weight();
  static const int kLayerInputWeightFieldNumber = 3;
  const ::Matrix& layer_input_weight() const;
  ::Matrix* mutable_layer_input_weight();
  ::Matrix* release_layer_input_weight();
  void set_allocated_layer_input_weight(::Matrix* layer_input_weight);

  // optional .Vector layer_bias = 4;
  bool has_layer_bias() const;
  void clear_layer_bias();
  static const int kLayerBiasFieldNumber = 4;
  const ::Vector& layer_bias() const;
  ::Vector* mutable_layer_bias();
  ::Vector* release_layer_bias();
  void set_allocated_layer_bias(::Vector* layer_bias);

  // optional int32 layer_input_dim = 1;
  bool has_layer_input_dim() const;
  void clear_layer_input_dim();
  static const int kLayerInputDimFieldNumber = 1;
  ::google::protobuf::int32 layer_input_dim() const;
  void set_layer_input_dim(::google::protobuf::int32 value);

  // optional int32 layer_output_dim = 2;
  bool has_layer_output_dim() const;
  void clear_layer_output_dim();
  static const int kLayerOutputDimFieldNumber = 2;
  ::google::protobuf::int32 layer_output_dim() const;
  void set_layer_output_dim(::google::protobuf::int32 value);

  // optional .Layer.ActivationFunc layer_activation_func = 5;
  bool has_layer_activation_func() const;
  void clear_layer_activation_func();
  static const int kLayerActivationFuncFieldNumber = 5;
  ::Layer_ActivationFunc layer_activation_func() const;
  void set_layer_activation_func(::Layer_ActivationFunc value);

  // @@protoc_insertion_point(class_scope:Layer)
 private:
  void set_has_layer_input_dim();
  void clear_has_layer_input_dim();
  void set_has_layer_output_dim();
  void clear_has_layer_output_dim();
  void set_has_layer_input_weight();
  void clear_has_layer_input_weight();
  void set_has_layer_bias();
  void clear_has_layer_bias();
  void set_has_layer_activation_func();
  void clear_has_layer_activation_func();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::Matrix* layer_input_weight_;
  ::Vector* layer_bias_;
  ::google::protobuf::int32 layer_input_dim_;
  ::google::protobuf::int32 layer_output_dim_;
  int layer_activation_func_;
  friend struct protobuf_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class FnnModel : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:FnnModel) */ {
 public:
  FnnModel();
  virtual ~FnnModel();

  FnnModel(const FnnModel& from);

  inline FnnModel& operator=(const FnnModel& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FnnModel& default_instance();

  static inline const FnnModel* internal_default_instance() {
    return reinterpret_cast<const FnnModel*>(
               &_FnnModel_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(FnnModel* other);

  // implements Message ----------------------------------------------

  inline FnnModel* New() const PROTOBUF_FINAL { return New(NULL); }

  FnnModel* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FnnModel& from);
  void MergeFrom(const FnnModel& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(FnnModel* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Layer layer = 5;
  int layer_size() const;
  void clear_layer();
  static const int kLayerFieldNumber = 5;
  const ::Layer& layer(int index) const;
  ::Layer* mutable_layer(int index);
  ::Layer* add_layer();
  ::google::protobuf::RepeatedPtrField< ::Layer >*
      mutable_layer();
  const ::google::protobuf::RepeatedPtrField< ::Layer >&
      layer() const;

  // optional .Vector samples_mean = 2;
  bool has_samples_mean() const;
  void clear_samples_mean();
  static const int kSamplesMeanFieldNumber = 2;
  const ::Vector& samples_mean() const;
  ::Vector* mutable_samples_mean();
  ::Vector* release_samples_mean();
  void set_allocated_samples_mean(::Vector* samples_mean);

  // optional .Vector samples_std = 3;
  bool has_samples_std() const;
  void clear_samples_std();
  static const int kSamplesStdFieldNumber = 3;
  const ::Vector& samples_std() const;
  ::Vector* mutable_samples_std();
  ::Vector* release_samples_std();
  void set_allocated_samples_std(::Vector* samples_std);

  // optional int32 dim_input = 1;
  bool has_dim_input() const;
  void clear_dim_input();
  static const int kDimInputFieldNumber = 1;
  ::google::protobuf::int32 dim_input() const;
  void set_dim_input(::google::protobuf::int32 value);

  // optional int32 num_layer = 4;
  bool has_num_layer() const;
  void clear_num_layer();
  static const int kNumLayerFieldNumber = 4;
  ::google::protobuf::int32 num_layer() const;
  void set_num_layer(::google::protobuf::int32 value);

  // optional int32 dim_output = 6;
  bool has_dim_output() const;
  void clear_dim_output();
  static const int kDimOutputFieldNumber = 6;
  ::google::protobuf::int32 dim_output() const;
  void set_dim_output(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:FnnModel)
 private:
  void set_has_dim_input();
  void clear_has_dim_input();
  void set_has_samples_mean();
  void clear_has_samples_mean();
  void set_has_samples_std();
  void clear_has_samples_std();
  void set_has_num_layer();
  void clear_has_num_layer();
  void set_has_dim_output();
  void clear_has_dim_output();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Layer > layer_;
  ::Vector* samples_mean_;
  ::Vector* samples_std_;
  ::google::protobuf::int32 dim_input_;
  ::google::protobuf::int32 num_layer_;
  ::google::protobuf::int32 dim_output_;
  friend struct protobuf_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Vector

// repeated double columns = 1;
inline int Vector::columns_size() const {
  return columns_.size();
}
inline void Vector::clear_columns() {
  columns_.Clear();
}
inline double Vector::columns(int index) const {
  // @@protoc_insertion_point(field_get:Vector.columns)
  return columns_.Get(index);
}
inline void Vector::set_columns(int index, double value) {
  columns_.Set(index, value);
  // @@protoc_insertion_point(field_set:Vector.columns)
}
inline void Vector::add_columns(double value) {
  columns_.Add(value);
  // @@protoc_insertion_point(field_add:Vector.columns)
}
inline const ::google::protobuf::RepeatedField< double >&
Vector::columns() const {
  // @@protoc_insertion_point(field_list:Vector.columns)
  return columns_;
}
inline ::google::protobuf::RepeatedField< double >*
Vector::mutable_columns() {
  // @@protoc_insertion_point(field_mutable_list:Vector.columns)
  return &columns_;
}

// -------------------------------------------------------------------

// Matrix

// repeated .Vector rows = 1;
inline int Matrix::rows_size() const {
  return rows_.size();
}
inline void Matrix::clear_rows() {
  rows_.Clear();
}
inline const ::Vector& Matrix::rows(int index) const {
  // @@protoc_insertion_point(field_get:Matrix.rows)
  return rows_.Get(index);
}
inline ::Vector* Matrix::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Matrix.rows)
  return rows_.Mutable(index);
}
inline ::Vector* Matrix::add_rows() {
  // @@protoc_insertion_point(field_add:Matrix.rows)
  return rows_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Vector >*
Matrix::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Matrix.rows)
  return &rows_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Vector >&
Matrix::rows() const {
  // @@protoc_insertion_point(field_list:Matrix.rows)
  return rows_;
}

// -------------------------------------------------------------------

// Layer

// optional int32 layer_input_dim = 1;
inline bool Layer::has_layer_input_dim() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Layer::set_has_layer_input_dim() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Layer::clear_has_layer_input_dim() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Layer::clear_layer_input_dim() {
  layer_input_dim_ = 0;
  clear_has_layer_input_dim();
}
inline ::google::protobuf::int32 Layer::layer_input_dim() const {
  // @@protoc_insertion_point(field_get:Layer.layer_input_dim)
  return layer_input_dim_;
}
inline void Layer::set_layer_input_dim(::google::protobuf::int32 value) {
  set_has_layer_input_dim();
  layer_input_dim_ = value;
  // @@protoc_insertion_point(field_set:Layer.layer_input_dim)
}

// optional int32 layer_output_dim = 2;
inline bool Layer::has_layer_output_dim() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Layer::set_has_layer_output_dim() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Layer::clear_has_layer_output_dim() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Layer::clear_layer_output_dim() {
  layer_output_dim_ = 0;
  clear_has_layer_output_dim();
}
inline ::google::protobuf::int32 Layer::layer_output_dim() const {
  // @@protoc_insertion_point(field_get:Layer.layer_output_dim)
  return layer_output_dim_;
}
inline void Layer::set_layer_output_dim(::google::protobuf::int32 value) {
  set_has_layer_output_dim();
  layer_output_dim_ = value;
  // @@protoc_insertion_point(field_set:Layer.layer_output_dim)
}

// optional .Matrix layer_input_weight = 3;
inline bool Layer::has_layer_input_weight() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Layer::set_has_layer_input_weight() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Layer::clear_has_layer_input_weight() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Layer::clear_layer_input_weight() {
  if (layer_input_weight_ != NULL) layer_input_weight_->::Matrix::Clear();
  clear_has_layer_input_weight();
}
inline const ::Matrix& Layer::layer_input_weight() const {
  // @@protoc_insertion_point(field_get:Layer.layer_input_weight)
  return layer_input_weight_ != NULL ? *layer_input_weight_
                         : *::Matrix::internal_default_instance();
}
inline ::Matrix* Layer::mutable_layer_input_weight() {
  set_has_layer_input_weight();
  if (layer_input_weight_ == NULL) {
    layer_input_weight_ = new ::Matrix;
  }
  // @@protoc_insertion_point(field_mutable:Layer.layer_input_weight)
  return layer_input_weight_;
}
inline ::Matrix* Layer::release_layer_input_weight() {
  // @@protoc_insertion_point(field_release:Layer.layer_input_weight)
  clear_has_layer_input_weight();
  ::Matrix* temp = layer_input_weight_;
  layer_input_weight_ = NULL;
  return temp;
}
inline void Layer::set_allocated_layer_input_weight(::Matrix* layer_input_weight) {
  delete layer_input_weight_;
  layer_input_weight_ = layer_input_weight;
  if (layer_input_weight) {
    set_has_layer_input_weight();
  } else {
    clear_has_layer_input_weight();
  }
  // @@protoc_insertion_point(field_set_allocated:Layer.layer_input_weight)
}

// optional .Vector layer_bias = 4;
inline bool Layer::has_layer_bias() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Layer::set_has_layer_bias() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Layer::clear_has_layer_bias() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Layer::clear_layer_bias() {
  if (layer_bias_ != NULL) layer_bias_->::Vector::Clear();
  clear_has_layer_bias();
}
inline const ::Vector& Layer::layer_bias() const {
  // @@protoc_insertion_point(field_get:Layer.layer_bias)
  return layer_bias_ != NULL ? *layer_bias_
                         : *::Vector::internal_default_instance();
}
inline ::Vector* Layer::mutable_layer_bias() {
  set_has_layer_bias();
  if (layer_bias_ == NULL) {
    layer_bias_ = new ::Vector;
  }
  // @@protoc_insertion_point(field_mutable:Layer.layer_bias)
  return layer_bias_;
}
inline ::Vector* Layer::release_layer_bias() {
  // @@protoc_insertion_point(field_release:Layer.layer_bias)
  clear_has_layer_bias();
  ::Vector* temp = layer_bias_;
  layer_bias_ = NULL;
  return temp;
}
inline void Layer::set_allocated_layer_bias(::Vector* layer_bias) {
  delete layer_bias_;
  layer_bias_ = layer_bias;
  if (layer_bias) {
    set_has_layer_bias();
  } else {
    clear_has_layer_bias();
  }
  // @@protoc_insertion_point(field_set_allocated:Layer.layer_bias)
}

// optional .Layer.ActivationFunc layer_activation_func = 5;
inline bool Layer::has_layer_activation_func() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Layer::set_has_layer_activation_func() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Layer::clear_has_layer_activation_func() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Layer::clear_layer_activation_func() {
  layer_activation_func_ = 0;
  clear_has_layer_activation_func();
}
inline ::Layer_ActivationFunc Layer::layer_activation_func() const {
  // @@protoc_insertion_point(field_get:Layer.layer_activation_func)
  return static_cast< ::Layer_ActivationFunc >(layer_activation_func_);
}
inline void Layer::set_layer_activation_func(::Layer_ActivationFunc value) {
  assert(::Layer_ActivationFunc_IsValid(value));
  set_has_layer_activation_func();
  layer_activation_func_ = value;
  // @@protoc_insertion_point(field_set:Layer.layer_activation_func)
}

// -------------------------------------------------------------------

// FnnModel

// optional int32 dim_input = 1;
inline bool FnnModel::has_dim_input() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FnnModel::set_has_dim_input() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FnnModel::clear_has_dim_input() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FnnModel::clear_dim_input() {
  dim_input_ = 0;
  clear_has_dim_input();
}
inline ::google::protobuf::int32 FnnModel::dim_input() const {
  // @@protoc_insertion_point(field_get:FnnModel.dim_input)
  return dim_input_;
}
inline void FnnModel::set_dim_input(::google::protobuf::int32 value) {
  set_has_dim_input();
  dim_input_ = value;
  // @@protoc_insertion_point(field_set:FnnModel.dim_input)
}

// optional .Vector samples_mean = 2;
inline bool FnnModel::has_samples_mean() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FnnModel::set_has_samples_mean() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FnnModel::clear_has_samples_mean() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FnnModel::clear_samples_mean() {
  if (samples_mean_ != NULL) samples_mean_->::Vector::Clear();
  clear_has_samples_mean();
}
inline const ::Vector& FnnModel::samples_mean() const {
  // @@protoc_insertion_point(field_get:FnnModel.samples_mean)
  return samples_mean_ != NULL ? *samples_mean_
                         : *::Vector::internal_default_instance();
}
inline ::Vector* FnnModel::mutable_samples_mean() {
  set_has_samples_mean();
  if (samples_mean_ == NULL) {
    samples_mean_ = new ::Vector;
  }
  // @@protoc_insertion_point(field_mutable:FnnModel.samples_mean)
  return samples_mean_;
}
inline ::Vector* FnnModel::release_samples_mean() {
  // @@protoc_insertion_point(field_release:FnnModel.samples_mean)
  clear_has_samples_mean();
  ::Vector* temp = samples_mean_;
  samples_mean_ = NULL;
  return temp;
}
inline void FnnModel::set_allocated_samples_mean(::Vector* samples_mean) {
  delete samples_mean_;
  samples_mean_ = samples_mean;
  if (samples_mean) {
    set_has_samples_mean();
  } else {
    clear_has_samples_mean();
  }
  // @@protoc_insertion_point(field_set_allocated:FnnModel.samples_mean)
}

// optional .Vector samples_std = 3;
inline bool FnnModel::has_samples_std() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FnnModel::set_has_samples_std() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FnnModel::clear_has_samples_std() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FnnModel::clear_samples_std() {
  if (samples_std_ != NULL) samples_std_->::Vector::Clear();
  clear_has_samples_std();
}
inline const ::Vector& FnnModel::samples_std() const {
  // @@protoc_insertion_point(field_get:FnnModel.samples_std)
  return samples_std_ != NULL ? *samples_std_
                         : *::Vector::internal_default_instance();
}
inline ::Vector* FnnModel::mutable_samples_std() {
  set_has_samples_std();
  if (samples_std_ == NULL) {
    samples_std_ = new ::Vector;
  }
  // @@protoc_insertion_point(field_mutable:FnnModel.samples_std)
  return samples_std_;
}
inline ::Vector* FnnModel::release_samples_std() {
  // @@protoc_insertion_point(field_release:FnnModel.samples_std)
  clear_has_samples_std();
  ::Vector* temp = samples_std_;
  samples_std_ = NULL;
  return temp;
}
inline void FnnModel::set_allocated_samples_std(::Vector* samples_std) {
  delete samples_std_;
  samples_std_ = samples_std;
  if (samples_std) {
    set_has_samples_std();
  } else {
    clear_has_samples_std();
  }
  // @@protoc_insertion_point(field_set_allocated:FnnModel.samples_std)
}

// optional int32 num_layer = 4;
inline bool FnnModel::has_num_layer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FnnModel::set_has_num_layer() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FnnModel::clear_has_num_layer() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FnnModel::clear_num_layer() {
  num_layer_ = 0;
  clear_has_num_layer();
}
inline ::google::protobuf::int32 FnnModel::num_layer() const {
  // @@protoc_insertion_point(field_get:FnnModel.num_layer)
  return num_layer_;
}
inline void FnnModel::set_num_layer(::google::protobuf::int32 value) {
  set_has_num_layer();
  num_layer_ = value;
  // @@protoc_insertion_point(field_set:FnnModel.num_layer)
}

// repeated .Layer layer = 5;
inline int FnnModel::layer_size() const {
  return layer_.size();
}
inline void FnnModel::clear_layer() {
  layer_.Clear();
}
inline const ::Layer& FnnModel::layer(int index) const {
  // @@protoc_insertion_point(field_get:FnnModel.layer)
  return layer_.Get(index);
}
inline ::Layer* FnnModel::mutable_layer(int index) {
  // @@protoc_insertion_point(field_mutable:FnnModel.layer)
  return layer_.Mutable(index);
}
inline ::Layer* FnnModel::add_layer() {
  // @@protoc_insertion_point(field_add:FnnModel.layer)
  return layer_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Layer >*
FnnModel::mutable_layer() {
  // @@protoc_insertion_point(field_mutable_list:FnnModel.layer)
  return &layer_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Layer >&
FnnModel::layer() const {
  // @@protoc_insertion_point(field_list:FnnModel.layer)
  return layer_;
}

// optional int32 dim_output = 6;
inline bool FnnModel::has_dim_output() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void FnnModel::set_has_dim_output() {
  _has_bits_[0] |= 0x00000010u;
}
inline void FnnModel::clear_has_dim_output() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void FnnModel::clear_dim_output() {
  dim_output_ = 0;
  clear_has_dim_output();
}
inline ::google::protobuf::int32 FnnModel::dim_output() const {
  // @@protoc_insertion_point(field_get:FnnModel.dim_output)
  return dim_output_;
}
inline void FnnModel::set_dim_output(::google::protobuf::int32 value) {
  set_has_dim_output();
  dim_output_ = value;
  // @@protoc_insertion_point(field_set:FnnModel.dim_output)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Layer_ActivationFunc> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Layer_ActivationFunc>() {
  return ::Layer_ActivationFunc_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2ftools_2fprediction_2fmlp_5ftrain_2fproto_2ffnn_5fmodel_2eproto__INCLUDED
