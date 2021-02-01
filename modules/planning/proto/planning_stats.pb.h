// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/planning_stats.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto__INCLUDED

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
class PlanningStats;
class PlanningStatsDefaultTypeInternal;
extern PlanningStatsDefaultTypeInternal _PlanningStats_default_instance_;
class StatsGroup;
class StatsGroupDefaultTypeInternal;
extern StatsGroupDefaultTypeInternal _StatsGroup_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto

// ===================================================================

class StatsGroup : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.StatsGroup) */ {
 public:
  StatsGroup();
  virtual ~StatsGroup();

  StatsGroup(const StatsGroup& from);

  inline StatsGroup& operator=(const StatsGroup& from) {
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
  static const StatsGroup& default_instance();

  static inline const StatsGroup* internal_default_instance() {
    return reinterpret_cast<const StatsGroup*>(
               &_StatsGroup_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StatsGroup* other);

  // implements Message ----------------------------------------------

  inline StatsGroup* New() const PROTOBUF_FINAL { return New(NULL); }

  StatsGroup* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StatsGroup& from);
  void MergeFrom(const StatsGroup& from);
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
  void InternalSwap(StatsGroup* other);
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

  // optional double max = 1;
  bool has_max() const;
  void clear_max();
  static const int kMaxFieldNumber = 1;
  double max() const;
  void set_max(double value);

  // optional double sum = 3;
  bool has_sum() const;
  void clear_sum();
  static const int kSumFieldNumber = 3;
  double sum() const;
  void set_sum(double value);

  // optional double avg = 4;
  bool has_avg() const;
  void clear_avg();
  static const int kAvgFieldNumber = 4;
  double avg() const;
  void set_avg(double value);

  // optional int32 num = 5;
  bool has_num() const;
  void clear_num();
  static const int kNumFieldNumber = 5;
  ::google::protobuf::int32 num() const;
  void set_num(::google::protobuf::int32 value);

  // optional double min = 2 [default = 10000000000];
  bool has_min() const;
  void clear_min();
  static const int kMinFieldNumber = 2;
  double min() const;
  void set_min(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.StatsGroup)
 private:
  void set_has_max();
  void clear_has_max();
  void set_has_min();
  void clear_has_min();
  void set_has_sum();
  void clear_has_sum();
  void set_has_avg();
  void clear_has_avg();
  void set_has_num();
  void clear_has_num();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double max_;
  double sum_;
  double avg_;
  ::google::protobuf::int32 num_;
  double min_;
  friend struct protobuf_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PlanningStats : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.PlanningStats) */ {
 public:
  PlanningStats();
  virtual ~PlanningStats();

  PlanningStats(const PlanningStats& from);

  inline PlanningStats& operator=(const PlanningStats& from) {
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
  static const PlanningStats& default_instance();

  static inline const PlanningStats* internal_default_instance() {
    return reinterpret_cast<const PlanningStats*>(
               &_PlanningStats_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PlanningStats* other);

  // implements Message ----------------------------------------------

  inline PlanningStats* New() const PROTOBUF_FINAL { return New(NULL); }

  PlanningStats* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PlanningStats& from);
  void MergeFrom(const PlanningStats& from);
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
  void InternalSwap(PlanningStats* other);
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

  // optional .jmc_auto.planning.StatsGroup total_path_length = 1;
  bool has_total_path_length() const;
  void clear_total_path_length();
  static const int kTotalPathLengthFieldNumber = 1;
  const ::jmc_auto::planning::StatsGroup& total_path_length() const;
  ::jmc_auto::planning::StatsGroup* mutable_total_path_length();
  ::jmc_auto::planning::StatsGroup* release_total_path_length();
  void set_allocated_total_path_length(::jmc_auto::planning::StatsGroup* total_path_length);

  // optional .jmc_auto.planning.StatsGroup total_path_time = 2;
  bool has_total_path_time() const;
  void clear_total_path_time();
  static const int kTotalPathTimeFieldNumber = 2;
  const ::jmc_auto::planning::StatsGroup& total_path_time() const;
  ::jmc_auto::planning::StatsGroup* mutable_total_path_time();
  ::jmc_auto::planning::StatsGroup* release_total_path_time();
  void set_allocated_total_path_time(::jmc_auto::planning::StatsGroup* total_path_time);

  // optional .jmc_auto.planning.StatsGroup v = 3;
  bool has_v() const;
  void clear_v();
  static const int kVFieldNumber = 3;
  const ::jmc_auto::planning::StatsGroup& v() const;
  ::jmc_auto::planning::StatsGroup* mutable_v();
  ::jmc_auto::planning::StatsGroup* release_v();
  void set_allocated_v(::jmc_auto::planning::StatsGroup* v);

  // optional .jmc_auto.planning.StatsGroup a = 4;
  bool has_a() const;
  void clear_a();
  static const int kAFieldNumber = 4;
  const ::jmc_auto::planning::StatsGroup& a() const;
  ::jmc_auto::planning::StatsGroup* mutable_a();
  ::jmc_auto::planning::StatsGroup* release_a();
  void set_allocated_a(::jmc_auto::planning::StatsGroup* a);

  // optional .jmc_auto.planning.StatsGroup kappa = 5;
  bool has_kappa() const;
  void clear_kappa();
  static const int kKappaFieldNumber = 5;
  const ::jmc_auto::planning::StatsGroup& kappa() const;
  ::jmc_auto::planning::StatsGroup* mutable_kappa();
  ::jmc_auto::planning::StatsGroup* release_kappa();
  void set_allocated_kappa(::jmc_auto::planning::StatsGroup* kappa);

  // optional .jmc_auto.planning.StatsGroup dkappa = 6;
  bool has_dkappa() const;
  void clear_dkappa();
  static const int kDkappaFieldNumber = 6;
  const ::jmc_auto::planning::StatsGroup& dkappa() const;
  ::jmc_auto::planning::StatsGroup* mutable_dkappa();
  ::jmc_auto::planning::StatsGroup* release_dkappa();
  void set_allocated_dkappa(::jmc_auto::planning::StatsGroup* dkappa);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.PlanningStats)
 private:
  void set_has_total_path_length();
  void clear_has_total_path_length();
  void set_has_total_path_time();
  void clear_has_total_path_time();
  void set_has_v();
  void clear_has_v();
  void set_has_a();
  void clear_has_a();
  void set_has_kappa();
  void clear_has_kappa();
  void set_has_dkappa();
  void clear_has_dkappa();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::jmc_auto::planning::StatsGroup* total_path_length_;
  ::jmc_auto::planning::StatsGroup* total_path_time_;
  ::jmc_auto::planning::StatsGroup* v_;
  ::jmc_auto::planning::StatsGroup* a_;
  ::jmc_auto::planning::StatsGroup* kappa_;
  ::jmc_auto::planning::StatsGroup* dkappa_;
  friend struct protobuf_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StatsGroup

// optional double max = 1;
inline bool StatsGroup::has_max() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StatsGroup::set_has_max() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StatsGroup::clear_has_max() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StatsGroup::clear_max() {
  max_ = 0;
  clear_has_max();
}
inline double StatsGroup::max() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.StatsGroup.max)
  return max_;
}
inline void StatsGroup::set_max(double value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.StatsGroup.max)
}

// optional double min = 2 [default = 10000000000];
inline bool StatsGroup::has_min() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void StatsGroup::set_has_min() {
  _has_bits_[0] |= 0x00000010u;
}
inline void StatsGroup::clear_has_min() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void StatsGroup::clear_min() {
  min_ = 10000000000;
  clear_has_min();
}
inline double StatsGroup::min() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.StatsGroup.min)
  return min_;
}
inline void StatsGroup::set_min(double value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.StatsGroup.min)
}

// optional double sum = 3;
inline bool StatsGroup::has_sum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StatsGroup::set_has_sum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StatsGroup::clear_has_sum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StatsGroup::clear_sum() {
  sum_ = 0;
  clear_has_sum();
}
inline double StatsGroup::sum() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.StatsGroup.sum)
  return sum_;
}
inline void StatsGroup::set_sum(double value) {
  set_has_sum();
  sum_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.StatsGroup.sum)
}

// optional double avg = 4;
inline bool StatsGroup::has_avg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StatsGroup::set_has_avg() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StatsGroup::clear_has_avg() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StatsGroup::clear_avg() {
  avg_ = 0;
  clear_has_avg();
}
inline double StatsGroup::avg() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.StatsGroup.avg)
  return avg_;
}
inline void StatsGroup::set_avg(double value) {
  set_has_avg();
  avg_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.StatsGroup.avg)
}

// optional int32 num = 5;
inline bool StatsGroup::has_num() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StatsGroup::set_has_num() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StatsGroup::clear_has_num() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StatsGroup::clear_num() {
  num_ = 0;
  clear_has_num();
}
inline ::google::protobuf::int32 StatsGroup::num() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.StatsGroup.num)
  return num_;
}
inline void StatsGroup::set_num(::google::protobuf::int32 value) {
  set_has_num();
  num_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.StatsGroup.num)
}

// -------------------------------------------------------------------

// PlanningStats

// optional .jmc_auto.planning.StatsGroup total_path_length = 1;
inline bool PlanningStats::has_total_path_length() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlanningStats::set_has_total_path_length() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlanningStats::clear_has_total_path_length() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlanningStats::clear_total_path_length() {
  if (total_path_length_ != NULL) total_path_length_->::jmc_auto::planning::StatsGroup::Clear();
  clear_has_total_path_length();
}
inline const ::jmc_auto::planning::StatsGroup& PlanningStats::total_path_length() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PlanningStats.total_path_length)
  return total_path_length_ != NULL ? *total_path_length_
                         : *::jmc_auto::planning::StatsGroup::internal_default_instance();
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::mutable_total_path_length() {
  set_has_total_path_length();
  if (total_path_length_ == NULL) {
    total_path_length_ = new ::jmc_auto::planning::StatsGroup;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PlanningStats.total_path_length)
  return total_path_length_;
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::release_total_path_length() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PlanningStats.total_path_length)
  clear_has_total_path_length();
  ::jmc_auto::planning::StatsGroup* temp = total_path_length_;
  total_path_length_ = NULL;
  return temp;
}
inline void PlanningStats::set_allocated_total_path_length(::jmc_auto::planning::StatsGroup* total_path_length) {
  delete total_path_length_;
  total_path_length_ = total_path_length;
  if (total_path_length) {
    set_has_total_path_length();
  } else {
    clear_has_total_path_length();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PlanningStats.total_path_length)
}

// optional .jmc_auto.planning.StatsGroup total_path_time = 2;
inline bool PlanningStats::has_total_path_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlanningStats::set_has_total_path_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlanningStats::clear_has_total_path_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlanningStats::clear_total_path_time() {
  if (total_path_time_ != NULL) total_path_time_->::jmc_auto::planning::StatsGroup::Clear();
  clear_has_total_path_time();
}
inline const ::jmc_auto::planning::StatsGroup& PlanningStats::total_path_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PlanningStats.total_path_time)
  return total_path_time_ != NULL ? *total_path_time_
                         : *::jmc_auto::planning::StatsGroup::internal_default_instance();
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::mutable_total_path_time() {
  set_has_total_path_time();
  if (total_path_time_ == NULL) {
    total_path_time_ = new ::jmc_auto::planning::StatsGroup;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PlanningStats.total_path_time)
  return total_path_time_;
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::release_total_path_time() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PlanningStats.total_path_time)
  clear_has_total_path_time();
  ::jmc_auto::planning::StatsGroup* temp = total_path_time_;
  total_path_time_ = NULL;
  return temp;
}
inline void PlanningStats::set_allocated_total_path_time(::jmc_auto::planning::StatsGroup* total_path_time) {
  delete total_path_time_;
  total_path_time_ = total_path_time;
  if (total_path_time) {
    set_has_total_path_time();
  } else {
    clear_has_total_path_time();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PlanningStats.total_path_time)
}

// optional .jmc_auto.planning.StatsGroup v = 3;
inline bool PlanningStats::has_v() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlanningStats::set_has_v() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlanningStats::clear_has_v() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlanningStats::clear_v() {
  if (v_ != NULL) v_->::jmc_auto::planning::StatsGroup::Clear();
  clear_has_v();
}
inline const ::jmc_auto::planning::StatsGroup& PlanningStats::v() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PlanningStats.v)
  return v_ != NULL ? *v_
                         : *::jmc_auto::planning::StatsGroup::internal_default_instance();
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::mutable_v() {
  set_has_v();
  if (v_ == NULL) {
    v_ = new ::jmc_auto::planning::StatsGroup;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PlanningStats.v)
  return v_;
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::release_v() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PlanningStats.v)
  clear_has_v();
  ::jmc_auto::planning::StatsGroup* temp = v_;
  v_ = NULL;
  return temp;
}
inline void PlanningStats::set_allocated_v(::jmc_auto::planning::StatsGroup* v) {
  delete v_;
  v_ = v;
  if (v) {
    set_has_v();
  } else {
    clear_has_v();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PlanningStats.v)
}

// optional .jmc_auto.planning.StatsGroup a = 4;
inline bool PlanningStats::has_a() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlanningStats::set_has_a() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlanningStats::clear_has_a() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlanningStats::clear_a() {
  if (a_ != NULL) a_->::jmc_auto::planning::StatsGroup::Clear();
  clear_has_a();
}
inline const ::jmc_auto::planning::StatsGroup& PlanningStats::a() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PlanningStats.a)
  return a_ != NULL ? *a_
                         : *::jmc_auto::planning::StatsGroup::internal_default_instance();
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::mutable_a() {
  set_has_a();
  if (a_ == NULL) {
    a_ = new ::jmc_auto::planning::StatsGroup;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PlanningStats.a)
  return a_;
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::release_a() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PlanningStats.a)
  clear_has_a();
  ::jmc_auto::planning::StatsGroup* temp = a_;
  a_ = NULL;
  return temp;
}
inline void PlanningStats::set_allocated_a(::jmc_auto::planning::StatsGroup* a) {
  delete a_;
  a_ = a;
  if (a) {
    set_has_a();
  } else {
    clear_has_a();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PlanningStats.a)
}

// optional .jmc_auto.planning.StatsGroup kappa = 5;
inline bool PlanningStats::has_kappa() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PlanningStats::set_has_kappa() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PlanningStats::clear_has_kappa() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PlanningStats::clear_kappa() {
  if (kappa_ != NULL) kappa_->::jmc_auto::planning::StatsGroup::Clear();
  clear_has_kappa();
}
inline const ::jmc_auto::planning::StatsGroup& PlanningStats::kappa() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PlanningStats.kappa)
  return kappa_ != NULL ? *kappa_
                         : *::jmc_auto::planning::StatsGroup::internal_default_instance();
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::mutable_kappa() {
  set_has_kappa();
  if (kappa_ == NULL) {
    kappa_ = new ::jmc_auto::planning::StatsGroup;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PlanningStats.kappa)
  return kappa_;
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::release_kappa() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PlanningStats.kappa)
  clear_has_kappa();
  ::jmc_auto::planning::StatsGroup* temp = kappa_;
  kappa_ = NULL;
  return temp;
}
inline void PlanningStats::set_allocated_kappa(::jmc_auto::planning::StatsGroup* kappa) {
  delete kappa_;
  kappa_ = kappa;
  if (kappa) {
    set_has_kappa();
  } else {
    clear_has_kappa();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PlanningStats.kappa)
}

// optional .jmc_auto.planning.StatsGroup dkappa = 6;
inline bool PlanningStats::has_dkappa() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PlanningStats::set_has_dkappa() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PlanningStats::clear_has_dkappa() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PlanningStats::clear_dkappa() {
  if (dkappa_ != NULL) dkappa_->::jmc_auto::planning::StatsGroup::Clear();
  clear_has_dkappa();
}
inline const ::jmc_auto::planning::StatsGroup& PlanningStats::dkappa() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PlanningStats.dkappa)
  return dkappa_ != NULL ? *dkappa_
                         : *::jmc_auto::planning::StatsGroup::internal_default_instance();
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::mutable_dkappa() {
  set_has_dkappa();
  if (dkappa_ == NULL) {
    dkappa_ = new ::jmc_auto::planning::StatsGroup;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PlanningStats.dkappa)
  return dkappa_;
}
inline ::jmc_auto::planning::StatsGroup* PlanningStats::release_dkappa() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PlanningStats.dkappa)
  clear_has_dkappa();
  ::jmc_auto::planning::StatsGroup* temp = dkappa_;
  dkappa_ = NULL;
  return temp;
}
inline void PlanningStats::set_allocated_dkappa(::jmc_auto::planning::StatsGroup* dkappa) {
  delete dkappa_;
  dkappa_ = dkappa;
  if (dkappa) {
    set_has_dkappa();
  } else {
    clear_has_dkappa();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PlanningStats.dkappa)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fplanning_5fstats_2eproto__INCLUDED