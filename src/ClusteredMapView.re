/* Based on react-native-maps-super-cluster v1.5.0
ClusteredMapView.propTypes = {
  ...MapView.propTypes,
  // number
  radius: PropTypes.number,
  width: PropTypes.number.isRequired,
  height: PropTypes.number.isRequired,
  extent: PropTypes.number.isRequired,
  minZoom: PropTypes.number.isRequired,
  maxZoom: PropTypes.number.isRequired,
  clusterPressMaxChildren: PropTypes.number.isRequired,
  // array
  data: PropTypes.array.isRequired,
  // func
  onExplode: PropTypes.func,
  onImplode: PropTypes.func,
  onClusterPress: PropTypes.func,
  renderMarker: PropTypes.func.isRequired,
  renderCluster: PropTypes.func.isRequired,
  // bool
  animateClusters: PropTypes.bool.isRequired,
  clusteringEnabled: PropTypes.bool.isRequired,
  preserveClusterPressBehavior: PropTypes.bool.isRequired,
  // object
  layoutAnimationConf: PropTypes.object,
  edgePadding: PropTypes.object.isRequired,
  // string
  // mutiple
  accessor: PropTypes.oneOfType([PropTypes.string, PropTypes.func])
} */


[@react.component] [@bs.module "react-native-maps-super-cluster/ClusteredMapView"]
external make:
  (
      // number
      ~radius: Number=?,
      width: Number=BsReactNative.Dimensions.get(`screen).width,
      height: Number=BsReactNative.Dimensions.get(`screen).height,
      extent: Number=512,
      minZoom: Number=1,
      maxZoom: Number=16,
      clusterPressMaxChildren: Number=100,
      // array
      data: array()=[||], // Not sure, needs to error here if no data
      // func
      onExplode: ReactNative.Event.syntheticEvent() => unit=?,
      onImplode: ReactNative.Event.syntheticEvent() => unit=?,
      onClusterPress: ReactNative.Event.syntheticEvent() => unit=?,
      renderMarker: ReactNative.Event.syntheticEvent() => unit=?,
      renderCluster: ReactNative.Event.syntheticEvent() => unit=?,
      // bool
      animateClusters: bool=true,
      clusteringEnabled: bool=true,
      preserveClusterPressBehavior: bool=true,
      // object
      layoutAnimationConf: unit=BsReactNative.LayoutAnimation.layoutAnimationConfig.spring, // Not sure
      edgePadding: unit={ top: 10, left: 10, right: 10, bottom: 10 },
      // string
      accessor: ,// Need to switch to either accept string or function types

      // MapView.propTypes, Copy them below
  ) =>
  React.element =
  "default";
