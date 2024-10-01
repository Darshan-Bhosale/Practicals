import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'ngifforswitch';
  title_if = "ngIf";
  length = 20;

  // ng for
  title_for = "ngFor";
  Students : any[]  = ["Darshan","Tanuja","Dishant"];

// ng switch
  title_switch = "ngSwitch";
  colorSelected : string = 'green';
}
