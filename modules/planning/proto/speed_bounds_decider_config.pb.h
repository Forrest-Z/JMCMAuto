// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/speed_bounds_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fspeed_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fspeed_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED

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
class SpeedBoundsDeciderConfig;
class SpeedBoundsDeciderConfigDefaultTypeInternal;
extern SpeedBoundsDeciderConfigDefaultTypeInternal _SpeedBoundsDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fspeed_5fbounds_5fdecider_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fspeed_5fbounds_5fdecider_5fconfig_2eproto

// ===================================================================

class SpeedBoundsDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.SpeedBoundsDeciderConfig) */ {
 public:
  SpeedBoundsDeciderConfig();
  virtual ~SpeedBoundsDeciderConfig();

  SpeedBoundsDeciderConfig(const SpeedBoundsDeciderConfig& from);

  inline SpeedBoundsDeciderConfig& operator=(const SpeedBoundsDeciderConfig& from) {
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
  static const SpeedBoundsDeciderConfig& default_instance();

  static inline const SpeedBoundsDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const SpeedBoundsDeciderConfig*>(
               &_SpeedBoundsDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SpeedBoundsDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline SpeedBoundsDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  SpeedBoundsDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SpeedBoundsDeciderConfig& from);
  void MergeFrom(const SpeedBoundsDeciderConfig& from);
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
  void InternalSwap(SpeedBoundsDeciderConfig* other);
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

  // optional double static_obs_nudge_speed_ratio = 8;
  bool has_static_obs_nudge_speed_ratio() const;
  void clear_static_obs_nudge_speed_ratio();
  static const int kStaticObsNudgeSpeedRatioFieldNumber = 8;
  double static_obs_nudge_speed_ratio() const;
  void set_static_obs_nudge_speed_ratio(double value);

  // optional double dynamic_obs_nudge_speed_ratio = 9;
  bool has_dynamic_obs_nudge_speed_ratio() const;
  void clear_dynamic_obs_nudge_speed_ratio();
  static const int kDynamicObsNudgeSpeedRatioFieldNumber = 9;
  double dynamic_obs_nudge_speed_ratio() const;
  void set_dynamic_obs_nudge_speed_ratio(double value);

  // optional double total_time = 1 [default = 7];
  bool has_total_time() const;
  void clear_total_time();
  static const int kTotalTimeFieldNumber = 1;
  double total_time() const;
  void set_total_time(double value);

  // optional double boundary_buffer = 2 [default = 0.1];
  bool has_boundary_buffer() const;
  void clear_boundary_buffer();
  static const int kBoundaryBufferFieldNumber = 2;
  double boundary_buffer() const;
  void set_boundary_buffer(double value);

  // optional double max_centric_acceleration_limit = 3 [default = 2];
  bool has_max_centric_acceleration_limit() const;
  void clear_max_centric_acceleration_limit();
  static const int kMaxCentricAccelerationLimitFieldNumber = 3;
  double max_centric_acceleration_limit() const;
  void set_max_centric_acceleration_limit(double value);

  // optional double minimal_kappa = 4 [default = 1e-05];
  bool has_minimal_kappa() const;
  void clear_minimal_kappa();
  static const int kMinimalKappaFieldNumber = 4;
  double minimal_kappa() const;
  void set_minimal_kappa(double value);

  // optional double point_extension = 5 [default = 1];
  bool has_point_extension() const;
  void clear_point_extension();
  static const int kPointExtensionFieldNumber = 5;
  double point_extension() const;
  void set_point_extension(double value);

  // optional double lowest_speed = 6 [default = 2.5];
  bool has_lowest_speed() const;
  void clear_lowest_speed();
  static const int kLowestSpeedFieldNumber = 6;
  double lowest_speed() const;
  void set_lowest_speed(double value);

  // optional double collision_safety_range = 7 [default = 1];
  bool has_collision_safety_range() const;
  void clear_collision_safety_range();
  static const int kCollisionSafetyRangeFieldNumber = 7;
  double collision_safety_range() const;
  void set_collision_safety_range(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.SpeedBoundsDeciderConfig)
 private:
  void set_has_total_time();
  void clear_has_total_time();
  void set_has_boundary_buffer();
  void clear_has_boundary_buffer();
  void set_has_max_centric_acceleration_limit();
  void clear_has_max_centric_acceleration_limit();
  void set_has_minimal_kappa();
  void clear_has_minimal_kappa();
  void set_has_point_extension();
  void clear_has_point_extension();
  void set_has_lowest_speed();
  void clear_has_lowest_speed();
  void set_has_collision_safety_range();
  void clear_has_collision_safety_range();
  void set_has_static_obs_nudge_speed_ratio();
  void clear_has_static_obs_nudge_speed_ratio();
  void set_has_dynamic_obs_nudge_speed_ratio();
  void clear_has_dynamic_obs_nudge_speed_ratio();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double static_obs_nudge_speed_ratio_;
  double dynamic_obs_nudge_speed_ratio_;
  double total_time_;
  double boundary_buffer_;
  double max_centric_acceleration_limit_;
  double minimal_kappa_;
  double point_extension_;
  double lowest_speed_;
  double collision_safety_range_;
  friend struct protobuf_modules_2fplanning_2fproto_2fspeed_5fbounds_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedBoundsDeciderConfig

// optional double total_time = 1 [default = 7];
inline bool SpeedBoundsDeciderConfig::has_total_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_total_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SpeedBoundsDeciderConfig::clear_has_total_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SpeedBoundsDeciderConfig::clear_total_time() {
  total_time_ = 7;
  clear_has_total_time();
}
inline double SpeedBoundsDeciderConfig::total_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.total_time)
  return total_time_;
}
inline void SpeedBoundsDeciderConfig::set_total_time(double value) {
  set_has_total_time();
  total_time_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.total_time)
}

// optional double boundary_buffer = 2 [default = 0.1];
inline bool SpeedBoundsDeciderConfig::has_boundary_buffer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_boundary_buffer() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SpeedBoundsDeciderConfig::clear_has_boundary_buffer() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SpeedBoundsDeciderConfig::clear_boundary_buffer() {
  boundary_buffer_ = 0.1;
  clear_has_boundary_buffer();
}
inline double SpeedBoundsDeciderConfig::boundary_buffer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.boundary_buffer)
  return boundary_buffer_;
}
inline void SpeedBoundsDeciderConfig::set_boundary_buffer(double value) {
  set_has_boundary_buffer();
  boundary_buffer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.boundary_buffer)
}

// optional double max_centric_acceleration_limit = 3 [default = 2];
inline bool SpeedBoundsDeciderConfig::has_max_centric_acceleration_limit() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_max_centric_acceleration_limit() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SpeedBoundsDeciderConfig::clear_has_max_centric_acceleration_limit() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SpeedBoundsDeciderConfig::clear_max_centric_acceleration_limit() {
  max_centric_acceleration_limit_ = 2;
  clear_has_max_centric_acceleration_limit();
}
inline double SpeedBoundsDeciderConfig::max_centric_acceleration_limit() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.max_centric_acceleration_limit)
  return max_centric_acceleration_limit_;
}
inline void SpeedBoundsDeciderConfig::set_max_centric_acceleration_limit(double value) {
  set_has_max_centric_acceleration_limit();
  max_centric_acceleration_limit_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.max_centric_acceleration_limit)
}

// optional double minimal_kappa = 4 [default = 1e-05];
inline bool SpeedBoundsDeciderConfig::has_minimal_kappa() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_minimal_kappa() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SpeedBoundsDeciderConfig::clear_has_minimal_kappa() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SpeedBoundsDeciderConfig::clear_minimal_kappa() {
  minimal_kappa_ = 1e-05;
  clear_has_minimal_kappa();
}
inline double SpeedBoundsDeciderConfig::minimal_kappa() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.minimal_kappa)
  return minimal_kappa_;
}
inline void SpeedBoundsDeciderConfig::set_minimal_kappa(double value) {
  set_has_minimal_kappa();
  minimal_kappa_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.minimal_kappa)
}

// optional double point_extension = 5 [default = 1];
inline bool SpeedBoundsDeciderConfig::has_point_extension() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_point_extension() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SpeedBoundsDeciderConfig::clear_has_point_extension() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SpeedBoundsDeciderConfig::clear_point_extension() {
  point_extension_ = 1;
  clear_has_point_extension();
}
inline double SpeedBoundsDeciderConfig::point_extension() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.point_extension)
  return point_extension_;
}
inline void SpeedBoundsDeciderConfig::set_point_extension(double value) {
  set_has_point_extension();
  point_extension_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.point_extension)
}

// optional double lowest_speed = 6 [default = 2.5];
inline bool SpeedBoundsDeciderConfig::has_lowest_speed() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_lowest_speed() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SpeedBoundsDeciderConfig::clear_has_lowest_speed() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SpeedBoundsDeciderConfig::clear_lowest_speed() {
  lowest_speed_ = 2.5;
  clear_has_lowest_speed();
}
inline double SpeedBoundsDeciderConfig::lowest_speed() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.lowest_speed)
  return lowest_speed_;
}
inline void SpeedBoundsDeciderConfig::set_lowest_speed(double value) {
  set_has_lowest_speed();
  lowest_speed_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.lowest_speed)
}

// optional double collision_safety_range = 7 [default = 1];
inline bool SpeedBoundsDeciderConfig::has_collision_safety_range() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_collision_safety_range() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SpeedBoundsDeciderConfig::clear_has_collision_safety_range() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SpeedBoundsDeciderConfig::clear_collision_safety_range() {
  collision_safety_range_ = 1;
  clear_has_collision_safety_range();
}
inline double SpeedBoundsDeciderConfig::collision_safety_range() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.collision_safety_range)
  return collision_safety_range_;
}
inline void SpeedBoundsDeciderConfig::set_collision_safety_range(double value) {
  set_has_collision_safety_range();
  collision_safety_range_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.collision_safety_range)
}

// optional double static_obs_nudge_speed_ratio = 8;
inline bool SpeedBoundsDeciderConfig::has_static_obs_nudge_speed_ratio() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_static_obs_nudge_speed_ratio() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SpeedBoundsDeciderConfig::clear_has_static_obs_nudge_speed_ratio() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SpeedBoundsDeciderConfig::clear_static_obs_nudge_speed_ratio() {
  static_obs_nudge_speed_ratio_ = 0;
  clear_has_static_obs_nudge_speed_ratio();
}
inline double SpeedBoundsDeciderConfig::static_obs_nudge_speed_ratio() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.static_obs_nudge_speed_ratio)
  return static_obs_nudge_speed_ratio_;
}
inline void SpeedBoundsDeciderConfig::set_static_obs_nudge_speed_ratio(double value) {
  set_has_static_obs_nudge_speed_ratio();
  static_obs_nudge_speed_ratio_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.static_obs_nudge_speed_ratio)
}

// optional double dynamic_obs_nudge_speed_ratio = 9;
inline bool SpeedBoundsDeciderConfig::has_dynamic_obs_nudge_speed_ratio() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SpeedBoundsDeciderConfig::set_has_dynamic_obs_nudge_speed_ratio() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SpeedBoundsDeciderConfig::clear_has_dynamic_obs_nudge_speed_ratio() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SpeedBoundsDeciderConfig::clear_dynamic_obs_nudge_speed_ratio() {
  dynamic_obs_nudge_speed_ratio_ = 0;
  clear_has_dynamic_obs_nudge_speed_ratio();
}
inline double SpeedBoundsDeciderConfig::dynamic_obs_nudge_speed_ratio() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpeedBoundsDeciderConfig.dynamic_obs_nudge_speed_ratio)
  return dynamic_obs_nudge_speed_ratio_;
}
inline void SpeedBoundsDeciderConfig::set_dynamic_obs_nudge_speed_ratio(double value) {
  set_has_dynamic_obs_nudge_speed_ratio();
  dynamic_obs_nudge_speed_ratio_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpeedBoundsDeciderConfig.dynamic_obs_nudge_speed_ratio)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fspeed_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED
