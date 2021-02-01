// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/traffic_light/preprocessor_config.proto

#ifndef PROTOBUF_modules_2fperception_2fproto_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fperception_2fproto_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace perception {
namespace traffic_light {
namespace preprocessor_config {
class ModelConfigs;
class ModelConfigsDefaultTypeInternal;
extern ModelConfigsDefaultTypeInternal _ModelConfigs_default_instance_;
}  // namespace preprocessor_config
}  // namespace traffic_light
}  // namespace perception
}  // namespace jmc_auto

namespace jmc_auto {
namespace perception {
namespace traffic_light {
namespace preprocessor_config {

namespace protobuf_modules_2fperception_2fproto_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fperception_2fproto_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs) */ {
 public:
  ModelConfigs();
  virtual ~ModelConfigs();

  ModelConfigs(const ModelConfigs& from);

  inline ModelConfigs& operator=(const ModelConfigs& from) {
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
  static const ModelConfigs& default_instance();

  static inline const ModelConfigs* internal_default_instance() {
    return reinterpret_cast<const ModelConfigs*>(
               &_ModelConfigs_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ModelConfigs* other);

  // implements Message ----------------------------------------------

  inline ModelConfigs* New() const PROTOBUF_FINAL { return New(NULL); }

  ModelConfigs* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ModelConfigs& from);
  void MergeFrom(const ModelConfigs& from);
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
  void InternalSwap(ModelConfigs* other);
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

  // optional string name = 1 [default = "TLPreprocessor"];
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string version = 2 [default = "1.0.0"];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional float no_signals_interval_seconds = 7 [default = 0.5];
  bool has_no_signals_interval_seconds() const;
  void clear_no_signals_interval_seconds();
  static const int kNoSignalsIntervalSecondsFieldNumber = 7;
  float no_signals_interval_seconds() const;
  void set_no_signals_interval_seconds(float value);

  // optional int32 max_cached_lights_size = 3 [default = 100];
  bool has_max_cached_lights_size() const;
  void clear_max_cached_lights_size();
  static const int kMaxCachedLightsSizeFieldNumber = 3;
  ::google::protobuf::int32 max_cached_lights_size() const;
  void set_max_cached_lights_size(::google::protobuf::int32 value);

  // optional int32 projection_image_cols = 4 [default = 1920];
  bool has_projection_image_cols() const;
  void clear_projection_image_cols();
  static const int kProjectionImageColsFieldNumber = 4;
  ::google::protobuf::int32 projection_image_cols() const;
  void set_projection_image_cols(::google::protobuf::int32 value);

  // optional int32 projection_image_rows = 5 [default = 1080];
  bool has_projection_image_rows() const;
  void clear_projection_image_rows();
  static const int kProjectionImageRowsFieldNumber = 5;
  ::google::protobuf::int32 projection_image_rows() const;
  void set_projection_image_rows(::google::protobuf::int32 value);

  // optional float sync_interval_seconds = 6 [default = 0.1];
  bool has_sync_interval_seconds() const;
  void clear_sync_interval_seconds();
  static const int kSyncIntervalSecondsFieldNumber = 6;
  float sync_interval_seconds() const;
  void set_sync_interval_seconds(float value);

  // @@protoc_insertion_point(class_scope:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_version();
  void clear_has_version();
  void set_has_max_cached_lights_size();
  void clear_has_max_cached_lights_size();
  void set_has_projection_image_cols();
  void clear_has_projection_image_cols();
  void set_has_projection_image_rows();
  void clear_has_projection_image_rows();
  void set_has_sync_interval_seconds();
  void clear_has_sync_interval_seconds();
  void set_has_no_signals_interval_seconds();
  void clear_has_no_signals_interval_seconds();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  float no_signals_interval_seconds_;
  ::google::protobuf::int32 max_cached_lights_size_;
  ::google::protobuf::int32 projection_image_cols_;
  ::google::protobuf::int32 projection_image_rows_;
  float sync_interval_seconds_;
  friend struct protobuf_modules_2fperception_2fproto_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "TLPreprocessor"];
inline bool ModelConfigs::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModelConfigs::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModelConfigs::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModelConfigs::clear_name() {
  name_.ClearToDefaultNoArena(&ModelConfigs::_default_name_.get());
  clear_has_name();
}
inline const ::std::string& ModelConfigs::name() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
  return name_.GetNoArena();
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
#if LANG_CXX11
inline void ModelConfigs::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &ModelConfigs::_default_name_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
#endif
inline void ModelConfigs::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
  return name_.MutableNoArena(&ModelConfigs::_default_name_.get());
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
  clear_has_name();
  return name_.ReleaseNoArena(&ModelConfigs::_default_name_.get());
}
inline void ModelConfigs::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&ModelConfigs::_default_name_.get(), name);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool ModelConfigs::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ModelConfigs::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ModelConfigs::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ModelConfigs::clear_version() {
  version_.ClearToDefaultNoArena(&ModelConfigs::_default_version_.get());
  clear_has_version();
}
inline const ::std::string& ModelConfigs::version() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
  return version_.GetNoArena();
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
#if LANG_CXX11
inline void ModelConfigs::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &ModelConfigs::_default_version_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
#endif
inline void ModelConfigs::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
  return version_.MutableNoArena(&ModelConfigs::_default_version_.get());
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
  clear_has_version();
  return version_.ReleaseNoArena(&ModelConfigs::_default_version_.get());
}
inline void ModelConfigs::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&ModelConfigs::_default_version_.get(), version);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}

// optional int32 max_cached_lights_size = 3 [default = 100];
inline bool ModelConfigs::has_max_cached_lights_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ModelConfigs::set_has_max_cached_lights_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ModelConfigs::clear_has_max_cached_lights_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ModelConfigs::clear_max_cached_lights_size() {
  max_cached_lights_size_ = 100;
  clear_has_max_cached_lights_size();
}
inline ::google::protobuf::int32 ModelConfigs::max_cached_lights_size() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.max_cached_lights_size)
  return max_cached_lights_size_;
}
inline void ModelConfigs::set_max_cached_lights_size(::google::protobuf::int32 value) {
  set_has_max_cached_lights_size();
  max_cached_lights_size_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.max_cached_lights_size)
}

// optional int32 projection_image_cols = 4 [default = 1920];
inline bool ModelConfigs::has_projection_image_cols() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ModelConfigs::set_has_projection_image_cols() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ModelConfigs::clear_has_projection_image_cols() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ModelConfigs::clear_projection_image_cols() {
  projection_image_cols_ = 1920;
  clear_has_projection_image_cols();
}
inline ::google::protobuf::int32 ModelConfigs::projection_image_cols() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_cols)
  return projection_image_cols_;
}
inline void ModelConfigs::set_projection_image_cols(::google::protobuf::int32 value) {
  set_has_projection_image_cols();
  projection_image_cols_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_cols)
}

// optional int32 projection_image_rows = 5 [default = 1080];
inline bool ModelConfigs::has_projection_image_rows() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ModelConfigs::set_has_projection_image_rows() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ModelConfigs::clear_has_projection_image_rows() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ModelConfigs::clear_projection_image_rows() {
  projection_image_rows_ = 1080;
  clear_has_projection_image_rows();
}
inline ::google::protobuf::int32 ModelConfigs::projection_image_rows() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_rows)
  return projection_image_rows_;
}
inline void ModelConfigs::set_projection_image_rows(::google::protobuf::int32 value) {
  set_has_projection_image_rows();
  projection_image_rows_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_rows)
}

// optional float sync_interval_seconds = 6 [default = 0.1];
inline bool ModelConfigs::has_sync_interval_seconds() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ModelConfigs::set_has_sync_interval_seconds() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ModelConfigs::clear_has_sync_interval_seconds() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ModelConfigs::clear_sync_interval_seconds() {
  sync_interval_seconds_ = 0.1f;
  clear_has_sync_interval_seconds();
}
inline float ModelConfigs::sync_interval_seconds() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.sync_interval_seconds)
  return sync_interval_seconds_;
}
inline void ModelConfigs::set_sync_interval_seconds(float value) {
  set_has_sync_interval_seconds();
  sync_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.sync_interval_seconds)
}

// optional float no_signals_interval_seconds = 7 [default = 0.5];
inline bool ModelConfigs::has_no_signals_interval_seconds() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_no_signals_interval_seconds() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_no_signals_interval_seconds() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_no_signals_interval_seconds() {
  no_signals_interval_seconds_ = 0.5f;
  clear_has_no_signals_interval_seconds();
}
inline float ModelConfigs::no_signals_interval_seconds() const {
  // @@protoc_insertion_point(field_get:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.no_signals_interval_seconds)
  return no_signals_interval_seconds_;
}
inline void ModelConfigs::set_no_signals_interval_seconds(float value) {
  set_has_no_signals_interval_seconds();
  no_signals_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.perception.traffic_light.preprocessor_config.ModelConfigs.no_signals_interval_seconds)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace preprocessor_config
}  // namespace traffic_light
}  // namespace perception
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fperception_2fproto_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto__INCLUDED