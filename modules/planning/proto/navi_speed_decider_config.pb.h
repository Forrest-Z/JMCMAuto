// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/navi_speed_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fnavi_5fspeed_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fnavi_5fspeed_5fdecider_5fconfig_2eproto__INCLUDED

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
class NaviSpeedDeciderConfig;
class NaviSpeedDeciderConfigDefaultTypeInternal;
extern NaviSpeedDeciderConfigDefaultTypeInternal _NaviSpeedDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fnavi_5fspeed_5fdecider_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fnavi_5fspeed_5fdecider_5fconfig_2eproto

// ===================================================================

class NaviSpeedDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.NaviSpeedDeciderConfig) */ {
 public:
  NaviSpeedDeciderConfig();
  virtual ~NaviSpeedDeciderConfig();

  NaviSpeedDeciderConfig(const NaviSpeedDeciderConfig& from);

  inline NaviSpeedDeciderConfig& operator=(const NaviSpeedDeciderConfig& from) {
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
  static const NaviSpeedDeciderConfig& default_instance();

  static inline const NaviSpeedDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const NaviSpeedDeciderConfig*>(
               &_NaviSpeedDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(NaviSpeedDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline NaviSpeedDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  NaviSpeedDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NaviSpeedDeciderConfig& from);
  void MergeFrom(const NaviSpeedDeciderConfig& from);
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
  void InternalSwap(NaviSpeedDeciderConfig* other);
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

  // optional double kappa_preview = 17 [default = 0];
  bool has_kappa_preview() const;
  void clear_kappa_preview();
  static const int kKappaPreviewFieldNumber = 17;
  double kappa_preview() const;
  void set_kappa_preview(double value);

  // optional double kappa_threshold = 18 [default = 0];
  bool has_kappa_threshold() const;
  void clear_kappa_threshold();
  static const int kKappaThresholdFieldNumber = 18;
  double kappa_threshold() const;
  void set_kappa_threshold(double value);

  // optional bool enable_safe_path = 14 [default = true];
  bool has_enable_safe_path() const;
  void clear_enable_safe_path();
  static const int kEnableSafePathFieldNumber = 14;
  bool enable_safe_path() const;
  void set_enable_safe_path(bool value);

  // optional bool enable_planning_start_point = 15 [default = true];
  bool has_enable_planning_start_point() const;
  void clear_enable_planning_start_point();
  static const int kEnablePlanningStartPointFieldNumber = 15;
  bool enable_planning_start_point() const;
  void set_enable_planning_start_point(bool value);

  // optional bool enable_accel_auto_compensation = 16 [default = true];
  bool has_enable_accel_auto_compensation() const;
  void clear_enable_accel_auto_compensation();
  static const int kEnableAccelAutoCompensationFieldNumber = 16;
  bool enable_accel_auto_compensation() const;
  void set_enable_accel_auto_compensation(bool value);

  // optional double preferred_accel = 1 [default = 2];
  bool has_preferred_accel() const;
  void clear_preferred_accel();
  static const int kPreferredAccelFieldNumber = 1;
  double preferred_accel() const;
  void set_preferred_accel(double value);

  // optional double preferred_decel = 2 [default = 2];
  bool has_preferred_decel() const;
  void clear_preferred_decel();
  static const int kPreferredDecelFieldNumber = 2;
  double preferred_decel() const;
  void set_preferred_decel(double value);

  // optional double preferred_jerk = 3 [default = 2];
  bool has_preferred_jerk() const;
  void clear_preferred_jerk();
  static const int kPreferredJerkFieldNumber = 3;
  double preferred_jerk() const;
  void set_preferred_jerk(double value);

  // optional double max_accel = 4 [default = 4];
  bool has_max_accel() const;
  void clear_max_accel();
  static const int kMaxAccelFieldNumber = 4;
  double max_accel() const;
  void set_max_accel(double value);

  // optional double max_decel = 5 [default = 5];
  bool has_max_decel() const;
  void clear_max_decel();
  static const int kMaxDecelFieldNumber = 5;
  double max_decel() const;
  void set_max_decel(double value);

  // optional double obstacle_buffer = 6 [default = 0.5];
  bool has_obstacle_buffer() const;
  void clear_obstacle_buffer();
  static const int kObstacleBufferFieldNumber = 6;
  double obstacle_buffer() const;
  void set_obstacle_buffer(double value);

  // optional double safe_distance_base = 7 [default = 2];
  bool has_safe_distance_base() const;
  void clear_safe_distance_base();
  static const int kSafeDistanceBaseFieldNumber = 7;
  double safe_distance_base() const;
  void set_safe_distance_base(double value);

  // optional double safe_distance_ratio = 8 [default = 1];
  bool has_safe_distance_ratio() const;
  void clear_safe_distance_ratio();
  static const int kSafeDistanceRatioFieldNumber = 8;
  double safe_distance_ratio() const;
  void set_safe_distance_ratio(double value);

  // optional double following_accel_ratio = 9 [default = 0.5];
  bool has_following_accel_ratio() const;
  void clear_following_accel_ratio();
  static const int kFollowingAccelRatioFieldNumber = 9;
  double following_accel_ratio() const;
  void set_following_accel_ratio(double value);

  // optional double soft_centric_accel_limit = 10 [default = 1.2];
  bool has_soft_centric_accel_limit() const;
  void clear_soft_centric_accel_limit();
  static const int kSoftCentricAccelLimitFieldNumber = 10;
  double soft_centric_accel_limit() const;
  void set_soft_centric_accel_limit(double value);

  // optional double hard_centric_accel_limit = 11 [default = 1.5];
  bool has_hard_centric_accel_limit() const;
  void clear_hard_centric_accel_limit();
  static const int kHardCentricAccelLimitFieldNumber = 11;
  double hard_centric_accel_limit() const;
  void set_hard_centric_accel_limit(double value);

  // optional double hard_speed_limit = 12 [default = 100];
  bool has_hard_speed_limit() const;
  void clear_hard_speed_limit();
  static const int kHardSpeedLimitFieldNumber = 12;
  double hard_speed_limit() const;
  void set_hard_speed_limit(double value);

  // optional double hard_accel_limit = 13 [default = 10];
  bool has_hard_accel_limit() const;
  void clear_hard_accel_limit();
  static const int kHardAccelLimitFieldNumber = 13;
  double hard_accel_limit() const;
  void set_hard_accel_limit(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.NaviSpeedDeciderConfig)
 private:
  void set_has_preferred_accel();
  void clear_has_preferred_accel();
  void set_has_preferred_decel();
  void clear_has_preferred_decel();
  void set_has_preferred_jerk();
  void clear_has_preferred_jerk();
  void set_has_max_accel();
  void clear_has_max_accel();
  void set_has_max_decel();
  void clear_has_max_decel();
  void set_has_obstacle_buffer();
  void clear_has_obstacle_buffer();
  void set_has_safe_distance_base();
  void clear_has_safe_distance_base();
  void set_has_safe_distance_ratio();
  void clear_has_safe_distance_ratio();
  void set_has_following_accel_ratio();
  void clear_has_following_accel_ratio();
  void set_has_soft_centric_accel_limit();
  void clear_has_soft_centric_accel_limit();
  void set_has_hard_centric_accel_limit();
  void clear_has_hard_centric_accel_limit();
  void set_has_hard_speed_limit();
  void clear_has_hard_speed_limit();
  void set_has_hard_accel_limit();
  void clear_has_hard_accel_limit();
  void set_has_enable_safe_path();
  void clear_has_enable_safe_path();
  void set_has_enable_planning_start_point();
  void clear_has_enable_planning_start_point();
  void set_has_enable_accel_auto_compensation();
  void clear_has_enable_accel_auto_compensation();
  void set_has_kappa_preview();
  void clear_has_kappa_preview();
  void set_has_kappa_threshold();
  void clear_has_kappa_threshold();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double kappa_preview_;
  double kappa_threshold_;
  bool enable_safe_path_;
  bool enable_planning_start_point_;
  bool enable_accel_auto_compensation_;
  double preferred_accel_;
  double preferred_decel_;
  double preferred_jerk_;
  double max_accel_;
  double max_decel_;
  double obstacle_buffer_;
  double safe_distance_base_;
  double safe_distance_ratio_;
  double following_accel_ratio_;
  double soft_centric_accel_limit_;
  double hard_centric_accel_limit_;
  double hard_speed_limit_;
  double hard_accel_limit_;
  friend struct protobuf_modules_2fplanning_2fproto_2fnavi_5fspeed_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// NaviSpeedDeciderConfig

// optional double preferred_accel = 1 [default = 2];
inline bool NaviSpeedDeciderConfig::has_preferred_accel() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_preferred_accel() {
  _has_bits_[0] |= 0x00000020u;
}
inline void NaviSpeedDeciderConfig::clear_has_preferred_accel() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void NaviSpeedDeciderConfig::clear_preferred_accel() {
  preferred_accel_ = 2;
  clear_has_preferred_accel();
}
inline double NaviSpeedDeciderConfig::preferred_accel() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.preferred_accel)
  return preferred_accel_;
}
inline void NaviSpeedDeciderConfig::set_preferred_accel(double value) {
  set_has_preferred_accel();
  preferred_accel_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.preferred_accel)
}

// optional double preferred_decel = 2 [default = 2];
inline bool NaviSpeedDeciderConfig::has_preferred_decel() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_preferred_decel() {
  _has_bits_[0] |= 0x00000040u;
}
inline void NaviSpeedDeciderConfig::clear_has_preferred_decel() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void NaviSpeedDeciderConfig::clear_preferred_decel() {
  preferred_decel_ = 2;
  clear_has_preferred_decel();
}
inline double NaviSpeedDeciderConfig::preferred_decel() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.preferred_decel)
  return preferred_decel_;
}
inline void NaviSpeedDeciderConfig::set_preferred_decel(double value) {
  set_has_preferred_decel();
  preferred_decel_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.preferred_decel)
}

// optional double preferred_jerk = 3 [default = 2];
inline bool NaviSpeedDeciderConfig::has_preferred_jerk() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_preferred_jerk() {
  _has_bits_[0] |= 0x00000080u;
}
inline void NaviSpeedDeciderConfig::clear_has_preferred_jerk() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void NaviSpeedDeciderConfig::clear_preferred_jerk() {
  preferred_jerk_ = 2;
  clear_has_preferred_jerk();
}
inline double NaviSpeedDeciderConfig::preferred_jerk() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.preferred_jerk)
  return preferred_jerk_;
}
inline void NaviSpeedDeciderConfig::set_preferred_jerk(double value) {
  set_has_preferred_jerk();
  preferred_jerk_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.preferred_jerk)
}

// optional double max_accel = 4 [default = 4];
inline bool NaviSpeedDeciderConfig::has_max_accel() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_max_accel() {
  _has_bits_[0] |= 0x00000100u;
}
inline void NaviSpeedDeciderConfig::clear_has_max_accel() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void NaviSpeedDeciderConfig::clear_max_accel() {
  max_accel_ = 4;
  clear_has_max_accel();
}
inline double NaviSpeedDeciderConfig::max_accel() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.max_accel)
  return max_accel_;
}
inline void NaviSpeedDeciderConfig::set_max_accel(double value) {
  set_has_max_accel();
  max_accel_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.max_accel)
}

// optional double max_decel = 5 [default = 5];
inline bool NaviSpeedDeciderConfig::has_max_decel() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_max_decel() {
  _has_bits_[0] |= 0x00000200u;
}
inline void NaviSpeedDeciderConfig::clear_has_max_decel() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void NaviSpeedDeciderConfig::clear_max_decel() {
  max_decel_ = 5;
  clear_has_max_decel();
}
inline double NaviSpeedDeciderConfig::max_decel() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.max_decel)
  return max_decel_;
}
inline void NaviSpeedDeciderConfig::set_max_decel(double value) {
  set_has_max_decel();
  max_decel_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.max_decel)
}

// optional double obstacle_buffer = 6 [default = 0.5];
inline bool NaviSpeedDeciderConfig::has_obstacle_buffer() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_obstacle_buffer() {
  _has_bits_[0] |= 0x00000400u;
}
inline void NaviSpeedDeciderConfig::clear_has_obstacle_buffer() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void NaviSpeedDeciderConfig::clear_obstacle_buffer() {
  obstacle_buffer_ = 0.5;
  clear_has_obstacle_buffer();
}
inline double NaviSpeedDeciderConfig::obstacle_buffer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.obstacle_buffer)
  return obstacle_buffer_;
}
inline void NaviSpeedDeciderConfig::set_obstacle_buffer(double value) {
  set_has_obstacle_buffer();
  obstacle_buffer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.obstacle_buffer)
}

// optional double safe_distance_base = 7 [default = 2];
inline bool NaviSpeedDeciderConfig::has_safe_distance_base() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_safe_distance_base() {
  _has_bits_[0] |= 0x00000800u;
}
inline void NaviSpeedDeciderConfig::clear_has_safe_distance_base() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void NaviSpeedDeciderConfig::clear_safe_distance_base() {
  safe_distance_base_ = 2;
  clear_has_safe_distance_base();
}
inline double NaviSpeedDeciderConfig::safe_distance_base() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.safe_distance_base)
  return safe_distance_base_;
}
inline void NaviSpeedDeciderConfig::set_safe_distance_base(double value) {
  set_has_safe_distance_base();
  safe_distance_base_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.safe_distance_base)
}

// optional double safe_distance_ratio = 8 [default = 1];
inline bool NaviSpeedDeciderConfig::has_safe_distance_ratio() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_safe_distance_ratio() {
  _has_bits_[0] |= 0x00001000u;
}
inline void NaviSpeedDeciderConfig::clear_has_safe_distance_ratio() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void NaviSpeedDeciderConfig::clear_safe_distance_ratio() {
  safe_distance_ratio_ = 1;
  clear_has_safe_distance_ratio();
}
inline double NaviSpeedDeciderConfig::safe_distance_ratio() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.safe_distance_ratio)
  return safe_distance_ratio_;
}
inline void NaviSpeedDeciderConfig::set_safe_distance_ratio(double value) {
  set_has_safe_distance_ratio();
  safe_distance_ratio_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.safe_distance_ratio)
}

// optional double following_accel_ratio = 9 [default = 0.5];
inline bool NaviSpeedDeciderConfig::has_following_accel_ratio() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_following_accel_ratio() {
  _has_bits_[0] |= 0x00002000u;
}
inline void NaviSpeedDeciderConfig::clear_has_following_accel_ratio() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void NaviSpeedDeciderConfig::clear_following_accel_ratio() {
  following_accel_ratio_ = 0.5;
  clear_has_following_accel_ratio();
}
inline double NaviSpeedDeciderConfig::following_accel_ratio() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.following_accel_ratio)
  return following_accel_ratio_;
}
inline void NaviSpeedDeciderConfig::set_following_accel_ratio(double value) {
  set_has_following_accel_ratio();
  following_accel_ratio_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.following_accel_ratio)
}

// optional double soft_centric_accel_limit = 10 [default = 1.2];
inline bool NaviSpeedDeciderConfig::has_soft_centric_accel_limit() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_soft_centric_accel_limit() {
  _has_bits_[0] |= 0x00004000u;
}
inline void NaviSpeedDeciderConfig::clear_has_soft_centric_accel_limit() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void NaviSpeedDeciderConfig::clear_soft_centric_accel_limit() {
  soft_centric_accel_limit_ = 1.2;
  clear_has_soft_centric_accel_limit();
}
inline double NaviSpeedDeciderConfig::soft_centric_accel_limit() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.soft_centric_accel_limit)
  return soft_centric_accel_limit_;
}
inline void NaviSpeedDeciderConfig::set_soft_centric_accel_limit(double value) {
  set_has_soft_centric_accel_limit();
  soft_centric_accel_limit_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.soft_centric_accel_limit)
}

// optional double hard_centric_accel_limit = 11 [default = 1.5];
inline bool NaviSpeedDeciderConfig::has_hard_centric_accel_limit() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_hard_centric_accel_limit() {
  _has_bits_[0] |= 0x00008000u;
}
inline void NaviSpeedDeciderConfig::clear_has_hard_centric_accel_limit() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void NaviSpeedDeciderConfig::clear_hard_centric_accel_limit() {
  hard_centric_accel_limit_ = 1.5;
  clear_has_hard_centric_accel_limit();
}
inline double NaviSpeedDeciderConfig::hard_centric_accel_limit() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.hard_centric_accel_limit)
  return hard_centric_accel_limit_;
}
inline void NaviSpeedDeciderConfig::set_hard_centric_accel_limit(double value) {
  set_has_hard_centric_accel_limit();
  hard_centric_accel_limit_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.hard_centric_accel_limit)
}

// optional double hard_speed_limit = 12 [default = 100];
inline bool NaviSpeedDeciderConfig::has_hard_speed_limit() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_hard_speed_limit() {
  _has_bits_[0] |= 0x00010000u;
}
inline void NaviSpeedDeciderConfig::clear_has_hard_speed_limit() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void NaviSpeedDeciderConfig::clear_hard_speed_limit() {
  hard_speed_limit_ = 100;
  clear_has_hard_speed_limit();
}
inline double NaviSpeedDeciderConfig::hard_speed_limit() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.hard_speed_limit)
  return hard_speed_limit_;
}
inline void NaviSpeedDeciderConfig::set_hard_speed_limit(double value) {
  set_has_hard_speed_limit();
  hard_speed_limit_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.hard_speed_limit)
}

// optional double hard_accel_limit = 13 [default = 10];
inline bool NaviSpeedDeciderConfig::has_hard_accel_limit() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_hard_accel_limit() {
  _has_bits_[0] |= 0x00020000u;
}
inline void NaviSpeedDeciderConfig::clear_has_hard_accel_limit() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void NaviSpeedDeciderConfig::clear_hard_accel_limit() {
  hard_accel_limit_ = 10;
  clear_has_hard_accel_limit();
}
inline double NaviSpeedDeciderConfig::hard_accel_limit() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.hard_accel_limit)
  return hard_accel_limit_;
}
inline void NaviSpeedDeciderConfig::set_hard_accel_limit(double value) {
  set_has_hard_accel_limit();
  hard_accel_limit_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.hard_accel_limit)
}

// optional bool enable_safe_path = 14 [default = true];
inline bool NaviSpeedDeciderConfig::has_enable_safe_path() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_enable_safe_path() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NaviSpeedDeciderConfig::clear_has_enable_safe_path() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NaviSpeedDeciderConfig::clear_enable_safe_path() {
  enable_safe_path_ = true;
  clear_has_enable_safe_path();
}
inline bool NaviSpeedDeciderConfig::enable_safe_path() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.enable_safe_path)
  return enable_safe_path_;
}
inline void NaviSpeedDeciderConfig::set_enable_safe_path(bool value) {
  set_has_enable_safe_path();
  enable_safe_path_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.enable_safe_path)
}

// optional bool enable_planning_start_point = 15 [default = true];
inline bool NaviSpeedDeciderConfig::has_enable_planning_start_point() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_enable_planning_start_point() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NaviSpeedDeciderConfig::clear_has_enable_planning_start_point() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NaviSpeedDeciderConfig::clear_enable_planning_start_point() {
  enable_planning_start_point_ = true;
  clear_has_enable_planning_start_point();
}
inline bool NaviSpeedDeciderConfig::enable_planning_start_point() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.enable_planning_start_point)
  return enable_planning_start_point_;
}
inline void NaviSpeedDeciderConfig::set_enable_planning_start_point(bool value) {
  set_has_enable_planning_start_point();
  enable_planning_start_point_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.enable_planning_start_point)
}

// optional bool enable_accel_auto_compensation = 16 [default = true];
inline bool NaviSpeedDeciderConfig::has_enable_accel_auto_compensation() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_enable_accel_auto_compensation() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NaviSpeedDeciderConfig::clear_has_enable_accel_auto_compensation() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NaviSpeedDeciderConfig::clear_enable_accel_auto_compensation() {
  enable_accel_auto_compensation_ = true;
  clear_has_enable_accel_auto_compensation();
}
inline bool NaviSpeedDeciderConfig::enable_accel_auto_compensation() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.enable_accel_auto_compensation)
  return enable_accel_auto_compensation_;
}
inline void NaviSpeedDeciderConfig::set_enable_accel_auto_compensation(bool value) {
  set_has_enable_accel_auto_compensation();
  enable_accel_auto_compensation_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.enable_accel_auto_compensation)
}

// optional double kappa_preview = 17 [default = 0];
inline bool NaviSpeedDeciderConfig::has_kappa_preview() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_kappa_preview() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NaviSpeedDeciderConfig::clear_has_kappa_preview() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NaviSpeedDeciderConfig::clear_kappa_preview() {
  kappa_preview_ = 0;
  clear_has_kappa_preview();
}
inline double NaviSpeedDeciderConfig::kappa_preview() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.kappa_preview)
  return kappa_preview_;
}
inline void NaviSpeedDeciderConfig::set_kappa_preview(double value) {
  set_has_kappa_preview();
  kappa_preview_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.kappa_preview)
}

// optional double kappa_threshold = 18 [default = 0];
inline bool NaviSpeedDeciderConfig::has_kappa_threshold() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NaviSpeedDeciderConfig::set_has_kappa_threshold() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NaviSpeedDeciderConfig::clear_has_kappa_threshold() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NaviSpeedDeciderConfig::clear_kappa_threshold() {
  kappa_threshold_ = 0;
  clear_has_kappa_threshold();
}
inline double NaviSpeedDeciderConfig::kappa_threshold() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.NaviSpeedDeciderConfig.kappa_threshold)
  return kappa_threshold_;
}
inline void NaviSpeedDeciderConfig::set_kappa_threshold(double value) {
  set_has_kappa_threshold();
  kappa_threshold_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.NaviSpeedDeciderConfig.kappa_threshold)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fnavi_5fspeed_5fdecider_5fconfig_2eproto__INCLUDED
