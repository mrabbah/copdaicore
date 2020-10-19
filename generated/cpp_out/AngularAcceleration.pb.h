// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AngularAcceleration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AngularAcceleration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AngularAcceleration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_AngularAcceleration_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AngularAcceleration_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AngularAcceleration_2eproto;
namespace org {
namespace copdai {
namespace core {
namespace model {
class AngularAcceleration;
class AngularAccelerationDefaultTypeInternal;
extern AngularAccelerationDefaultTypeInternal _AngularAcceleration_default_instance_;
class AngularAccelerationHistory;
class AngularAccelerationHistoryDefaultTypeInternal;
extern AngularAccelerationHistoryDefaultTypeInternal _AngularAccelerationHistory_default_instance_;
}  // namespace model
}  // namespace core
}  // namespace copdai
}  // namespace org
PROTOBUF_NAMESPACE_OPEN
template<> ::org::copdai::core::model::AngularAcceleration* Arena::CreateMaybeMessage<::org::copdai::core::model::AngularAcceleration>(Arena*);
template<> ::org::copdai::core::model::AngularAccelerationHistory* Arena::CreateMaybeMessage<::org::copdai::core::model::AngularAccelerationHistory>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace org {
namespace copdai {
namespace core {
namespace model {

// ===================================================================

class AngularAccelerationHistory PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:org.copdai.core.model.AngularAccelerationHistory) */ {
 public:
  inline AngularAccelerationHistory() : AngularAccelerationHistory(nullptr) {}
  virtual ~AngularAccelerationHistory();

  AngularAccelerationHistory(const AngularAccelerationHistory& from);
  AngularAccelerationHistory(AngularAccelerationHistory&& from) noexcept
    : AngularAccelerationHistory() {
    *this = ::std::move(from);
  }

  inline AngularAccelerationHistory& operator=(const AngularAccelerationHistory& from) {
    CopyFrom(from);
    return *this;
  }
  inline AngularAccelerationHistory& operator=(AngularAccelerationHistory&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AngularAccelerationHistory& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AngularAccelerationHistory* internal_default_instance() {
    return reinterpret_cast<const AngularAccelerationHistory*>(
               &_AngularAccelerationHistory_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AngularAccelerationHistory& a, AngularAccelerationHistory& b) {
    a.Swap(&b);
  }
  inline void Swap(AngularAccelerationHistory* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AngularAccelerationHistory* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AngularAccelerationHistory* New() const final {
    return CreateMaybeMessage<AngularAccelerationHistory>(nullptr);
  }

  AngularAccelerationHistory* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AngularAccelerationHistory>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AngularAccelerationHistory& from);
  void MergeFrom(const AngularAccelerationHistory& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AngularAccelerationHistory* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "org.copdai.core.model.AngularAccelerationHistory";
  }
  protected:
  explicit AngularAccelerationHistory(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AngularAcceleration_2eproto);
    return ::descriptor_table_AngularAcceleration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAngularAccelerationsFieldNumber = 1,
    kSentTimeFieldNumber = 13,
    kStartTimeFieldNumber = 14,
    kEndTimeFieldNumber = 15,
  };
  // repeated .org.copdai.core.model.AngularAcceleration angularAccelerations = 1;
  int angularaccelerations_size() const;
  private:
  int _internal_angularaccelerations_size() const;
  public:
  void clear_angularaccelerations();
  ::org::copdai::core::model::AngularAcceleration* mutable_angularaccelerations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::org::copdai::core::model::AngularAcceleration >*
      mutable_angularaccelerations();
  private:
  const ::org::copdai::core::model::AngularAcceleration& _internal_angularaccelerations(int index) const;
  ::org::copdai::core::model::AngularAcceleration* _internal_add_angularaccelerations();
  public:
  const ::org::copdai::core::model::AngularAcceleration& angularaccelerations(int index) const;
  ::org::copdai::core::model::AngularAcceleration* add_angularaccelerations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::org::copdai::core::model::AngularAcceleration >&
      angularaccelerations() const;

  // required double sentTime = 13;
  bool has_senttime() const;
  private:
  bool _internal_has_senttime() const;
  public:
  void clear_senttime();
  double senttime() const;
  void set_senttime(double value);
  private:
  double _internal_senttime() const;
  void _internal_set_senttime(double value);
  public:

  // required double startTime = 14;
  bool has_starttime() const;
  private:
  bool _internal_has_starttime() const;
  public:
  void clear_starttime();
  double starttime() const;
  void set_starttime(double value);
  private:
  double _internal_starttime() const;
  void _internal_set_starttime(double value);
  public:

  // required double endTime = 15;
  bool has_endtime() const;
  private:
  bool _internal_has_endtime() const;
  public:
  void clear_endtime();
  double endtime() const;
  void set_endtime(double value);
  private:
  double _internal_endtime() const;
  void _internal_set_endtime(double value);
  public:

  // @@protoc_insertion_point(class_scope:org.copdai.core.model.AngularAccelerationHistory)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::org::copdai::core::model::AngularAcceleration > angularaccelerations_;
  double senttime_;
  double starttime_;
  double endtime_;
  friend struct ::TableStruct_AngularAcceleration_2eproto;
};
// -------------------------------------------------------------------

class AngularAcceleration PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:org.copdai.core.model.AngularAcceleration) */ {
 public:
  inline AngularAcceleration() : AngularAcceleration(nullptr) {}
  virtual ~AngularAcceleration();

  AngularAcceleration(const AngularAcceleration& from);
  AngularAcceleration(AngularAcceleration&& from) noexcept
    : AngularAcceleration() {
    *this = ::std::move(from);
  }

  inline AngularAcceleration& operator=(const AngularAcceleration& from) {
    CopyFrom(from);
    return *this;
  }
  inline AngularAcceleration& operator=(AngularAcceleration&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AngularAcceleration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AngularAcceleration* internal_default_instance() {
    return reinterpret_cast<const AngularAcceleration*>(
               &_AngularAcceleration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AngularAcceleration& a, AngularAcceleration& b) {
    a.Swap(&b);
  }
  inline void Swap(AngularAcceleration* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AngularAcceleration* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AngularAcceleration* New() const final {
    return CreateMaybeMessage<AngularAcceleration>(nullptr);
  }

  AngularAcceleration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AngularAcceleration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AngularAcceleration& from);
  void MergeFrom(const AngularAcceleration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AngularAcceleration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "org.copdai.core.model.AngularAcceleration";
  }
  protected:
  explicit AngularAcceleration(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AngularAcceleration_2eproto);
    return ::descriptor_table_AngularAcceleration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kTimeFieldNumber = 15,
  };
  // required double x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // required double y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // required double z = 3;
  bool has_z() const;
  private:
  bool _internal_has_z() const;
  public:
  void clear_z();
  double z() const;
  void set_z(double value);
  private:
  double _internal_z() const;
  void _internal_set_z(double value);
  public:

  // required double time = 15;
  bool has_time() const;
  private:
  bool _internal_has_time() const;
  public:
  void clear_time();
  double time() const;
  void set_time(double value);
  private:
  double _internal_time() const;
  void _internal_set_time(double value);
  public:

  // @@protoc_insertion_point(class_scope:org.copdai.core.model.AngularAcceleration)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double x_;
  double y_;
  double z_;
  double time_;
  friend struct ::TableStruct_AngularAcceleration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AngularAccelerationHistory

// repeated .org.copdai.core.model.AngularAcceleration angularAccelerations = 1;
inline int AngularAccelerationHistory::_internal_angularaccelerations_size() const {
  return angularaccelerations_.size();
}
inline int AngularAccelerationHistory::angularaccelerations_size() const {
  return _internal_angularaccelerations_size();
}
inline void AngularAccelerationHistory::clear_angularaccelerations() {
  angularaccelerations_.Clear();
}
inline ::org::copdai::core::model::AngularAcceleration* AngularAccelerationHistory::mutable_angularaccelerations(int index) {
  // @@protoc_insertion_point(field_mutable:org.copdai.core.model.AngularAccelerationHistory.angularAccelerations)
  return angularaccelerations_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::org::copdai::core::model::AngularAcceleration >*
AngularAccelerationHistory::mutable_angularaccelerations() {
  // @@protoc_insertion_point(field_mutable_list:org.copdai.core.model.AngularAccelerationHistory.angularAccelerations)
  return &angularaccelerations_;
}
inline const ::org::copdai::core::model::AngularAcceleration& AngularAccelerationHistory::_internal_angularaccelerations(int index) const {
  return angularaccelerations_.Get(index);
}
inline const ::org::copdai::core::model::AngularAcceleration& AngularAccelerationHistory::angularaccelerations(int index) const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAccelerationHistory.angularAccelerations)
  return _internal_angularaccelerations(index);
}
inline ::org::copdai::core::model::AngularAcceleration* AngularAccelerationHistory::_internal_add_angularaccelerations() {
  return angularaccelerations_.Add();
}
inline ::org::copdai::core::model::AngularAcceleration* AngularAccelerationHistory::add_angularaccelerations() {
  // @@protoc_insertion_point(field_add:org.copdai.core.model.AngularAccelerationHistory.angularAccelerations)
  return _internal_add_angularaccelerations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::org::copdai::core::model::AngularAcceleration >&
AngularAccelerationHistory::angularaccelerations() const {
  // @@protoc_insertion_point(field_list:org.copdai.core.model.AngularAccelerationHistory.angularAccelerations)
  return angularaccelerations_;
}

// required double sentTime = 13;
inline bool AngularAccelerationHistory::_internal_has_senttime() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AngularAccelerationHistory::has_senttime() const {
  return _internal_has_senttime();
}
inline void AngularAccelerationHistory::clear_senttime() {
  senttime_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double AngularAccelerationHistory::_internal_senttime() const {
  return senttime_;
}
inline double AngularAccelerationHistory::senttime() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAccelerationHistory.sentTime)
  return _internal_senttime();
}
inline void AngularAccelerationHistory::_internal_set_senttime(double value) {
  _has_bits_[0] |= 0x00000001u;
  senttime_ = value;
}
inline void AngularAccelerationHistory::set_senttime(double value) {
  _internal_set_senttime(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAccelerationHistory.sentTime)
}

// required double startTime = 14;
inline bool AngularAccelerationHistory::_internal_has_starttime() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AngularAccelerationHistory::has_starttime() const {
  return _internal_has_starttime();
}
inline void AngularAccelerationHistory::clear_starttime() {
  starttime_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double AngularAccelerationHistory::_internal_starttime() const {
  return starttime_;
}
inline double AngularAccelerationHistory::starttime() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAccelerationHistory.startTime)
  return _internal_starttime();
}
inline void AngularAccelerationHistory::_internal_set_starttime(double value) {
  _has_bits_[0] |= 0x00000002u;
  starttime_ = value;
}
inline void AngularAccelerationHistory::set_starttime(double value) {
  _internal_set_starttime(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAccelerationHistory.startTime)
}

// required double endTime = 15;
inline bool AngularAccelerationHistory::_internal_has_endtime() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AngularAccelerationHistory::has_endtime() const {
  return _internal_has_endtime();
}
inline void AngularAccelerationHistory::clear_endtime() {
  endtime_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double AngularAccelerationHistory::_internal_endtime() const {
  return endtime_;
}
inline double AngularAccelerationHistory::endtime() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAccelerationHistory.endTime)
  return _internal_endtime();
}
inline void AngularAccelerationHistory::_internal_set_endtime(double value) {
  _has_bits_[0] |= 0x00000004u;
  endtime_ = value;
}
inline void AngularAccelerationHistory::set_endtime(double value) {
  _internal_set_endtime(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAccelerationHistory.endTime)
}

// -------------------------------------------------------------------

// AngularAcceleration

// required double x = 1;
inline bool AngularAcceleration::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AngularAcceleration::has_x() const {
  return _internal_has_x();
}
inline void AngularAcceleration::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double AngularAcceleration::_internal_x() const {
  return x_;
}
inline double AngularAcceleration::x() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAcceleration.x)
  return _internal_x();
}
inline void AngularAcceleration::_internal_set_x(double value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void AngularAcceleration::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAcceleration.x)
}

// required double y = 2;
inline bool AngularAcceleration::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AngularAcceleration::has_y() const {
  return _internal_has_y();
}
inline void AngularAcceleration::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double AngularAcceleration::_internal_y() const {
  return y_;
}
inline double AngularAcceleration::y() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAcceleration.y)
  return _internal_y();
}
inline void AngularAcceleration::_internal_set_y(double value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void AngularAcceleration::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAcceleration.y)
}

// required double z = 3;
inline bool AngularAcceleration::_internal_has_z() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AngularAcceleration::has_z() const {
  return _internal_has_z();
}
inline void AngularAcceleration::clear_z() {
  z_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double AngularAcceleration::_internal_z() const {
  return z_;
}
inline double AngularAcceleration::z() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAcceleration.z)
  return _internal_z();
}
inline void AngularAcceleration::_internal_set_z(double value) {
  _has_bits_[0] |= 0x00000004u;
  z_ = value;
}
inline void AngularAcceleration::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAcceleration.z)
}

// required double time = 15;
inline bool AngularAcceleration::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool AngularAcceleration::has_time() const {
  return _internal_has_time();
}
inline void AngularAcceleration::clear_time() {
  time_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double AngularAcceleration::_internal_time() const {
  return time_;
}
inline double AngularAcceleration::time() const {
  // @@protoc_insertion_point(field_get:org.copdai.core.model.AngularAcceleration.time)
  return _internal_time();
}
inline void AngularAcceleration::_internal_set_time(double value) {
  _has_bits_[0] |= 0x00000008u;
  time_ = value;
}
inline void AngularAcceleration::set_time(double value) {
  _internal_set_time(value);
  // @@protoc_insertion_point(field_set:org.copdai.core.model.AngularAcceleration.time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace core
}  // namespace copdai
}  // namespace org

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AngularAcceleration_2eproto