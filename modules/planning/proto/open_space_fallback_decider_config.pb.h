// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/open_space_fallback_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fopen_5fspace_5ffallback_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fopen_5fspace_5ffallback_5fdecider_5fconfig_2eproto__INCLUDED

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
namespace planning {
class OpenSpaceFallBackDeciderConfig;
class OpenSpaceFallBackDeciderConfigDefaultTypeInternal;
extern OpenSpaceFallBackDeciderConfigDefaultTypeInternal _OpenSpaceFallBackDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fopen_5fspace_5ffallback_5fdecider_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fopen_5fspace_5ffallback_5fdecider_5fconfig_2eproto

// ===================================================================

class OpenSpaceFallBackDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.OpenSpaceFallBackDeciderConfig) */ {
 public:
  OpenSpaceFallBackDeciderConfig();
  virtual ~OpenSpaceFallBackDeciderConfig();

  OpenSpaceFallBackDeciderConfig(const OpenSpaceFallBackDeciderConfig& from);

  inline OpenSpaceFallBackDeciderConfig& operator=(const OpenSpaceFallBackDeciderConfig& from) {
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
  static const OpenSpaceFallBackDeciderConfig& default_instance();

  static inline const OpenSpaceFallBackDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const OpenSpaceFallBackDeciderConfig*>(
               &_OpenSpaceFallBackDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OpenSpaceFallBackDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline OpenSpaceFallBackDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  OpenSpaceFallBackDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OpenSpaceFallBackDeciderConfig& from);
  void MergeFrom(const OpenSpaceFallBackDeciderConfig& from);
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
  void InternalSwap(OpenSpaceFallBackDeciderConfig* other);
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

  // optional double open_space_prediction_time_period = 1 [default = 5];
  bool has_open_space_prediction_time_period() const;
  void clear_open_space_prediction_time_period();
  static const int kOpenSpacePredictionTimePeriodFieldNumber = 1;
  double open_space_prediction_time_period() const;
  void set_open_space_prediction_time_period(double value);

  // optional double open_space_fallback_collision_distance = 2 [default = 5];
  bool has_open_space_fallback_collision_distance() const;
  void clear_open_space_fallback_collision_distance();
  static const int kOpenSpaceFallbackCollisionDistanceFieldNumber = 2;
  double open_space_fallback_collision_distance() const;
  void set_open_space_fallback_collision_distance(double value);

  // optional double open_space_fallback_stop_distance = 3 [default = 2];
  bool has_open_space_fallback_stop_distance() const;
  void clear_open_space_fallback_stop_distance();
  static const int kOpenSpaceFallbackStopDistanceFieldNumber = 3;
  double open_space_fallback_stop_distance() const;
  void set_open_space_fallback_stop_distance(double value);

  // optional double open_space_fallback_collision_time_buffer = 4 [default = 10];
  bool has_open_space_fallback_collision_time_buffer() const;
  void clear_open_space_fallback_collision_time_buffer();
  static const int kOpenSpaceFallbackCollisionTimeBufferFieldNumber = 4;
  double open_space_fallback_collision_time_buffer() const;
  void set_open_space_fallback_collision_time_buffer(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.OpenSpaceFallBackDeciderConfig)
 private:
  void set_has_open_space_prediction_time_period();
  void clear_has_open_space_prediction_time_period();
  void set_has_open_space_fallback_collision_distance();
  void clear_has_open_space_fallback_collision_distance();
  void set_has_open_space_fallback_stop_distance();
  void clear_has_open_space_fallback_stop_distance();
  void set_has_open_space_fallback_collision_time_buffer();
  void clear_has_open_space_fallback_collision_time_buffer();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double open_space_prediction_time_period_;
  double open_space_fallback_collision_distance_;
  double open_space_fallback_stop_distance_;
  double open_space_fallback_collision_time_buffer_;
  friend struct protobuf_modules_2fplanning_2fproto_2fopen_5fspace_5ffallback_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// OpenSpaceFallBackDeciderConfig

// optional double open_space_prediction_time_period = 1 [default = 5];
inline bool OpenSpaceFallBackDeciderConfig::has_open_space_prediction_time_period() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OpenSpaceFallBackDeciderConfig::set_has_open_space_prediction_time_period() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_has_open_space_prediction_time_period() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_open_space_prediction_time_period() {
  open_space_prediction_time_period_ = 5;
  clear_has_open_space_prediction_time_period();
}
inline double OpenSpaceFallBackDeciderConfig::open_space_prediction_time_period() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_prediction_time_period)
  return open_space_prediction_time_period_;
}
inline void OpenSpaceFallBackDeciderConfig::set_open_space_prediction_time_period(double value) {
  set_has_open_space_prediction_time_period();
  open_space_prediction_time_period_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_prediction_time_period)
}

// optional double open_space_fallback_collision_distance = 2 [default = 5];
inline bool OpenSpaceFallBackDeciderConfig::has_open_space_fallback_collision_distance() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OpenSpaceFallBackDeciderConfig::set_has_open_space_fallback_collision_distance() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_has_open_space_fallback_collision_distance() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_open_space_fallback_collision_distance() {
  open_space_fallback_collision_distance_ = 5;
  clear_has_open_space_fallback_collision_distance();
}
inline double OpenSpaceFallBackDeciderConfig::open_space_fallback_collision_distance() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_fallback_collision_distance)
  return open_space_fallback_collision_distance_;
}
inline void OpenSpaceFallBackDeciderConfig::set_open_space_fallback_collision_distance(double value) {
  set_has_open_space_fallback_collision_distance();
  open_space_fallback_collision_distance_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_fallback_collision_distance)
}

// optional double open_space_fallback_stop_distance = 3 [default = 2];
inline bool OpenSpaceFallBackDeciderConfig::has_open_space_fallback_stop_distance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OpenSpaceFallBackDeciderConfig::set_has_open_space_fallback_stop_distance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_has_open_space_fallback_stop_distance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_open_space_fallback_stop_distance() {
  open_space_fallback_stop_distance_ = 2;
  clear_has_open_space_fallback_stop_distance();
}
inline double OpenSpaceFallBackDeciderConfig::open_space_fallback_stop_distance() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_fallback_stop_distance)
  return open_space_fallback_stop_distance_;
}
inline void OpenSpaceFallBackDeciderConfig::set_open_space_fallback_stop_distance(double value) {
  set_has_open_space_fallback_stop_distance();
  open_space_fallback_stop_distance_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_fallback_stop_distance)
}

// optional double open_space_fallback_collision_time_buffer = 4 [default = 10];
inline bool OpenSpaceFallBackDeciderConfig::has_open_space_fallback_collision_time_buffer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void OpenSpaceFallBackDeciderConfig::set_has_open_space_fallback_collision_time_buffer() {
  _has_bits_[0] |= 0x00000008u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_has_open_space_fallback_collision_time_buffer() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void OpenSpaceFallBackDeciderConfig::clear_open_space_fallback_collision_time_buffer() {
  open_space_fallback_collision_time_buffer_ = 10;
  clear_has_open_space_fallback_collision_time_buffer();
}
inline double OpenSpaceFallBackDeciderConfig::open_space_fallback_collision_time_buffer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_fallback_collision_time_buffer)
  return open_space_fallback_collision_time_buffer_;
}
inline void OpenSpaceFallBackDeciderConfig::set_open_space_fallback_collision_time_buffer(double value) {
  set_has_open_space_fallback_collision_time_buffer();
  open_space_fallback_collision_time_buffer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.OpenSpaceFallBackDeciderConfig.open_space_fallback_collision_time_buffer)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fopen_5fspace_5ffallback_5fdecider_5fconfig_2eproto__INCLUDED
