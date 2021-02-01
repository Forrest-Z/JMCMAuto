// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/localization_dy/proto/imu.proto

#ifndef PROTOBUF_modules_2flocalization_5fdy_2fproto_2fimu_2eproto__INCLUDED
#define PROTOBUF_modules_2flocalization_5fdy_2fproto_2fimu_2eproto__INCLUDED

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
#include "modules/common/proto/header.pb.h"
#include "modules/localization_dy/proto/pose.pb.h"
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace common {
class Header;
class HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
}  // namespace common
namespace localization_dy {
class CorrectedImu;
class CorrectedImuDefaultTypeInternal;
extern CorrectedImuDefaultTypeInternal _CorrectedImu_default_instance_;
class Pose;
class PoseDefaultTypeInternal;
extern PoseDefaultTypeInternal _Pose_default_instance_;
}  // namespace localization_dy
}  // namespace jmc_auto

namespace jmc_auto {
namespace localization_dy {

namespace protobuf_modules_2flocalization_5fdy_2fproto_2fimu_2eproto {
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
}  // namespace protobuf_modules_2flocalization_5fdy_2fproto_2fimu_2eproto

// ===================================================================

class CorrectedImu : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.localization_dy.CorrectedImu) */ {
 public:
  CorrectedImu();
  virtual ~CorrectedImu();

  CorrectedImu(const CorrectedImu& from);

  inline CorrectedImu& operator=(const CorrectedImu& from) {
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
  static const CorrectedImu& default_instance();

  static inline const CorrectedImu* internal_default_instance() {
    return reinterpret_cast<const CorrectedImu*>(
               &_CorrectedImu_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CorrectedImu* other);

  // implements Message ----------------------------------------------

  inline CorrectedImu* New() const PROTOBUF_FINAL { return New(NULL); }

  CorrectedImu* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CorrectedImu& from);
  void MergeFrom(const CorrectedImu& from);
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
  void InternalSwap(CorrectedImu* other);
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

  // optional .jmc_auto.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::jmc_auto::common::Header& header() const;
  ::jmc_auto::common::Header* mutable_header();
  ::jmc_auto::common::Header* release_header();
  void set_allocated_header(::jmc_auto::common::Header* header);

  // optional .jmc_auto.localization_dy.Pose imu = 3;
  bool has_imu() const;
  void clear_imu();
  static const int kImuFieldNumber = 3;
  const ::jmc_auto::localization_dy::Pose& imu() const;
  ::jmc_auto::localization_dy::Pose* mutable_imu();
  ::jmc_auto::localization_dy::Pose* release_imu();
  void set_allocated_imu(::jmc_auto::localization_dy::Pose* imu);

  // @@protoc_insertion_point(class_scope:jmc_auto.localization_dy.CorrectedImu)
 private:
  void set_has_header();
  void clear_has_header();
  void set_has_imu();
  void clear_has_imu();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::jmc_auto::common::Header* header_;
  ::jmc_auto::localization_dy::Pose* imu_;
  friend struct protobuf_modules_2flocalization_5fdy_2fproto_2fimu_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CorrectedImu

// optional .jmc_auto.common.Header header = 1;
inline bool CorrectedImu::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CorrectedImu::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CorrectedImu::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CorrectedImu::clear_header() {
  if (header_ != NULL) header_->::jmc_auto::common::Header::Clear();
  clear_has_header();
}
inline const ::jmc_auto::common::Header& CorrectedImu::header() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization_dy.CorrectedImu.header)
  return header_ != NULL ? *header_
                         : *::jmc_auto::common::Header::internal_default_instance();
}
inline ::jmc_auto::common::Header* CorrectedImu::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::jmc_auto::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.localization_dy.CorrectedImu.header)
  return header_;
}
inline ::jmc_auto::common::Header* CorrectedImu::release_header() {
  // @@protoc_insertion_point(field_release:jmc_auto.localization_dy.CorrectedImu.header)
  clear_has_header();
  ::jmc_auto::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void CorrectedImu::set_allocated_header(::jmc_auto::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.localization_dy.CorrectedImu.header)
}

// optional .jmc_auto.localization_dy.Pose imu = 3;
inline bool CorrectedImu::has_imu() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CorrectedImu::set_has_imu() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CorrectedImu::clear_has_imu() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CorrectedImu::clear_imu() {
  if (imu_ != NULL) imu_->::jmc_auto::localization_dy::Pose::Clear();
  clear_has_imu();
}
inline const ::jmc_auto::localization_dy::Pose& CorrectedImu::imu() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization_dy.CorrectedImu.imu)
  return imu_ != NULL ? *imu_
                         : *::jmc_auto::localization_dy::Pose::internal_default_instance();
}
inline ::jmc_auto::localization_dy::Pose* CorrectedImu::mutable_imu() {
  set_has_imu();
  if (imu_ == NULL) {
    imu_ = new ::jmc_auto::localization_dy::Pose;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.localization_dy.CorrectedImu.imu)
  return imu_;
}
inline ::jmc_auto::localization_dy::Pose* CorrectedImu::release_imu() {
  // @@protoc_insertion_point(field_release:jmc_auto.localization_dy.CorrectedImu.imu)
  clear_has_imu();
  ::jmc_auto::localization_dy::Pose* temp = imu_;
  imu_ = NULL;
  return temp;
}
inline void CorrectedImu::set_allocated_imu(::jmc_auto::localization_dy::Pose* imu) {
  delete imu_;
  imu_ = imu;
  if (imu) {
    set_has_imu();
  } else {
    clear_has_imu();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.localization_dy.CorrectedImu.imu)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace localization_dy
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2flocalization_5fdy_2fproto_2fimu_2eproto__INCLUDED
