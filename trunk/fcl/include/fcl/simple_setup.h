/*
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2011, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/** \author Jia Pan */


#ifndef FCL_SIMPLE_SETUP_H
#define FCL_SIMPLE_SETUP_H

#include "fcl/traversal_node_bvhs.h"
#include "fcl/traversal_node_shapes.h"
#include "fcl/traversal_node_bvh_shape.h"
#include "fcl/traversal_node_octree.h"
#include "fcl/BVH_utility.h"

/** \brief Main namespace */
namespace fcl
{

template<typename NarrowPhaseSolver>
bool initialize(OcTreeCollisionTraversalNode<NarrowPhaseSolver>& node,
                const OcTree& model1, const Transform3f& tf1,
                const OcTree& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;
  
  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename NarrowPhaseSolver>
bool initialize(OcTreeDistanceTraversalNode<NarrowPhaseSolver>& node,
                const OcTree& model1, const Transform3f& tf1,
                const OcTree& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);
 
  node.model1 = &model1;
  node.model2 = &model2;
  
  node.otsolver = otsolver;
  
  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeOcTreeCollisionTraversalNode<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const OcTree& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;

  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(OcTreeShapeCollisionTraversalNode<S, NarrowPhaseSolver>& node,
                const OcTree& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;

  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeOcTreeDistanceTraversalNode<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const OcTree& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;

  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}


template<typename S, typename NarrowPhaseSolver>
bool initialize(OcTreeShapeDistanceTraversalNode<S, NarrowPhaseSolver>& node,
                const OcTree& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;

  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename BV, typename NarrowPhaseSolver>
bool initialize(MeshOcTreeCollisionTraversalNode<BV, NarrowPhaseSolver>& node,
                const BVHModel<BV>& model1, const Transform3f& tf1,
                const OcTree& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;

  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename BV, typename NarrowPhaseSolver>
bool initialize(OcTreeMeshCollisionTraversalNode<BV, NarrowPhaseSolver>& node,
                const OcTree& model1, const Transform3f& tf1,
                const BVHModel<BV>& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;

  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}

template<typename BV, typename NarrowPhaseSolver>
bool initialize(MeshOcTreeDistanceTraversalNode<BV, NarrowPhaseSolver>& node,
                const BVHModel<BV>& model1, const Transform3f& tf1,
                const OcTree& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;
  
  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}


template<typename BV, typename NarrowPhaseSolver>
bool initialize(OcTreeMeshDistanceTraversalNode<BV, NarrowPhaseSolver>& node,
                const OcTree& model1, const Transform3f& tf1,
                const BVHModel<BV>& model2, const Transform3f& tf2,
                const OcTreeSolver<NarrowPhaseSolver>* otsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.model2 = &model2;
  
  node.otsolver = otsolver;

  node.tf1 = tf1;
  node.tf2 = tf2;

  return true;
}



/** \brief Initialize traversal node for collision between two geometric shapes */
template<typename S1, typename S2, typename NarrowPhaseSolver>
bool initialize(ShapeCollisionTraversalNode<S1, S2, NarrowPhaseSolver>& node,
                const S1& shape1, const Transform3f& tf1,
                const S2& shape2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  node.model1 = &shape1;
  node.tf1 = tf1;
  node.model2 = &shape2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  node.request = request;
  node.result = &result;
  result.setRequest(request);
  
  node.cost_density = shape1.cost_density * shape2.cost_density;

  return true;
}

/** \brief Initialize traversal node for collision between one mesh and one shape, given current object transform */
template<typename BV, typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeCollisionTraversalNode<BV, S, NarrowPhaseSolver>& node,
                BVHModel<BV>& model1, Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  if(!tf1.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed(model1.num_vertices);
    for(int i = 0; i < model1.num_vertices; ++i)
    {
      Vec3f& p = model1.vertices[i];
      Vec3f new_v = tf1.transform(p);
      vertices_transformed[i] = new_v;
    }

    model1.beginReplaceModel();
    model1.replaceSubModel(vertices_transformed);
    model1.endReplaceModel(use_refit, refit_bottomup);

    tf1.setIdentity();
  }

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  computeBV(model2, tf2, node.model2_bv);

  node.vertices = model1.vertices;
  node.tri_indices = model1.tri_indices;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.cost_density = model1.cost_density * model2.cost_density;

  return true;
}


/** \brief Initialize traversal node for collision between one mesh and one shape, given current object transform */
template<typename S, typename BV, typename NarrowPhaseSolver>
bool initialize(ShapeMeshCollisionTraversalNode<S, BV, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                BVHModel<BV>& model2, Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  if(!tf2.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed(model2.num_vertices);
    for(int i = 0; i < model2.num_vertices; ++i)
    {
      Vec3f& p = model2.vertices[i];
      Vec3f new_v = tf2.transform(p);
      vertices_transformed[i] = new_v;
    }

    model2.beginReplaceModel();
    model2.replaceSubModel(vertices_transformed);
    model2.endReplaceModel(use_refit, refit_bottomup);

    tf2.setIdentity();
  }

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  computeBV(model1, tf1, node.model1_bv);

  node.vertices = model2.vertices;
  node.tri_indices = model2.tri_indices;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.cost_density = model1.cost_density * model2.cost_density;

  return true;
}


namespace details
{

template<typename BV, typename S, typename NarrowPhaseSolver, template<typename, typename> class OrientedNode>
static inline bool setupMeshShapeCollisionOrientedNode(OrientedNode<S, NarrowPhaseSolver>& node, 
                                                       const BVHModel<BV>& model1, const Transform3f& tf1,
                                                       const S& model2, const Transform3f& tf2,
                                                       const NarrowPhaseSolver* nsolver,
                                                       const CollisionRequest& request,
                                                       CollisionResult& result)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  computeBV(model2, tf2, node.model2_bv);

  node.vertices = model1.vertices;
  node.tri_indices = model1.tri_indices;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.cost_density = model1.cost_density * model2.cost_density;

  return true;
}

}



/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for OBB type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeCollisionTraversalNodeOBB<S, NarrowPhaseSolver>& node,
                const BVHModel<OBB>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupMeshShapeCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for RSS type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeCollisionTraversalNodeRSS<S, NarrowPhaseSolver>& node,
                const BVHModel<RSS>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request, 
                CollisionResult& result)
{
  return details::setupMeshShapeCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for kIOS type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeCollisionTraversalNodekIOS<S, NarrowPhaseSolver>& node,
                const BVHModel<kIOS>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupMeshShapeCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for OBBRSS type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeCollisionTraversalNodeOBBRSS<S, NarrowPhaseSolver>& node,
                const BVHModel<OBBRSS>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupMeshShapeCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}



namespace details
{
template<typename S, typename BV, typename NarrowPhaseSolver, template<typename, typename> class OrientedNode>
static inline bool setupShapeMeshCollisionOrientedNode(OrientedNode<S, NarrowPhaseSolver>& node, 
                                                       const S& model1, const Transform3f& tf1,
                                                       const BVHModel<BV>& model2, const Transform3f& tf2,
                                                       const NarrowPhaseSolver* nsolver,
                                                       const CollisionRequest& request,
                                                       CollisionResult& result)
{
  if(model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  computeBV(model1, tf1, node.model1_bv);

  node.vertices = model2.vertices;
  node.tri_indices = model2.tri_indices;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.cost_density = model1.cost_density * model2.cost_density;

  return true;
}
}


/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for OBB type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshCollisionTraversalNodeOBB<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<OBB>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupShapeMeshCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for RSS type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshCollisionTraversalNodeRSS<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<RSS>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupShapeMeshCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for kIOS type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshCollisionTraversalNodekIOS<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<kIOS>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupShapeMeshCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

/** \brief Initialize the traversal node for collision between one mesh and one shape, specialized for OBBRSS type */
template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshCollisionTraversalNodeOBBRSS<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<OBBRSS>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const CollisionRequest& request,
                CollisionResult& result)
{
  return details::setupShapeMeshCollisionOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}




/** \brief Initialize traversal node for collision between two meshes, given the current transforms */
template<typename BV>
bool initialize(MeshCollisionTraversalNode<BV>& node,
                BVHModel<BV>& model1, Transform3f& tf1,
                BVHModel<BV>& model2, Transform3f& tf2,
                const CollisionRequest& request,
                CollisionResult& result,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  if(!tf1.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed1(model1.num_vertices);
    for(int i = 0; i < model1.num_vertices; ++i)
    {
      Vec3f& p = model1.vertices[i];
      Vec3f new_v = tf1.transform(p);
      vertices_transformed1[i] = new_v;
    }

    model1.beginReplaceModel();
    model1.replaceSubModel(vertices_transformed1);
    model1.endReplaceModel(use_refit, refit_bottomup);

    tf1.setIdentity();
  }

  if(!tf2.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed2(model2.num_vertices);
    for(int i = 0; i < model2.num_vertices; ++i)
    {
      Vec3f& p = model2.vertices[i];
      Vec3f new_v = tf2.transform(p);
      vertices_transformed2[i] = new_v;
    }

    model2.beginReplaceModel();
    model2.replaceSubModel(vertices_transformed2);
    model2.endReplaceModel(use_refit, refit_bottomup);

    tf2.setIdentity();
  }

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices1 = model1.tri_indices;
  node.tri_indices2 = model2.tri_indices;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.cost_density = model1.cost_density * model2.cost_density;

  return true;
}


/** \brief Initialize traversal node for collision between two meshes, specialized for OBB type */
bool initialize(MeshCollisionTraversalNodeOBB& node,
                const BVHModel<OBB>& model1, const Transform3f& tf1,
                const BVHModel<OBB>& model2, const Transform3f& tf2,
                const CollisionRequest& request, CollisionResult& result);

bool initialize(MeshCollisionTraversalNodeRSS& node,
                const BVHModel<RSS>& model1, const Transform3f& tf1,
                const BVHModel<RSS>& model2, const Transform3f& tf2,
                const CollisionRequest& request, CollisionResult& result);

bool initialize(MeshCollisionTraversalNodeOBBRSS& node,
                const BVHModel<OBBRSS>& model1, const Transform3f& tf1,
                const BVHModel<OBBRSS>& model2, const Transform3f& tf2,
                const CollisionRequest& request, CollisionResult& result);

bool initialize(MeshCollisionTraversalNodekIOS& node,
                const BVHModel<kIOS>& model1, const Transform3f& tf1,
                const BVHModel<kIOS>& model2, const Transform3f& tf2,
                const CollisionRequest& request, CollisionResult& result);

#if USE_SVMLIGHT

/** \brief Initialize traversal node for collision between two point clouds, given current transforms */
template<typename BV, bool use_refit, bool refit_bottomup>
bool initialize(PointCloudCollisionTraversalNode<BV>& node,
                BVHModel<BV>& model1, Transform3f& tf1,
                BVHModel<BV>& model2, Transform3f& tf2,
                const CollisionRequest& request,
                FCL_REAL collision_prob_threshold = 0.5,
                int leaf_size_threshold = 1,
                FCL_REAL expand_r = 1)
{
  if(!(model1.getModelType() == BVH_MODEL_TRIANGLES || model1.getModelType() == BVH_MODEL_POINTCLOUD)
      || !(model2.getModelType() == BVH_MODEL_TRIANGLES || model2.getModelType() == BVH_MODEL_POINTCLOUD))
    return false;

  if(!tf1.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed1(model1.num_vertices);
    for(int i = 0; i < model1.num_vertices; ++i)
    {
      Vec3f& p = model1.vertices[i];
      Vec3f new_v = tf1.transform(p);
      vertices_transformed1[i] = new_v;
    }

    model1.beginReplaceModel();
    model1.replaceSubModel(vertices_transformed1);
    model1.endReplaceModel(use_refit, refit_bottomup);

    tf1.setIdentity();
  }

  if(!tf2.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed2(model2.num_vertices);
    for(int i = 0; i < model2.num_vertices; ++i)
    {
      Vec3f& p = model2.vertices[i];
      Vec3f new_v = tf2.transform(p);
      vertices_transformed2[i] = new_v;
    }

    model2.beginReplaceModel();
    model2.replaceSubModel(vertices_transformed2);
    model2.endReplaceModel(use_refit, refit_bottomup);

    tf2.setIdentity();
  }

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.uc1.reset(new Variance3f[model1.num_vertices]);
  node.uc2.reset(new Variance3f[model2.num_vertices]);

  estimateSamplingVariance(model1.vertices, model1.num_vertices, node.uc1.get());
  estimateSamplingVariance(model2.vertices, model2.num_vertices, node.uc2.get());

  BVHExpand(model1, node.uc1.get(), expand_r);
  BVHExpand(model2, node.uc2.get(), expand_r);

  node.request = request;

  node.collision_prob_threshold = collision_prob_threshold;
  node.leaf_size_threshold = leaf_size_threshold;

  return true;
}

/** \brief Initialize traversal node for collision between two point clouds, given current transforms, specialized for OBB type */ 
bool initialize(PointCloudCollisionTraversalNodeOBB& node,
                BVHModel<OBB>& model1, const Transform3f& tf1,
                BVHModel<OBB>& model2, const Transform3f& tf2,
                const CollisionRequest& request,
                FCL_REAL collision_prob_threshold = 0.5,
                int leaf_size_threshold = 1,
                FCL_REAL expand_r = 1);

/** \brief Initialize traversal node for collision between two point clouds, given current transforms, specialized for RSS type */
bool initialize(PointCloudCollisionTraversalNodeRSS& node,
                BVHModel<RSS>& model1, const Transform3f& tf1,
                BVHModel<RSS>& model2, const Transform3f& tf2,
                const CollisionRequest& request,
                FCL_REAL collision_prob_threshold = 0.5,
                int leaf_size_threshold = 1,
                FCL_REAL expand_r = 1);

/** \brief Initialize traversal node for collision between one point cloud and one mesh, given current transforms */
template<typename BV, bool use_refit, bool refit_bottomup>
bool initialize(PointCloudMeshCollisionTraversalNode<BV>& node,
                BVHModel<BV>& model1, Transform3f& tf1,
                BVHModel<BV>& model2, Transform3f& tf2,
                const CollisionRequest& request,
                FCL_REAL collision_prob_threshold = 0.5,
                int leaf_size_threshold = 1,
                FCL_REAL expand_r = 1)
{
  if(!(model1.getModelType() == BVH_MODEL_TRIANGLES || model1.getModelType() == BVH_MODEL_POINTCLOUD) || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  if(!tf1.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed1(model1.num_vertices);
    for(int i = 0; i < model1.num_vertices; ++i)
    {
      Vec3f& p = model1.vertices[i];
      Vec3f new_v = tf1.transform(p);
      vertices_transformed1[i] = new_v;
    }

    model1.beginReplaceModel();
    model1.replaceSubModel(vertices_transformed1);
    model1.endReplaceModel(use_refit, refit_bottomup);

    tf1.setIdentity();
  }

  if(!tf2.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed2(model2.num_vertices);
    for(int i = 0; i < model2.num_vertices; ++i)
    {
      Vec3f& p = model2.vertices[i];
      Vec3f new_v = tf2.transform(p);
      vertices_transformed2[i] = new_v;
    }

    model2.beginReplaceModel();
    model2.replaceSubModel(vertices_transformed2);
    model2.endReplaceModel(use_refit, refit_bottomup);

    tf2.setIdentity();
  }

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices2 = model2.tri_indices;
  node.uc1.reset(new Variance3f[model1.num_vertices]);

  estimateSamplingVariance(model1.vertices, model1.num_vertices, node.uc1.get());

  BVHExpand(model1, node.uc1.get(), expand_r);

  node.request = request;

  node.collision_prob_threshold = collision_prob_threshold;
  node.leaf_size_threshold = leaf_size_threshold;

  return true;
}


/** \brief Initialize traversal node for collision between one point cloud and one mesh, given current transforms, specialized for OBB type */
bool initialize(PointCloudMeshCollisionTraversalNodeOBB& node,
                BVHModel<OBB>& model1, const Transform3f& tf1,
                const BVHModel<OBB>& model2, const Transform3f& tf2,
                const CollisionRequest& request,
                FCL_REAL collision_prob_threshold = 0.5,
                int leaf_size_threshold = 1,
                FCL_REAL expand_r = 1);

/** \brief Initialize traversal node for collision between one point cloud and one mesh, given current transforms, specialized for RSS type */
bool initialize(PointCloudMeshCollisionTraversalNodeRSS& node,
                BVHModel<RSS>& model1, const Transform3f& tf1,
                const BVHModel<RSS>& model2, const Transform3f& tf2,
                const CollisionRequest& request,
                FCL_REAL collision_prob_threshold = 0.5,
                int leaf_size_threshold = 1,
                FCL_REAL expand_r = 1);

#endif


/** \brief Initialize traversal node for distance between two geometric shapes */
template<typename S1, typename S2, typename NarrowPhaseSolver>
bool initialize(ShapeDistanceTraversalNode<S1, S2, NarrowPhaseSolver>& node,
                const S1& shape1, const Transform3f& tf1,
                const S2& shape2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  node.request = request;
  node.result = &result;

  node.model1 = &shape1;
  node.tf1 = tf1;
  node.model2 = &shape2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  return true;
}

/** \brief Initialize traversal node for distance computation between two meshes, given the current transforms */
template<typename BV>
bool initialize(MeshDistanceTraversalNode<BV>& node,
                BVHModel<BV>& model1, Transform3f& tf1,
                BVHModel<BV>& model2, Transform3f& tf2,
                const DistanceRequest& request,
                DistanceResult& result,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  if(!tf1.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed1(model1.num_vertices);
    for(int i = 0; i < model1.num_vertices; ++i)
    {
      Vec3f& p = model1.vertices[i];
      Vec3f new_v = tf1.transform(p);
      vertices_transformed1[i] = new_v;
    }

    model1.beginReplaceModel();
    model1.replaceSubModel(vertices_transformed1);
    model1.endReplaceModel(use_refit, refit_bottomup);

    tf1.setIdentity();
  }

  if(!tf2.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed2(model2.num_vertices);
    for(int i = 0; i < model2.num_vertices; ++i)
    {
      Vec3f& p = model2.vertices[i];
      Vec3f new_v = tf2.transform(p);
      vertices_transformed2[i] = new_v;
    }

    model2.beginReplaceModel();
    model2.replaceSubModel(vertices_transformed2);
    model2.endReplaceModel(use_refit, refit_bottomup);

    tf2.setIdentity();
  }

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices1 = model1.tri_indices;
  node.tri_indices2 = model2.tri_indices;

  return true;
}


/** \brief Initialize traversal node for distance computation between two meshes, given the current transforms */
bool initialize(MeshDistanceTraversalNodeRSS& node,
                const BVHModel<RSS>& model1, const Transform3f& tf1,
                const BVHModel<RSS>& model2, const Transform3f& tf2,
                const DistanceRequest& request,
                DistanceResult& result);


bool initialize(MeshDistanceTraversalNodekIOS& node,
                const BVHModel<kIOS>& model1, const Transform3f& tf1,
                const BVHModel<kIOS>& model2, const Transform3f& tf2,
                const DistanceRequest& request,
                DistanceResult& result);

bool initialize(MeshDistanceTraversalNodeOBBRSS& node,
                const BVHModel<OBBRSS>& model1, const Transform3f& tf1,
                const BVHModel<OBBRSS>& model2, const Transform3f& tf2,
                const DistanceRequest& request,
                DistanceResult& result);


template<typename BV, typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeDistanceTraversalNode<BV, S, NarrowPhaseSolver>& node,
                BVHModel<BV>& model1, Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  if(!tf1.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed1(model1.num_vertices);
    for(int i = 0; i < model1.num_vertices; ++i)
    {
      Vec3f& p = model1.vertices[i];
      Vec3f new_v = tf1.transform(p);
      vertices_transformed1[i] = new_v;
    }

    model1.beginReplaceModel();
    model1.replaceSubModel(vertices_transformed1);
    model1.endReplaceModel(use_refit, refit_bottomup);

    tf1.setIdentity();
  }

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;
  
  node.vertices = model1.vertices;
  node.tri_indices = model1.tri_indices;

  computeBV(model2, tf2, node.model2_bv);

  return true;
}


template<typename S, typename BV, typename NarrowPhaseSolver>
bool initialize(ShapeMeshDistanceTraversalNode<S, BV, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                BVHModel<BV>& model2, Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;
  
  if(!tf2.isIdentity())
  {
    std::vector<Vec3f> vertices_transformed(model2.num_vertices);
    for(int i = 0; i < model2.num_vertices; ++i)
    {
      Vec3f& p = model2.vertices[i];
      Vec3f new_v = tf2.transform(p);
      vertices_transformed[i] = new_v;
    }

    model2.beginReplaceModel();
    model2.replaceSubModel(vertices_transformed);
    model2.endReplaceModel(use_refit, refit_bottomup);

    tf2.setIdentity();
  }

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  node.vertices = model2.vertices;
  node.tri_indices = model2.tri_indices;

  computeBV(model1, tf1, node.model1_bv);
  
  return true;
}


namespace details
{

template<typename BV, typename S, typename NarrowPhaseSolver, template<typename, typename> class OrientedNode>
static inline bool setupMeshShapeDistanceOrientedNode(OrientedNode<S, NarrowPhaseSolver>& node, 
                                                      const BVHModel<BV>& model1, const Transform3f& tf1,
                                                      const S& model2, const Transform3f& tf2,
                                                      const NarrowPhaseSolver* nsolver,
                                                      const DistanceRequest& request,
                                                      DistanceResult& result)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  computeBV(model2, tf2, node.model2_bv);

  node.vertices = model1.vertices;
  node.tri_indices = model1.tri_indices;

  return true;
}
}


template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeDistanceTraversalNodeRSS<S, NarrowPhaseSolver>& node,
                const BVHModel<RSS>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request, 
                DistanceResult& result)
{
  return details::setupMeshShapeDistanceOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeDistanceTraversalNodekIOS<S, NarrowPhaseSolver>& node,
                const BVHModel<kIOS>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  return details::setupMeshShapeDistanceOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);  
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(MeshShapeDistanceTraversalNodeOBBRSS<S, NarrowPhaseSolver>& node,
                const BVHModel<OBBRSS>& model1, const Transform3f& tf1,
                const S& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  return details::setupMeshShapeDistanceOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}


namespace details
{
template<typename S, typename BV, typename NarrowPhaseSolver, template<typename, typename> class OrientedNode>
static inline bool setupShapeMeshDistanceOrientedNode(OrientedNode<S, NarrowPhaseSolver>& node,
                                                      const S& model1, const Transform3f& tf1,
                                                      const BVHModel<BV>& model2, const Transform3f& tf2,
                                                      const NarrowPhaseSolver* nsolver,
                                                      const DistanceRequest& request,
                                                      DistanceResult& result)
{
  if(model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.request = request;
  node.result = &result;
  result.setRequest(request);

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;
  node.nsolver = nsolver;

  computeBV(model1, tf1, node.model1_bv);

  node.vertices = model2.vertices;
  node.tri_indices = model2.tri_indices;
  node.R = tf2.getRotation();
  node.T = tf2.getTranslation();

  return true;  
}
}



template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshDistanceTraversalNodeRSS<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<RSS>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  return details::setupShapeMeshDistanceOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshDistanceTraversalNodekIOS<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<kIOS>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  return details::setupShapeMeshDistanceOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}

template<typename S, typename NarrowPhaseSolver>
bool initialize(ShapeMeshDistanceTraversalNodeOBBRSS<S, NarrowPhaseSolver>& node,
                const S& model1, const Transform3f& tf1,
                const BVHModel<OBBRSS>& model2, const Transform3f& tf2,
                const NarrowPhaseSolver* nsolver,
                const DistanceRequest& request,
                DistanceResult& result)
{
  return details::setupShapeMeshDistanceOrientedNode(node, model1, tf1, model2, tf2, nsolver, request, result);
}




/** \brief Initialize traversal node for continuous collision detection between two meshes */
template<typename BV>
bool initialize(MeshContinuousCollisionTraversalNode<BV>& node,
                const BVHModel<BV>& model1, const Transform3f& tf1,
                const BVHModel<BV>& model2, const Transform3f& tf2,
                const CollisionRequest& request)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices1 = model1.tri_indices;
  node.tri_indices2 = model2.tri_indices;

  node.prev_vertices1 = model1.prev_vertices;
  node.prev_vertices2 = model2.prev_vertices;

  node.request = request;

  return true;
}

/** \brief Initialize traversal node for continuous collision detection between one mesh and one point cloud */
template<typename BV>
bool initialize(MeshPointCloudContinuousCollisionTraversalNode<BV>& node,
                const BVHModel<BV>& model1, const Transform3f& tf1,
                const BVHModel<BV>& model2, const Transform3f& tf2,
                const CollisionRequest& request)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES || !(model2.getModelType() == BVH_MODEL_TRIANGLES || model2.getModelType() == BVH_MODEL_POINTCLOUD))
    return false;

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices1 = model1.tri_indices;
  node.prev_vertices1 = model1.prev_vertices;
  node.prev_vertices2 = model2.prev_vertices;

  node.request = request;

  return true;
}

/** \brief Initialize traversal node for continuous collision detection between one point cloud and one mesh */
template<typename BV>
bool initialize(PointCloudMeshContinuousCollisionTraversalNode<BV>& node,
                const BVHModel<BV>& model1, const Transform3f& tf1,
                const BVHModel<BV>& model2, const Transform3f& tf2,
                const CollisionRequest& request)
{
  if(!(model1.getModelType() == BVH_MODEL_TRIANGLES || model1.getModelType() == BVH_MODEL_POINTCLOUD) || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.model1 = &model1;
  node.tf1 = tf1;
  node.model2 = &model2;
  node.tf2 = tf2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices2 = model2.tri_indices;
  node.prev_vertices1 = model1.prev_vertices;
  node.prev_vertices2 = model2.prev_vertices;

  node.request = request;

  return true;
}




/** \brief Initialize traversal node for conservative advancement computation between two meshes, given the current transforms */
template<typename BV>
bool initialize(MeshConservativeAdvancementTraversalNode<BV>& node,
                BVHModel<BV>& model1,
                BVHModel<BV>& model2,
                const Matrix3f& R1, const Vec3f& T1, const Matrix3f& R2, const Vec3f& T2, FCL_REAL w = 1,
                bool use_refit = false, bool refit_bottomup = false)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  std::vector<Vec3f> vertices_transformed1(model1.num_vertices);
  for(int i = 0; i < model1.num_vertices; ++i)
  {
    Vec3f& p = model1.vertices[i];
    Vec3f new_v = R1 * p + T1;
    vertices_transformed1[i] = new_v;
  }


  std::vector<Vec3f> vertices_transformed2(model2.num_vertices);
  for(int i = 0; i < model2.num_vertices; ++i)
  {
    Vec3f& p = model2.vertices[i];
    Vec3f new_v = R2 * p + T2;
    vertices_transformed2[i] = new_v;
  }

  model1.beginReplaceModel();
  model1.replaceSubModel(vertices_transformed1);
  model1.endReplaceModel(use_refit, refit_bottomup);

  model2.beginReplaceModel();
  model2.replaceSubModel(vertices_transformed2);
  model2.endReplaceModel(use_refit, refit_bottomup);

  node.model1 = &model1;
  node.model2 = &model2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices1 = model1.tri_indices;
  node.tri_indices2 = model2.tri_indices;

  node.w = w;

  return true;
}


/** \brief Initialize traversal node for conservative advancement computation between two meshes, given the current transforms, specialized for RSS */
inline bool initialize(MeshConservativeAdvancementTraversalNodeRSS& node, const BVHModel<RSS>& model1, const BVHModel<RSS>& model2,
                const Matrix3f& R1, const Vec3f& T1, const Matrix3f& R2, const Vec3f& T2, FCL_REAL w = 1)
{
  if(model1.getModelType() != BVH_MODEL_TRIANGLES || model2.getModelType() != BVH_MODEL_TRIANGLES)
    return false;

  node.model1 = &model1;
  node.model2 = &model2;

  node.vertices1 = model1.vertices;
  node.vertices2 = model2.vertices;

  node.tri_indices1 = model1.tri_indices;
  node.tri_indices2 = model2.tri_indices;

  node.w = w;

  relativeTransform(R1, T1, R2, T2, node.R, node.T);

  return true;
}

}

#endif
