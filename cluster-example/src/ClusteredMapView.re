type tData = {
  location: {
    .
    latitude: float,
    longitude: float,
  },
};

[@bs.module "react-native-maps-super-cluster/ClusteredMapView"]
[@bs.scope "react-native-maps-super-cluster"]
[@react.component]
// Required
external make:
  (~data: array(tData), ~accessor: unit => unit) =>
  // Optional
  // MapView props (copy below)
  React.element =
  "ClusteredMapView";
