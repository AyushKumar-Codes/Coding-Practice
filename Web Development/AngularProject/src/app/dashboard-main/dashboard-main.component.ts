import { Component } from '@angular/core';
import $ from 'jquery';
@Component({
  selector: 'app-dashboard-main',
  templateUrl: './dashboard-main.component.html',
  styleUrl: './dashboard-main.component.css'
})
export class DashboardMainComponent {
  ngOnInit(){
    $(document).ready(()=>{
      $("#sidebar-toggle").click(()=>{
        $("#sidebar").toggleClass("collapsed");
      });
    })
  }
}
