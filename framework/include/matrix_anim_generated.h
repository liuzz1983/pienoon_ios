// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MATRIXANIM_MOTIVE_H_
#define FLATBUFFERS_GENERATED_MATRIXANIM_MOTIVE_H_

#include "flatbuffers/flatbuffers.h"


namespace motive {

struct CompactSplineNodeFb;
struct CompactSplineFb;
struct ConstantOpFb;
struct MatrixOpFb;
struct MatrixAnimFb;

enum MatrixOperationTypeFb {
  MatrixOperationTypeFb_kInvalidMatrixOperation = 0,
  MatrixOperationTypeFb_kRotateAboutX = 1,
  MatrixOperationTypeFb_kRotateAboutY = 2,
  MatrixOperationTypeFb_kRotateAboutZ = 3,
  MatrixOperationTypeFb_kTranslateX = 4,
  MatrixOperationTypeFb_kTranslateY = 5,
  MatrixOperationTypeFb_kTranslateZ = 6,
  MatrixOperationTypeFb_kScaleX = 7,
  MatrixOperationTypeFb_kScaleY = 8,
  MatrixOperationTypeFb_kScaleZ = 9,
  MatrixOperationTypeFb_kScaleUniformly = 10,
  MatrixOperationTypeFb_kNumMatrixOperationTypes = 11
};

inline const char **EnumNamesMatrixOperationTypeFb() {
  static const char *names[] = { "kInvalidMatrixOperation", "kRotateAboutX", "kRotateAboutY", "kRotateAboutZ", "kTranslateX", "kTranslateY", "kTranslateZ", "kScaleX", "kScaleY", "kScaleZ", "kScaleUniformly", "kNumMatrixOperationTypes", nullptr };
  return names;
}

inline const char *EnumNameMatrixOperationTypeFb(MatrixOperationTypeFb e) { return EnumNamesMatrixOperationTypeFb()[e]; }

enum MatrixOpValueFb {
  MatrixOpValueFb_NONE = 0,
  MatrixOpValueFb_CompactSplineFb = 1,
  MatrixOpValueFb_ConstantOpFb = 2
};

inline const char **EnumNamesMatrixOpValueFb() {
  static const char *names[] = { "NONE", "CompactSplineFb", "ConstantOpFb", nullptr };
  return names;
}

inline const char *EnumNameMatrixOpValueFb(MatrixOpValueFb e) { return EnumNamesMatrixOpValueFb()[e]; }

inline bool VerifyMatrixOpValueFb(flatbuffers::Verifier &verifier, const void *union_obj, MatrixOpValueFb type);

MANUALLY_ALIGNED_STRUCT(2) CompactSplineNodeFb FLATBUFFERS_FINAL_CLASS {
 private:
  uint16_t x_;
  uint16_t y_;
  int16_t angle_;

 public:
  CompactSplineNodeFb(uint16_t x, uint16_t y, int16_t angle)
    : x_(flatbuffers::EndianScalar(x)), y_(flatbuffers::EndianScalar(y)), angle_(flatbuffers::EndianScalar(angle)) { }

  uint16_t x() const { return flatbuffers::EndianScalar(x_); }
  uint16_t y() const { return flatbuffers::EndianScalar(y_); }
  int16_t angle() const { return flatbuffers::EndianScalar(angle_); }
};
STRUCT_END(CompactSplineNodeFb, 6);

struct CompactSplineFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  float y_range_start() const { return GetField<float>(4, 0); }
  float y_range_end() const { return GetField<float>(6, 0); }
  float x_granularity() const { return GetField<float>(8, 0); }
  uint8_t modular_arithmetic() const { return GetField<uint8_t>(10, 0); }
  const flatbuffers::Vector<const CompactSplineNodeFb *> *nodes() const { return GetPointer<const flatbuffers::Vector<const CompactSplineNodeFb *> *>(12); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, 4 /* y_range_start */) &&
           VerifyField<float>(verifier, 6 /* y_range_end */) &&
           VerifyField<float>(verifier, 8 /* x_granularity */) &&
           VerifyField<uint8_t>(verifier, 10 /* modular_arithmetic */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* nodes */) &&
           verifier.Verify(nodes()) &&
           verifier.EndTable();
  }
};

struct CompactSplineFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_y_range_start(float y_range_start) { fbb_.AddElement<float>(4, y_range_start, 0); }
  void add_y_range_end(float y_range_end) { fbb_.AddElement<float>(6, y_range_end, 0); }
  void add_x_granularity(float x_granularity) { fbb_.AddElement<float>(8, x_granularity, 0); }
  void add_modular_arithmetic(uint8_t modular_arithmetic) { fbb_.AddElement<uint8_t>(10, modular_arithmetic, 0); }
  void add_nodes(flatbuffers::Offset<flatbuffers::Vector<const CompactSplineNodeFb *>> nodes) { fbb_.AddOffset(12, nodes); }
  CompactSplineFbBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  CompactSplineFbBuilder &operator=(const CompactSplineFbBuilder &);
  flatbuffers::Offset<CompactSplineFb> Finish() {
    auto o = flatbuffers::Offset<CompactSplineFb>(fbb_.EndTable(start_, 5));
    return o;
  }
};

inline flatbuffers::Offset<CompactSplineFb> CreateCompactSplineFb(flatbuffers::FlatBufferBuilder &_fbb,
   float y_range_start = 0,
   float y_range_end = 0,
   float x_granularity = 0,
   uint8_t modular_arithmetic = 0,
   flatbuffers::Offset<flatbuffers::Vector<const CompactSplineNodeFb *>> nodes = 0) {
  CompactSplineFbBuilder builder_(_fbb);
  builder_.add_nodes(nodes);
  builder_.add_x_granularity(x_granularity);
  builder_.add_y_range_end(y_range_end);
  builder_.add_y_range_start(y_range_start);
  builder_.add_modular_arithmetic(modular_arithmetic);
  return builder_.Finish();
}

struct ConstantOpFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  float y_const() const { return GetField<float>(4, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, 4 /* y_const */) &&
           verifier.EndTable();
  }
};

struct ConstantOpFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_y_const(float y_const) { fbb_.AddElement<float>(4, y_const, 0); }
  ConstantOpFbBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ConstantOpFbBuilder &operator=(const ConstantOpFbBuilder &);
  flatbuffers::Offset<ConstantOpFb> Finish() {
    auto o = flatbuffers::Offset<ConstantOpFb>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<ConstantOpFb> CreateConstantOpFb(flatbuffers::FlatBufferBuilder &_fbb,
   float y_const = 0) {
  ConstantOpFbBuilder builder_(_fbb);
  builder_.add_y_const(y_const);
  return builder_.Finish();
}

struct MatrixOpFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  MatrixOperationTypeFb type() const { return static_cast<MatrixOperationTypeFb>(GetField<int8_t>(4, 0)); }
  MatrixOpValueFb value_type() const { return static_cast<MatrixOpValueFb>(GetField<uint8_t>(6, 0)); }
  const void *value() const { return GetPointer<const void *>(8); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, 4 /* type */) &&
           VerifyField<uint8_t>(verifier, 6 /* value_type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* value */) &&
           VerifyMatrixOpValueFb(verifier, value(), value_type()) &&
           verifier.EndTable();
  }
};

struct MatrixOpFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(MatrixOperationTypeFb type) { fbb_.AddElement<int8_t>(4, static_cast<int8_t>(type), 0); }
  void add_value_type(MatrixOpValueFb value_type) { fbb_.AddElement<uint8_t>(6, static_cast<uint8_t>(value_type), 0); }
  void add_value(flatbuffers::Offset<void> value) { fbb_.AddOffset(8, value); }
  MatrixOpFbBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MatrixOpFbBuilder &operator=(const MatrixOpFbBuilder &);
  flatbuffers::Offset<MatrixOpFb> Finish() {
    auto o = flatbuffers::Offset<MatrixOpFb>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<MatrixOpFb> CreateMatrixOpFb(flatbuffers::FlatBufferBuilder &_fbb,
   MatrixOperationTypeFb type = MatrixOperationTypeFb_kInvalidMatrixOperation,
   MatrixOpValueFb value_type = MatrixOpValueFb_NONE,
   flatbuffers::Offset<void> value = 0) {
  MatrixOpFbBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_value_type(value_type);
  builder_.add_type(type);
  return builder_.Finish();
}

struct MatrixAnimFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::Vector<flatbuffers::Offset<MatrixOpFb>> *ops() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<MatrixOpFb>> *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* ops */) &&
           verifier.Verify(ops()) &&
           verifier.VerifyVectorOfTables(ops()) &&
           verifier.EndTable();
  }
};

struct MatrixAnimFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ops(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<MatrixOpFb>>> ops) { fbb_.AddOffset(4, ops); }
  MatrixAnimFbBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MatrixAnimFbBuilder &operator=(const MatrixAnimFbBuilder &);
  flatbuffers::Offset<MatrixAnimFb> Finish() {
    auto o = flatbuffers::Offset<MatrixAnimFb>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<MatrixAnimFb> CreateMatrixAnimFb(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<MatrixOpFb>>> ops = 0) {
  MatrixAnimFbBuilder builder_(_fbb);
  builder_.add_ops(ops);
  return builder_.Finish();
}

inline bool VerifyMatrixOpValueFb(flatbuffers::Verifier &verifier, const void *union_obj, MatrixOpValueFb type) {
  switch (type) {
    case MatrixOpValueFb_NONE: return true;
    case MatrixOpValueFb_CompactSplineFb: return verifier.VerifyTable(reinterpret_cast<const CompactSplineFb *>(union_obj));
    case MatrixOpValueFb_ConstantOpFb: return verifier.VerifyTable(reinterpret_cast<const ConstantOpFb *>(union_obj));
    default: return false;
  }
}

inline const MatrixAnimFb *GetMatrixAnimFb(const void *buf) { return flatbuffers::GetRoot<MatrixAnimFb>(buf); }

inline bool VerifyMatrixAnimFbBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<MatrixAnimFb>(); }

inline const char *MatrixAnimFbIdentifier() { return "ANIM"; }

inline bool MatrixAnimFbBufferHasIdentifier(const void *buf) { return flatbuffers::BufferHasIdentifier(buf, MatrixAnimFbIdentifier()); }

inline void FinishMatrixAnimFbBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<MatrixAnimFb> root) { fbb.Finish(root, MatrixAnimFbIdentifier()); }

}  // namespace motive

#endif  // FLATBUFFERS_GENERATED_MATRIXANIM_MOTIVE_H_
