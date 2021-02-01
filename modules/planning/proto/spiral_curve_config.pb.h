// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/spiral_curve_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fspiral_5fcurve_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fspiral_5fcurve_5fconfig_2eproto__INCLUDED

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
class SpiralCurveConfig;
class SpiralCurveConfigDefaultTypeInternal;
extern SpiralCurveConfigDefaultTypeInternal _SpiralCurveConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fspiral_5fcurve_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fspiral_5fcurve_5fconfig_2eproto

// ===================================================================

class SpiralCurveConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.SpiralCurveConfig) */ {
 public:
  SpiralCurveConfig();
  virtual ~SpiralCurveConfig();

  SpiralCurveConfig(const SpiralCurveConfig& from);

  inline SpiralCurveConfig& operator=(const SpiralCurveConfig& from) {
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
  static const SpiralCurveConfig& default_instance();

  static inline const SpiralCurveConfig* internal_default_instance() {
    return reinterpret_cast<const SpiralCurveConfig*>(
               &_SpiralCurveConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SpiralCurveConfig* other);

  // implements Message ----------------------------------------------

  inline SpiralCurveConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  SpiralCurveConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SpiralCurveConfig& from);
  void MergeFrom(const SpiralCurveConfig& from);
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
  void InternalSwap(SpiralCurveConfig* other);
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

  // optional double newton_raphson_tol = 2 [default = 0.01];
  bool has_newton_raphson_tol() const;
  void clear_newton_raphson_tol();
  static const int kNewtonRaphsonTolFieldNumber = 2;
  double newton_raphson_tol() const;
  void set_newton_raphson_tol(double value);

  // optional int32 simpson_size = 1 [default = 9];
  bool has_simpson_size() const;
  void clear_simpson_size();
  static const int kSimpsonSizeFieldNumber = 1;
  ::google::protobuf::int32 simpson_size() const;
  void set_simpson_size(::google::protobuf::int32 value);

  // optional int32 newton_raphson_max_iter = 3 [default = 20];
  bool has_newton_raphson_max_iter() const;
  void clear_newton_raphson_max_iter();
  static const int kNewtonRaphsonMaxIterFieldNumber = 3;
  ::google::protobuf::int32 newton_raphson_max_iter() const;
  void set_newton_raphson_max_iter(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.SpiralCurveConfig)
 private:
  void set_has_simpson_size();
  void clear_has_simpson_size();
  void set_has_newton_raphson_tol();
  void clear_has_newton_raphson_tol();
  void set_has_newton_raphson_max_iter();
  void clear_has_newton_raphson_max_iter();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double newton_raphson_tol_;
  ::google::protobuf::int32 simpson_size_;
  ::google::protobuf::int32 newton_raphson_max_iter_;
  friend struct protobuf_modules_2fplanning_2fproto_2fspiral_5fcurve_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SpiralCurveConfig

// optional int32 simpson_size = 1 [default = 9];
inline bool SpiralCurveConfig::has_simpson_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SpiralCurveConfig::set_has_simpson_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SpiralCurveConfig::clear_has_simpson_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SpiralCurveConfig::clear_simpson_size() {
  simpson_size_ = 9;
  clear_has_simpson_size();
}
inline ::google::protobuf::int32 SpiralCurveConfig::simpson_size() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpiralCurveConfig.simpson_size)
  return simpson_size_;
}
inline void SpiralCurveConfig::set_simpson_size(::google::protobuf::int32 value) {
  set_has_simpson_size();
  simpson_size_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpiralCurveConfig.simpson_size)
}

// optional double newton_raphson_tol = 2 [default = 0.01];
inline bool SpiralCurveConfig::has_newton_raphson_tol() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SpiralCurveConfig::set_has_newton_raphson_tol() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SpiralCurveConfig::clear_has_newton_raphson_tol() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SpiralCurveConfig::clear_newton_raphson_tol() {
  newton_raphson_tol_ = 0.01;
  clear_has_newton_raphson_tol();
}
inline double SpiralCurveConfig::newton_raphson_tol() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpiralCurveConfig.newton_raphson_tol)
  return newton_raphson_tol_;
}
inline void SpiralCurveConfig::set_newton_raphson_tol(double value) {
  set_has_newton_raphson_tol();
  newton_raphson_tol_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpiralCurveConfig.newton_raphson_tol)
}

// optional int32 newton_raphson_max_iter = 3 [default = 20];
inline bool SpiralCurveConfig::has_newton_raphson_max_iter() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SpiralCurveConfig::set_has_newton_raphson_max_iter() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SpiralCurveConfig::clear_has_newton_raphson_max_iter() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SpiralCurveConfig::clear_newton_raphson_max_iter() {
  newton_raphson_max_iter_ = 20;
  clear_has_newton_raphson_max_iter();
}
inline ::google::protobuf::int32 SpiralCurveConfig::newton_raphson_max_iter() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.SpiralCurveConfig.newton_raphson_max_iter)
  return newton_raphson_max_iter_;
}
inline void SpiralCurveConfig::set_newton_raphson_max_iter(::google::protobuf::int32 value) {
  set_has_newton_raphson_max_iter();
  newton_raphson_max_iter_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.SpiralCurveConfig.newton_raphson_max_iter)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fspiral_5fcurve_5fconfig_2eproto__INCLUDED
