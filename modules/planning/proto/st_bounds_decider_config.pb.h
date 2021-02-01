// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/st_bounds_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED

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
class STBoundsDeciderConfig;
class STBoundsDeciderConfigDefaultTypeInternal;
extern STBoundsDeciderConfigDefaultTypeInternal _STBoundsDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto

// ===================================================================

class STBoundsDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.STBoundsDeciderConfig) */ {
 public:
  STBoundsDeciderConfig();
  virtual ~STBoundsDeciderConfig();

  STBoundsDeciderConfig(const STBoundsDeciderConfig& from);

  inline STBoundsDeciderConfig& operator=(const STBoundsDeciderConfig& from) {
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
  static const STBoundsDeciderConfig& default_instance();

  static inline const STBoundsDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const STBoundsDeciderConfig*>(
               &_STBoundsDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(STBoundsDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline STBoundsDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  STBoundsDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const STBoundsDeciderConfig& from);
  void MergeFrom(const STBoundsDeciderConfig& from);
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
  void InternalSwap(STBoundsDeciderConfig* other);
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

  // optional double total_time = 1 [default = 7];
  bool has_total_time() const;
  void clear_total_time();
  static const int kTotalTimeFieldNumber = 1;
  double total_time() const;
  void set_total_time(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.STBoundsDeciderConfig)
 private:
  void set_has_total_time();
  void clear_has_total_time();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double total_time_;
  friend struct protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// STBoundsDeciderConfig

// optional double total_time = 1 [default = 7];
inline bool STBoundsDeciderConfig::has_total_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void STBoundsDeciderConfig::set_has_total_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void STBoundsDeciderConfig::clear_has_total_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void STBoundsDeciderConfig::clear_total_time() {
  total_time_ = 7;
  clear_has_total_time();
}
inline double STBoundsDeciderConfig::total_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.STBoundsDeciderConfig.total_time)
  return total_time_;
}
inline void STBoundsDeciderConfig::set_total_time(double value) {
  set_has_total_time();
  total_time_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.STBoundsDeciderConfig.total_time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto__INCLUDED
