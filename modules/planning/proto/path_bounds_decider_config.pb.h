// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/path_bounds_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fpath_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fpath_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED

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
class PathBoundsDeciderConfig;
class PathBoundsDeciderConfigDefaultTypeInternal;
extern PathBoundsDeciderConfigDefaultTypeInternal _PathBoundsDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fpath_5fbounds_5fdecider_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fpath_5fbounds_5fdecider_5fconfig_2eproto

// ===================================================================

class PathBoundsDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.PathBoundsDeciderConfig) */ {
 public:
  PathBoundsDeciderConfig();
  virtual ~PathBoundsDeciderConfig();

  PathBoundsDeciderConfig(const PathBoundsDeciderConfig& from);

  inline PathBoundsDeciderConfig& operator=(const PathBoundsDeciderConfig& from) {
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
  static const PathBoundsDeciderConfig& default_instance();

  static inline const PathBoundsDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const PathBoundsDeciderConfig*>(
               &_PathBoundsDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PathBoundsDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline PathBoundsDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  PathBoundsDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PathBoundsDeciderConfig& from);
  void MergeFrom(const PathBoundsDeciderConfig& from);
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
  void InternalSwap(PathBoundsDeciderConfig* other);
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

  // optional bool is_lane_borrowing = 1;
  bool has_is_lane_borrowing() const;
  void clear_is_lane_borrowing();
  static const int kIsLaneBorrowingFieldNumber = 1;
  bool is_lane_borrowing() const;
  void set_is_lane_borrowing(bool value);

  // optional bool is_pull_over = 2;
  bool has_is_pull_over() const;
  void clear_is_pull_over();
  static const int kIsPullOverFieldNumber = 2;
  bool is_pull_over() const;
  void set_is_pull_over(bool value);

  // optional double pull_over_destination_to_adc_buffer = 3 [default = 25];
  bool has_pull_over_destination_to_adc_buffer() const;
  void clear_pull_over_destination_to_adc_buffer();
  static const int kPullOverDestinationToAdcBufferFieldNumber = 3;
  double pull_over_destination_to_adc_buffer() const;
  void set_pull_over_destination_to_adc_buffer(double value);

  // optional double pull_over_destination_to_pathend_buffer = 4 [default = 10];
  bool has_pull_over_destination_to_pathend_buffer() const;
  void clear_pull_over_destination_to_pathend_buffer();
  static const int kPullOverDestinationToPathendBufferFieldNumber = 4;
  double pull_over_destination_to_pathend_buffer() const;
  void set_pull_over_destination_to_pathend_buffer(double value);

  // optional double pull_over_road_edge_buffer = 5 [default = 0.15];
  bool has_pull_over_road_edge_buffer() const;
  void clear_pull_over_road_edge_buffer();
  static const int kPullOverRoadEdgeBufferFieldNumber = 5;
  double pull_over_road_edge_buffer() const;
  void set_pull_over_road_edge_buffer(double value);

  // optional double pull_over_approach_lon_distance_adjust_factor = 6 [default = 1.5];
  bool has_pull_over_approach_lon_distance_adjust_factor() const;
  void clear_pull_over_approach_lon_distance_adjust_factor();
  static const int kPullOverApproachLonDistanceAdjustFactorFieldNumber = 6;
  double pull_over_approach_lon_distance_adjust_factor() const;
  void set_pull_over_approach_lon_distance_adjust_factor(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.PathBoundsDeciderConfig)
 private:
  void set_has_is_lane_borrowing();
  void clear_has_is_lane_borrowing();
  void set_has_is_pull_over();
  void clear_has_is_pull_over();
  void set_has_pull_over_destination_to_adc_buffer();
  void clear_has_pull_over_destination_to_adc_buffer();
  void set_has_pull_over_destination_to_pathend_buffer();
  void clear_has_pull_over_destination_to_pathend_buffer();
  void set_has_pull_over_road_edge_buffer();
  void clear_has_pull_over_road_edge_buffer();
  void set_has_pull_over_approach_lon_distance_adjust_factor();
  void clear_has_pull_over_approach_lon_distance_adjust_factor();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  bool is_lane_borrowing_;
  bool is_pull_over_;
  double pull_over_destination_to_adc_buffer_;
  double pull_over_destination_to_pathend_buffer_;
  double pull_over_road_edge_buffer_;
  double pull_over_approach_lon_distance_adjust_factor_;
  friend struct protobuf_modules_2fplanning_2fproto_2fpath_5fbounds_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PathBoundsDeciderConfig

// optional bool is_lane_borrowing = 1;
inline bool PathBoundsDeciderConfig::has_is_lane_borrowing() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PathBoundsDeciderConfig::set_has_is_lane_borrowing() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PathBoundsDeciderConfig::clear_has_is_lane_borrowing() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PathBoundsDeciderConfig::clear_is_lane_borrowing() {
  is_lane_borrowing_ = false;
  clear_has_is_lane_borrowing();
}
inline bool PathBoundsDeciderConfig::is_lane_borrowing() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PathBoundsDeciderConfig.is_lane_borrowing)
  return is_lane_borrowing_;
}
inline void PathBoundsDeciderConfig::set_is_lane_borrowing(bool value) {
  set_has_is_lane_borrowing();
  is_lane_borrowing_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PathBoundsDeciderConfig.is_lane_borrowing)
}

// optional bool is_pull_over = 2;
inline bool PathBoundsDeciderConfig::has_is_pull_over() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PathBoundsDeciderConfig::set_has_is_pull_over() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PathBoundsDeciderConfig::clear_has_is_pull_over() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PathBoundsDeciderConfig::clear_is_pull_over() {
  is_pull_over_ = false;
  clear_has_is_pull_over();
}
inline bool PathBoundsDeciderConfig::is_pull_over() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PathBoundsDeciderConfig.is_pull_over)
  return is_pull_over_;
}
inline void PathBoundsDeciderConfig::set_is_pull_over(bool value) {
  set_has_is_pull_over();
  is_pull_over_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PathBoundsDeciderConfig.is_pull_over)
}

// optional double pull_over_destination_to_adc_buffer = 3 [default = 25];
inline bool PathBoundsDeciderConfig::has_pull_over_destination_to_adc_buffer() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PathBoundsDeciderConfig::set_has_pull_over_destination_to_adc_buffer() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PathBoundsDeciderConfig::clear_has_pull_over_destination_to_adc_buffer() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PathBoundsDeciderConfig::clear_pull_over_destination_to_adc_buffer() {
  pull_over_destination_to_adc_buffer_ = 25;
  clear_has_pull_over_destination_to_adc_buffer();
}
inline double PathBoundsDeciderConfig::pull_over_destination_to_adc_buffer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_destination_to_adc_buffer)
  return pull_over_destination_to_adc_buffer_;
}
inline void PathBoundsDeciderConfig::set_pull_over_destination_to_adc_buffer(double value) {
  set_has_pull_over_destination_to_adc_buffer();
  pull_over_destination_to_adc_buffer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_destination_to_adc_buffer)
}

// optional double pull_over_destination_to_pathend_buffer = 4 [default = 10];
inline bool PathBoundsDeciderConfig::has_pull_over_destination_to_pathend_buffer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PathBoundsDeciderConfig::set_has_pull_over_destination_to_pathend_buffer() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PathBoundsDeciderConfig::clear_has_pull_over_destination_to_pathend_buffer() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PathBoundsDeciderConfig::clear_pull_over_destination_to_pathend_buffer() {
  pull_over_destination_to_pathend_buffer_ = 10;
  clear_has_pull_over_destination_to_pathend_buffer();
}
inline double PathBoundsDeciderConfig::pull_over_destination_to_pathend_buffer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_destination_to_pathend_buffer)
  return pull_over_destination_to_pathend_buffer_;
}
inline void PathBoundsDeciderConfig::set_pull_over_destination_to_pathend_buffer(double value) {
  set_has_pull_over_destination_to_pathend_buffer();
  pull_over_destination_to_pathend_buffer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_destination_to_pathend_buffer)
}

// optional double pull_over_road_edge_buffer = 5 [default = 0.15];
inline bool PathBoundsDeciderConfig::has_pull_over_road_edge_buffer() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PathBoundsDeciderConfig::set_has_pull_over_road_edge_buffer() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PathBoundsDeciderConfig::clear_has_pull_over_road_edge_buffer() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PathBoundsDeciderConfig::clear_pull_over_road_edge_buffer() {
  pull_over_road_edge_buffer_ = 0.15;
  clear_has_pull_over_road_edge_buffer();
}
inline double PathBoundsDeciderConfig::pull_over_road_edge_buffer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_road_edge_buffer)
  return pull_over_road_edge_buffer_;
}
inline void PathBoundsDeciderConfig::set_pull_over_road_edge_buffer(double value) {
  set_has_pull_over_road_edge_buffer();
  pull_over_road_edge_buffer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_road_edge_buffer)
}

// optional double pull_over_approach_lon_distance_adjust_factor = 6 [default = 1.5];
inline bool PathBoundsDeciderConfig::has_pull_over_approach_lon_distance_adjust_factor() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PathBoundsDeciderConfig::set_has_pull_over_approach_lon_distance_adjust_factor() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PathBoundsDeciderConfig::clear_has_pull_over_approach_lon_distance_adjust_factor() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PathBoundsDeciderConfig::clear_pull_over_approach_lon_distance_adjust_factor() {
  pull_over_approach_lon_distance_adjust_factor_ = 1.5;
  clear_has_pull_over_approach_lon_distance_adjust_factor();
}
inline double PathBoundsDeciderConfig::pull_over_approach_lon_distance_adjust_factor() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_approach_lon_distance_adjust_factor)
  return pull_over_approach_lon_distance_adjust_factor_;
}
inline void PathBoundsDeciderConfig::set_pull_over_approach_lon_distance_adjust_factor(double value) {
  set_has_pull_over_approach_lon_distance_adjust_factor();
  pull_over_approach_lon_distance_adjust_factor_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PathBoundsDeciderConfig.pull_over_approach_lon_distance_adjust_factor)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fpath_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED